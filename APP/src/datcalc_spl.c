
#define _DATCALC_SPL

#include "main.h"								// union/define definition
#include "datcalc_spl.h"

/***********************************************************************
** Announcement of internal function prototype
***********************************************************************/
long lrccr_w;						// Charge relearn capacity
long lrcdr_w;						// Discharge relearn capacity
uint16_t  t_com0dsoclast ;  // RelativeStateOfCharge// RelativeStateOfCharge=t_com0d;
uint16_t firstCurrentCnt=0;
uint16_t secondCurrentCnt=0;
float currentRultiple=1.0;


uint16_t   t_com0fCap;
uint32_t   t_com10Cap;
uint8_t	   arelearn_cnt;					// Relearn counter
uint16_t   toldrc;							// last RemCap value
uint16_t   tdfup_cnt;						// DataFlash update counter 
uint32_t   lmaxerr_cnt;					// MaxError integration counter
uint16_t   tccup;							// CycleCount increment cap.
uint16_t  tcom10c_w;						// FCC temporary save area
uint16_t  tcph_v;							// CP_H
uint16_t  tcpl_v;							// CP_L
uint8_t   arcflg;							// Flags for RC
// uint16_t Vol_0RSOC_time  ;
uint16_t VoltagetoRSOCcount = 0 ;
t_Si_Loss_Para t_si_loss_para;

static uint32_t onedelay = 0;
static uint32_t seconddelay = 0;
// uint8_t dsg_point_test;
uint8_t Qmax_update_DSG_test  ; 
uint8_t RSOC_USE_DF_test  ;
uint8_t f_study_d_test ;
uint16_t t_com17_w;
uint8_t   f_init_first_time ;
int16_t dsg_upfcc_keep_current;
int8_t dsg_upfcc_keep_temp;
uint16_t save_fac_dsg_upd;
uint16_t save_dsg_upd_fcc;
uint32_t leiji;
uint8_t count_3s;
uint8_t count_3s_b ;
uint8_t Count_13s_rsoc_2;
uint8_t f_count3s_en;
uint8_t  f_count3s_en_b ;
uint8_t f_ful_chg_once ;

uint8_t f_relax_last;

uint8_t f_discharge_last2;

uint8_t f_relax_last_dsgupdate_use ;
uint8_t f_charge_last_dsgupdate_use  ;
uint8_t bit_chg_smooth;

uint8_t pinghua_soc_start;
uint8_t buchang_con_cnt;
uint16_t temp_Cur;
uint16_t chg_smooth_cur;

uint8_t bit_rc_use;
int32_t lrc_w_last ;
int8_t CellTemp_last_time_update ; 
int16_t dis_fac_cpl = 100  ; // discharge factor when reach cpl voltage .







uint8_t  Count_13s_rsoc_1  ;
uint8_t temptime_D_Discharge_0_voltage_Delay ;
//  uint8_t  Count_13s_rsoc_2  ;
uint8_t irsoc_last ;



/*""FUNC COMMENT""***************************************************
* ID			: 1.0
* module outline: Internal resistance calculation function
*-------------------------------------------------------------------
* Include		: 
*-------------------------------------------------------------------
* Declaration	: uint16_t Calc_InReg(void)
*-------------------------------------------------------------------
* Function		: 
*				: Calculate capacity correction voltage adjusting value
*				: by increasing the internal resistance.
*-------------------------------------------------------------------
* Argument		: None
*-------------------------------------------------------------------
* Return		: uint16_t	: Correction voltage
*-------------------------------------------------------------------
* Input			: None
* Output		: None
*-------------------------------------------------------------------
* Used function : 
*-------------------------------------------------------------------
* Caution		: 
*-------------------------------------------------------------------
* History		: 2012.08.01 Ver 0.01
* 				: New create
* 
*""FUNC COMMENT END""**********************************************/
uint16_t Calc_InReg(void)
{
	uint8_t	awork1,awork2;
	uint16_t	twork1,twork2;
	uint8_t	al1;
	
												// Search the index
	for( al1=0; _CycleCount>=INREG_CYCLE[al1] && al1<5; al1++ );
												// Set each correction data
	if( al1 == 0 )								// First index ?
	{
		awork1 = 0;
		awork2 = INREG_TBL[0];
		twork1 = _CycleCount;
		twork2 = INREG_CYCLE[0];
	} 
	else 
	{									// 2nd or more
		al1--;
		awork1 = INREG_TBL[al1];
		awork2 = INREG_TBL[al1+1] - INREG_TBL[al1];
		twork1 = _CycleCount - INREG_CYCLE[al1];
		twork2 = INREG_CYCLE[al1+1] - INREG_CYCLE[al1];
	}
	//Correction voltage[mV] = Internal resistance x Current / 1000
	return ((((long)awork2*twork1/twork2)+awork1)*I_abs/1000);	
}




/*""FUNC COMMENT""***************************************************
* ID			: 1.0
* module outline: Correction voltage calculation function
*-------------------------------------------------------------------
* Include		: 
*-------------------------------------------------------------------
* Declaration	: void Calc_CPVolt(void)
*-------------------------------------------------------------------
* Function		: CP_H,CP_L
*				: Calculate correction voltage CP_H and CP_L.
*-------------------------------------------------------------------
* Argument		: None
*-------------------------------------------------------------------
* Return		: None
*-------------------------------------------------------------------
* Input			: None
* Output		: CP_H : Voltage of correction point high
*				: CP_L : Voltage of correction point low
*-------------------------------------------------------------------
*Used function 	: Calc_InReg()
*-------------------------------------------------------------------
* Caution		: 
*-------------------------------------------------------------------
* History		: 2012.08.01 Ver 0.01
* 				: New create
* 
*""FUNC COMMENT END""**********************************************/
void Calc_CPVolt(void)
{
	uint8_t	aidx;
	uint8_t	awork1,awork2,awork3,awork4;
	uint16_t	twork1,twork2;
	uint16_t	tinreg;
	int32_t ccwork;
	int32_t dcwork;

	uint32_t	res_chabiao;
// 	uint32_t	res_jisuan;

	//Calc [C]x100 from current
	twork1 = (uint16_t)((long)I_abs * 100 / D_Design_Capacity_mAh);
	
	if( twork1 <= D_RA_CRATE_TBL[1] )				// <= C-rate2 ?
	{
		aidx = 0;								// Table index = 0
		if( twork1 <= D_RA_CRATE_TBL[0] )			// <= C-rate1 ?
		{
			awork1 = 0;							// SetC-rate1
		} 
		else 
		{								// > C-rate1
			// Calculate value index
			awork1 = (uint8_t)(twork1-D_RA_CRATE_TBL[0]);
		}
		
		// Data area is within C-rate1 to C-rate2
		awork2 = D_RA_CRATE_TBL[1] - D_RA_CRATE_TBL[0];
	} 
	else 
	{									// > C-rate2
		if( twork1 <= D_RA_CRATE_TBL[2] )			// <= C-rate3 ?
		{
			aidx = 5;							// Table index = 5
			// Calculate value index
			awork1 = (uint8_t)(twork1 - D_RA_CRATE_TBL[1]);
			// Data area is within C-rate2 to C-rate3
			awork2 = D_RA_CRATE_TBL[2] - D_RA_CRATE_TBL[1];
		}
		else 
		{								// > C-rate3
			aidx = 10;							// Table index = 10
			twork1 = twork1 - D_RA_CRATE_TBL[2];
			if( twork1 > 255 )					// bigger than 1uint8_t value ?
			{
				awork1 = 255;					// Set max value
			} 
			else 
			{
				awork1 = (uint8_t)twork1;
			}
			// Data area is within C-rate3 to C-rate4
			awork2 = D_RA_CRATE_TBL[3] - D_RA_CRATE_TBL[2];
		}
	}
	
	// - Make Temperature index -
	awork3 = Ts_max - D_RA_TRATE_TBL[0];			// Make the value of T-rate1 base
	if( Ts_max >= D_RA_TRATE_TBL[1] )				// >= T-rate2 ?
	{
		aidx++;									// Increment table index
		if( Ts_max >= D_RA_TRATE_TBL[2] )			// >= T-rate3 ?
		{
			aidx++;								// Increment table index
			if( Ts_max >= D_RA_TRATE_TBL[3] )			// >= T-rate4 ?
			{
				aidx++;							// Increment table index
												// Data area is within T-rate4 to T-rate5
				awork4 = D_RA_TRATE_TBL[4] - D_RA_TRATE_TBL[3];
				if( Ts_max >= D_RA_TRATE_TBL[4] )	// >= T-rate5 ?
				{
					awork3 = awork4;			// Value index is max value
				} 
				else 
				{						// T-rate4 <= Temp. < T-rate5
												// Calculate value index
					awork3 = Ts_max - D_RA_TRATE_TBL[3];
				}
			} 
			else 
			{							// T-rate3 <= Temp. < T-rate4
												// Data area is within T-rate3 to T-rate4
				awork4 = D_RA_TRATE_TBL[3] - D_RA_TRATE_TBL[2];
				// Calculate value index
				awork3 = Ts_max - D_RA_TRATE_TBL[2];
			}
		} 
		else 
		{								// T-rate2 <= Temp. < T-rate3
			// Data area is within T-rate2 to T-rate3
			awork4 = D_RA_TRATE_TBL[2] - D_RA_TRATE_TBL[1];
			awork3 = Ts_max - D_RA_TRATE_TBL[1];	// Calculate value index
		}
	} 
	else 
	{									// < T-rate2
		// Data area is within T-rate1 to T-rate2
		awork4 = D_RA_TRATE_TBL[1] - D_RA_TRATE_TBL[0];
		
		if( Ts_max <= D_RA_TRATE_TBL[0] )			// <= T-rate1 ?
		{
			awork3 = 0;							// Value index = 0
		}
	}

	tinreg = Calc_InReg();						// Calc internal resistance V
	if( aidx>=10 && awork1>awork2 )				// > C-Rate4 ?
	{
		// Calculate by coefficient
		twork1 = CPL_TBL[aidx+5] -				// Coefficient/((C-rate4 - C-rate3)*10
			(uint16_t)((((long)CPL_TBL[aidx]-CPL_TBL[aidx+5])*(awork1-awork2)*D_CP_CPL_Coefficcient/((uint16_t)awork2*10)));
		
		twork2 = CPL_TBL[aidx+6] -
			(uint16_t)((((long)CPL_TBL[aidx+1]-CPL_TBL[aidx+6])
				*(awork1-awork2)*D_CP_CPL_Coefficcient/((uint16_t)awork2*10)));
	} 
	else 
	{									// <= C-Rate4
		twork1 = CPL_TBL[aidx] - 
					(uint16_t)((((long)CPL_TBL[aidx]-CPL_TBL[aidx+5])*awork1/awork2));
		
		twork2 = CPL_TBL[aidx+1] - 
					(uint16_t)((((long)CPL_TBL[aidx+1]-CPL_TBL[aidx+6])*awork1/awork2));
	}
	
	// - degC interpolation -
	tcpl_v = twork1 + (uint16_t)((((long)twork2 - twork1)*awork3/awork4)) - tinreg;
	res_chabiao = calc_k_res_chabiao ;

	
	if (tcpl_v <= D_0PVOLT + 30)  // single battery .
	{
		tcpl_v = D_0PVOLT +30;
	}

	tcpl_v = tcpl_v - res_chabiao * (k_CEDV_average - 1000) / 1000 * I_abs / 10000 / 2; // shoud / 10000*1000

	t_com98_out = tcpl_v;

	t_com8f_out = k_CEDV_average;
	

	

	if(_CycleCount>10) //Cycle count 
	{
		_SoH = ((uint32_t)D_Design_Capacity_mAh*(10000-tinreg)/100+D_Design_Capacity_mAh/2)/D_Design_Capacity_mAh;	
		if (_SoH >= 100)
		{
			_SoH = 100;	 // soh 
		}
	}

}


/*""FUNC COMMENT""***************************************************
* ID 			: 1.0
* module outline: MaxError() calculation function
*-------------------------------------------------------------------
* Include		: 
*-------------------------------------------------------------------
* Declaration	: void Calc_MaxErr(void)
*-------------------------------------------------------------------
* Function		: Calculate MaxError()
*-------------------------------------------------------------------
* Argument		: None
*-------------------------------------------------------------------
* Return		: None
*-------------------------------------------------------------------
* Input			: None
* Output		: t_com0c	: MaxError()
*-------------------------------------------------------------------
* Used function	: 
*-------------------------------------------------------------------
* Caution		: 
*-------------------------------------------------------------------
* History		: 2012.08.01 Ver 0.01
* 				: New create
* 
*""FUNC COMMENT END""**********************************************/
void Calc_MaxErr(void)
{
	uint16_t	twork;

	// MaxError = (Total integration cap x 0.05) / (FCC / 100)
	//          = Total integration cap x 5 / FCC
	// twork = (uint16_t)(lmaxerr_cnt * 5 / t_com10 );
	
	// if( twork >= 100 )							// MaxError > 100% ?
	// {
	// 	t_com0c = 100;
	// } 
	// else 
	// {
		
	// 	t_com0c = twork;
	// 	//t_com0c = 0x0001;
	// }
}

// Function of counting capacity of MaxError and DataFlash updating request
//  after calculating CycleCount.
void MEDF_Count(uint16_t tdata)
{
	lmaxerr_cnt += tdata;						// Add MaxError integ. counter
	Calc_MaxErr();								// Calculate MaxError()
	tdfup_cnt += tdata;							// Add DF update counter
	if( tdfup_cnt >= 500 )						// reached 500mAh ?
	{
		f_dfreq = ON;							// Set DataFlash update req.
		tdfup_cnt = 0;							// Clear the counter
	}
}

// Function of counting CycleCount
void CC_Count(uint16_t tdata)
{
	Record_tcc_cnt += tdata;							// Add CC counter
	if( Record_tcc_cnt >= tccup )						// reached CC count value ?
	{
		_CycleCount++;								// Increment CycleCount
		Record_trek_cnt++;								// Increment degradation cnt
		arelearn_cnt++;							// Increment conditioning cnt
		if( arelearn_cnt == 50 )				// reached 50 cycle ?
		{
			f_relearn = ON;						// Set RELEARN_FLAG
		}
		Record_tcc_cnt = 0;							// Clear the counter
	}
}

/*""FUNC COMMENT""***************************************************
* ID			: 1.0
* module outline: CycleCount() calculation function
*-------------------------------------------------------------------
* Include		: 
*-------------------------------------------------------------------
* Declaration	: void Calc_CC(void)
*-------------------------------------------------------------------
* Function		: Calculate CycleCount()
*-------------------------------------------------------------------
* Argument		: None
*-------------------------------------------------------------------
* Return		: None
*-------------------------------------------------------------------
* Input			: None
* Output		: _CycleCount	: CycleCount()
*-------------------------------------------------------------------
* Used function : CC_Count(), MEDF_Count()
*-------------------------------------------------------------------
* Caution		: 
*-------------------------------------------------------------------
* History		: 2012.08.01 Ver 0.01
* 			: New create
* 
*""FUNC COMMENT END""**********************************************/
void Calc_CC(void)
{
	uint16_t twork;
	if (Current() < 0) // Now discharging ?
	{
		if (t_com0f < toldrc) // RC reduces ?
		{
			twork = toldrc - t_com0f;
			CC_Count(twork);   // Counting CycleCount
			MEDF_Count(twork); // Counting MaxError/DF
		}
	}
	else
	{						  // Not discharging
		if (t_com0f > toldrc) // RC increasing ?
		{
			MEDF_Count(t_com0f - toldrc); // Counting MaxError/DF
		}
	}

	toldrc = t_com0f; // Update last RC
}

/*""FUNC COMMENT""***************************************************
* module outline	: Initial capacity setting function
*-------------------------------------------------------------------
* Include			: 
*-------------------------------------------------------------------
* Declaration		: void Init_Cap(void)
*-------------------------------------------------------------------
* Function			: Calculate and set the initial capacity from 
*					: Voltage-Capacity table.
*-------------------------------------------------------------------
* Return			: None
*-------------------------------------------------------------------
* Input				: None
* Output			: None
*-------------------------------------------------------------------
* Used function		: ReadVolt(), Make_RC()
*-------------------------------------------------------------------
* Caution			: 
*					: 
*""FUNC COMMENT END""**********************************************/
void Init_Cap(void)
{
	uint8_t	aidx; 
	uint8_t	aidxq1; 
	uint8_t   aresult;
	f_init_first_time = 1 ;

	
	fcc_CEDV_Ture = t_com10 ;
	t_com32_out = fcc_CEDV_Ture;
	dsg_CEDV_Record_lrc_w_update_k = 0 ; 

	for (aidxq1 = 0; (aidxq1 < 102) && (V_min > SOC_OCV_103_TBL[aidxq1]); aidxq1++);

	if (aidxq1 <=1)
	{
		SOC_CEDV  = aidxq1;
		SOC_CEDV_show = 0 ;
		Record_lrc_w_CEDV_fcc_show  = 0 ;
		Record_lrc_w_CEDV_fcc_show_last = 0 ;
		Record_lrc_w_CEDV = 0 ;

	}
	else if(aidxq1 >= 101)
	{
		if(V_min <= SOC_OCV_103_TBL[101])
		{
			if ((V_min - SOC_OCV_103_TBL[100]) > (SOC_OCV_103_TBL[101] - SOC_OCV_103_TBL[100]) / 2)
			{
				aidxq1 = 101 ; 

			}else
			{
				aidxq1 = 100 ; 
			}
			SOC_CEDV =  aidxq1 ;
			SOC_CEDV_show = SOC_CEDV-1 ;
			Record_lrc_w_CEDV_fcc_show = (long)((long)fcc_CEDV_Ture * (SOC_CEDV-1)* 144);
			
			
		}else  // V_min > SOC_OCV_103_TBL[101]
		{
			if ((V_min - SOC_OCV_103_TBL[101]) > (SOC_OCV_103_TBL[102] - SOC_OCV_103_TBL[101]) / 2)
			{
				aidxq1 = 102 ; 
			}else
			{
				aidxq1 = 101 ; 
			}
			SOC_CEDV  = aidxq1;
			SOC_CEDV_show = 100 ;
			Record_lrc_w_CEDV_fcc_show = (long)fcc_CEDV_Ture* 14400; // (100/100*14400=14400)
		}
	}
	else // index > 2 , index < 101 
	{
		if ((V_min - SOC_OCV_103_TBL[aidxq1]) > (SOC_OCV_103_TBL[aidxq1 + 1] - SOC_OCV_103_TBL[aidxq1]) / 2)
		{
			SOC_CEDV  = aidxq1 + 1;
		}
		else
		{
			SOC_CEDV  = aidxq1;
		}

		SOC_CEDV_show = SOC_CEDV-1 ;
		Record_lrc_w_CEDV_fcc_show = (long)((long)t_com10 * (SOC_CEDV-1)* 144);
	}
	

	Record_lrc_w_CEDV =  (uint32_t)t_com10*SOC_CEDV*144+(uint32_t)t_com10*SOC_CEDV*71/50; // capcity + capcity /100 ;

	Record_lrc_w_CEDV_fcc_show_last =  Record_lrc_w_CEDV_fcc_show ;

	t_com0d = SOC_CEDV_show ;
	CellTemp_last_time_update= CellTemp ;
	t_com0dsoclast = t_com0d ; 
	Make_RC_CEDV() ; 
	Calc_RSOC_CEDV();
	
	if( t_com0d <= D_CP_H )								// RSOC <= CP ?
	{
		f_cp_h = ON;											// Set CCP detect flag
	}
	
	if( t_com0d <= D_CP_L )								// RSOC <= CP ?
	{
		f_cp_l = ON;											// Set CCP detect flag
	}

	f_pi_pinghua = 0;
}



void SI_Loss_Calc(void)
{
	uint16_t dsg_cap=0;
    uint16_t aidxq1 = 0;
	uint16_t Del_OCV;
	uint8_t i_dex=0;
	uint32_t factor_ht_time=0;
	if (f_relax )
	{
		if (t_com0d <= D_Si_Loss_Start_SOC && t_com0d >= D_Si_Loss_End_SOC)
		{
			if (!f_si_start)
			{
				onedelay += Periodtime;
				if (onedelay / TIME_TO_HOUR >= 1)
				{
					if (V_min >= D_Si_Loss_End_Voltage && V_min <= D_Si_Loss_Start_Voltage)
					{
						f_si_start = 1;
						for (aidxq1 = 0; (aidxq1 < 102) && (V_min > SOC_OCV_103_TBL[aidxq1]); aidxq1++)
							;
						T_SI_PACK_START_SOC=(float)(V_min - SOC_OCV_103_TBL[aidxq1])/(SOC_OCV_103_TBL[aidxq1 + 1] 
							- SOC_OCV_103_TBL[aidxq1])+aidxq1-1;
			            //t_com94_out=T_SI_PACK_START_SOC;
						
					}
					else
					{
						Si_Loss_Init();
					}
				}
			}
			else
			{
				if (f_si_ready_dsg)
				{
					seconddelay += Periodtime;
					if (seconddelay / TIME_TO_HOUR >= 1)
					{
						if (V_min >= D_Si_Loss_End_Voltage && V_min <= D_Si_Loss_Start_Voltage)
						{
							for (aidxq1 = 0; (aidxq1 < 102) && (V_min > SOC_OCV_103_TBL[aidxq1]); aidxq1++)
								;
							T_SI_PACK_END_SOC = (float)(V_min - SOC_OCV_103_TBL[aidxq1]) / (SOC_OCV_103_TBL[aidxq1 + 1] - SOC_OCV_103_TBL[aidxq1]) + aidxq1 - 1;
							//t_com95_out = T_SI_PACK_END_SOC;
							dsg_cap=T_SI_PACK_CAP_CALC/4/3600;
							//t_com96_out=dsg_cap;
							if (T_SI_PACK_START_SOC <= T_SI_PACK_END_SOC ||
								dsg_cap <= 0.05 * D_Design_Capacity_mAh)
							{
								Si_Loss_Init();
								return;
							}
							T_SI_PACK_CAP = dsg_cap * (D_Si_Loss_Start_SOC - D_Si_Loss_End_SOC) / ((T_SI_PACK_START_SOC - T_SI_PACK_END_SOC)*100);
							//t_com97_out=T_SI_PACK_CAP;
							T_SI_PACK_LOSS = (D_Si_New_Capacity - T_SI_PACK_CAP) * 100 / D_Si_New_Capacity;
							//t_com98_out=T_SI_PACK_LOSS;
							Del_OCV = ((D_Si_Loss_A * T_SI_PACK_LOSS) / 100 + D_Si_Loss_B) / 1000;
							//t_com93_out=Del_OCV;
							if (T_SI_DELTA_OCV < DELTA_OCV_MAX)
							{
								T_SI_DELTA_OCV = Del_OCV;
								f_si_loss_ready = 1;
							}
							T_SI_CALC_COUNT++;
							if(T_SI_CALC_COUNT>CALC_COUNT_MAX)
							{
								Si_Loss_Init();
							}
							seconddelay = 0;
						}
						else
						{
							Si_Loss_Init();
						}
					}
				}
			}
		}
	}
	else
	{
		if(f_si_start)
		{
			if(!f_discharge)
			{
				Si_Loss_Init();
			}
			else
			{ 
            T_SI_PACK_CAP_CALC += I_abs; 
			  seconddelay=0;
			  f_si_ready_dsg=1;
			}

			if(f_si_loss_ready)
			{
               f_si_loss_ready=0;
			   f_si_loss_update=1;
			}
		}
		else
		{
			Si_Loss_Init();
		}

	}
	if (f_si_loss_update)
	{
		for (i_dex = 0; i_dex < 14; i_dex++)
		{
			factor_ht_time += *(((uint32_t *)&LifeTimes_Time_Spent_in_HT_RSOC_A) + i_dex);
		}
        //t_com99_out=factor_ht_time;
		if ((LifeTimes_Total_Firmware_Runtime - T_SI_TOTAL_RUNTIME_HRS) >= THIRDWEEK ||
			(_CycleCount - T_SI_CYCLE_COUNT) >= 50 || (factor_ht_time-T_SI_HT_TIME) >= TEENDAYS)
			{
				f_si_ocv_update=1;
				f_si_loss_update=0;
				T_SI_TOTAL_RUNTIME_HRS=LifeTimes_Total_Firmware_Runtime;
				T_SI_CYCLE_COUNT=_CycleCount;
				T_SI_HT_TIME=factor_ht_time;
			}
	}
}

void Si_Loss_Init(void)
{
	onedelay = 0 ;
	seconddelay=0;
	f_si_start = 0 ;
	T_SI_PACK_CAP_CALC=0;
	T_SI_PACK_START_SOC=0;
	T_SI_PACK_END_SOC=0;
	f_si_ready_dsg=0;
	T_SI_CALC_COUNT=0;
}

