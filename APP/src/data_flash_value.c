#include "data_flash_value.h"

volatile Record t_record = { 0 };
volatile LifeTimes t_lifetimes = { 0 };
const volatile FlashData flashdata __attribute__((used)) __attribute__((section(".ARM.__at_0x08032000"))) =
    {
16426,                  /*d_Cell1 vol  Gain    */
16434,                  /*d_Cell2 vol  Gain    */
16442,                  /*d_Cell3 vol  Gain    */
16442,                  /*d_Cell4 vol  Gain    */
13160,                  /*d_Pack Gain    */
16362,                  /*d_Bat Gain    */
5416,                  /*d_Current Gain    */
19,                 /*d_CC Offset    */
5,                  /*d_Dead Band    */
-37,                 /*d_InterTOffset    */
19,                 /*d_TS1Offset    */
18,                 /*d_TS2Offset    */
0,                 /*d_TS3Offset    */
0,                 /*d_TS4Offset    */
3000,                  /*d_SOC-OCV Table 0%    */
3167,                  /*d_SOC-OCV Table 5%    */
3320,                  /*d_SOC-OCV Table 10%    */
3417,                  /*d_SOC-OCV Table 15%    */
3454,                  /*d_SOC-OCV Table 20%    */
3515,                  /*d_SOC-OCV Table 25%    */
3559,                  /*d_SOC-OCV Table 30%    */
3596,                  /*d_SOC-OCV Table 35%    */
3624,                  /*d_SOC-OCV Table 40%    */
3654,                  /*d_SOC-OCV Table 45%    */
3691,                  /*d_SOC-OCV Table 50%    */
3737,                  /*d_SOC-OCV Table 55%    */
3794,                  /*d_SOC-OCV Table 60%    */
3852,                  /*d_SOC-OCV Table 65%    */
3892,                  /*d_SOC-OCV Table 70%    */
3932,                  /*d_SOC-OCV Table 75%    */
3980,                  /*d_SOC-OCV Table 80%    */
4032,                  /*d_SOC-OCV Table 85%    */
4069,                  /*d_SOC-OCV Table 90%    */
4090,                  /*d_SOC-OCV Table 95%    */
4136,                  /*d_SOC-OCV Table 100%    */
2043,                  /*d_SOC-OCV Table 0%    */
2043,                  /*d_SOC-OCV Table 5%    */
2043,                  /*d_SOC-OCV Table 10%    */
2050,                  /*d_SOC-OCV Table 15%    */
2048,                  /*d_SOC-OCV Table 20%    */
2047,                  /*d_SOC-OCV Table 25%    */
2034,                  /*d_SOC-OCV Table 30%    */
2029,                  /*d_SOC-OCV Table 35%    */
2020,                  /*d_SOC-OCV Table 40%    */
2031,                  /*d_SOC-OCV Table 45%    */
2021,                  /*d_SOC-OCV Table 50%    */
2028,                  /*d_SOC-OCV Table 55%    */
1989,                  /*d_SOC-OCV Table 60%    */
1988,                  /*d_SOC-OCV Table 65%    */
2003,                  /*d_SOC-OCV Table 70%    */
2011,                  /*d_SOC-OCV Table 75%    */
2030,                  /*d_SOC-OCV Table 80%    */
2036,                  /*d_SOC-OCV Table 85%    */
2051,                  /*d_SOC-OCV Table 90%    */
2050,                  /*d_SOC-OCV Table 95%    */
2039,                  /*d_SOC-OCV Table 100%    */
2728,                  /*d_SOC-OCV Table 0%    */
2728,                  /*d_SOC-OCV Table 5%    */
2728,                  /*d_SOC-OCV Table 10%    */
2583,                  /*d_SOC-OCV Table 15%    */
2577,                  /*d_SOC-OCV Table 20%    */
2556,                  /*d_SOC-OCV Table 25%    */
2536,                  /*d_SOC-OCV Table 30%    */
2528,                  /*d_SOC-OCV Table 35%    */
2526,                  /*d_SOC-OCV Table 40%    */
2530,                  /*d_SOC-OCV Table 45%    */
2532,                  /*d_SOC-OCV Table 50%    */
2562,                  /*d_SOC-OCV Table 55%    */
2578,                  /*d_SOC-OCV Table 60%    */
2580,                  /*d_SOC-OCV Table 65%    */
2604,                  /*d_SOC-OCV Table 70%    */
2627,                  /*d_SOC-OCV Table 75%    */
2643,                  /*d_SOC-OCV Table 80%    */
2654,                  /*d_SOC-OCV Table 85%    */
2657,                  /*d_SOC-OCV Table 90%    */
2652,                  /*d_SOC-OCV Table 95%    */
2691,                  /*d_SOC-OCV Table 100%    */
13,                  /*d_CP_Delay    */
60,                  /*d_CP_H    */
6,                  /*d_CP_L    */
7,                  /*d_CPH_Coefficcient    */
6,                  /*d_CPL_Coefficcient    */
6,                  /*d_FCC_Coefficcient    */
20,                  /*d_CP table C-rate 1    */
50,                  /*d_CP table C-rate 2    */
100,                  /*d_CP table C-rate 3    */
120,                  /*d_CP table C-rate 4    */
-10,                 /*d_CP table T-rate 1    */
5,                 /*d_CP table T-rate 2    */
25,                 /*d_CP table T-rate 3    */
45,                 /*d_CP table T-rate 4    */
45,                 /*d_CP table T-rate 5    */
20,                  /*d_RA table C-rate 1    */
50,                  /*d_RA table C-rate 2    */
100,                  /*d_RA table C-rate 3    */
-10,                 /*d_RA table T-rate 1    */
5,                 /*d_RA table T-rate 2    */
25,                 /*d_RA table T-rate 3    */
3188,                  /*d_CPL voltage table (C1/T1)    */
3281,                  /*d_CPL voltage table (C1/T2)    */
3227,                  /*d_CPL voltage table (C1/T3)    */
3655,                  /*d_CPL voltage table (C1/T4)    */
3662,                  /*d_CPL voltage table (C1/T5)    */
3091,                  /*d_CPL voltage table (C2/T1)    */
3208,                  /*d_CPL voltage table (C2/T2)    */
3222,                  /*d_CPL voltage table (C2/T3)    */
3598,                  /*d_CPL voltage table (C2/T4)    */
3635,                  /*d_CPL voltage table (C2/T5)    */
3049,                  /*d_CPL voltage table (C3/T1)    */
3113,                  /*d_CPL voltage table (C3/T2)    */
3179,                  /*d_CPL voltage table (C3/T3)    */
3489,                  /*d_CPL voltage table (C3/T4)    */
3573,                  /*d_CPL voltage table (C3/T5)    */
3230,                  /*d_CPL voltage table (C4/T1)    */
3240,                  /*d_CPL voltage table (C4/T2)    */
3255,                  /*d_CPL voltage table (C4/T3)    */
3366,                  /*d_CPL voltage table (C4/T4)    */
3466,                  /*d_CPL voltage table (C4/T5)    */
957,                  /*d_QCap Capcity table (C1/T1)    */
978,                  /*d_QCap Capcity table (C1/T2)    */
1008,                  /*d_QCap Capcity table (C1/T3)    */
1020,                  /*d_QCap Capcity table (C1/T4)    */
1033,                  /*d_QCap Capcity table (C1/T5)    */
917,                  /*d_QCap Capcity table (C2/T1)    */
948,                  /*d_QCap Capcity table (C2/T2)    */
976,                  /*d_QCap Capcity table (C2/T3)    */
1027,                  /*d_QCap Capcity table (C2/T4)    */
1038,                  /*d_QCap Capcity table (C2/T5)    */
899,                  /*d_QCap Capcity table (C3/T1)    */
905,                  /*d_QCap Capcity table (C3/T2)    */
948,                  /*d_QCap Capcity table (C3/T3)    */
1000,                  /*d_QCap Capcity table (C3/T4)    */
1036,                  /*d_QCap Capcity table (C3/T5)    */
808,                  /*d_QCap Capcity table (C4/T1)    */
845,                  /*d_QCap Capcity table (C4/T2)    */
926,                  /*d_QCap Capcity table (C4/T3)    */
987,                  /*d_QCap Capcity table (C4/T4)    */
1029,                  /*d_QCap Capcity table (C4/T5)    */
1500,                  /*d_Si_New_Capacity    */
2700,                  /*d_Si_Loss_Start_SOC    */
2600,                  /*d_Si_Loss_End_SOC    */
3200,                  /*d_Si_Loss_Start_Voltage    */
3200,                  /*d_Si_Loss_End_Voltage    */
1000,                 /*d_Si_Loss_A    */
1000,                 /*d_Si_Loss_B    */
50,                  /*d_Internal impedance cycle1    */
100,                  /*d_Internal impedance cycle2    */
200,                  /*d_Internal impedance cycle3    */
500,                  /*d_Internal impedance cycle4    */
800,                  /*d_Internal impedance cycle5    */
1000,                  /*d_Internal impedance cycle6    */
0,                  /*d_Internal impedance table1    */
0,                  /*d_Internal impedance table2    */
0,                  /*d_Internal impedance table3    */
0,                  /*d_Internal impedance table4    */
0,                  /*d_Internal impedance table5    */
0,                  /*d_Internal impedance table6    */
1,                  /*d_Internal FCC table1    */
5,                  /*d_Internal FCC table2    */
10,                  /*d_Internal FCC table3    */
15,                  /*d_Internal FCC table4    */
20,                  /*d_Internal FCC table5    */
25,                  /*d_Internal FCC table6    */
72,                  /*d_Relearn stop time    */
5,                  /*d_Min current of cap calc    */
5,                  /*d_Consum current of discharge    */
10,                  /*d_Deterioration capacity    */
512,                  /*d_FCC variance    */
-10,                 /*d_relearn temp limit    */
51,                  /*d_Qmax update min delta SOC    */
0,                  /*d_Temp Low limit     */
45,                  /*d_Temp High limit     */
1,                  /*d_C rate low limit    */
12,                  /*d_C rate high limit    */
30,                  /*d_SOC low limit    */
80,                  /*d_SOC high limit    */
0,                  /*d_Cycle limit    */
3000,                  /*d_0% voltage    */
10,                  /*d_0% voltage Delay    */
30,                  /*d_Cell balancing ON voltage    */
10,                  /*d_Cell balancing OFF voltage    */
4100,                  /*d_Enable voltage upper limit    */
3600,                  /*d_Enable voltage lower limit    */
-70,                 /*d_Dsg Current Threshold    */
50,                 /*d_Chg Current Threshold    */
20,                 /*d_Quit Current    */
1,                  /*d_Dsg Relax Time    */
3,                  /*d_Chg Relax Time    */
6000,                  /*d_Design Capacity mAh    */
8880,                  /*d_Design Capacity in cWh    */
14800,                  /*d_Design Voltage    */
6350,                  /*d_Initial FCC    */
-90,                 /*d_Cycle Count Percentage    */
3300,                  /*d_Set Voltage Threshold    */
3000,                  /*d_Clear Voltage Threshold    */
0,                  /*d_Set RSOC % Threshold    */
5,                  /*d_Clear RSOC % Threshold    */
4280,                  /*d_Set Voltage Threshold    */
4100,                  /*d_Clear Voltage Threshold    */
100,                  /*d_Set RSOC % Threshold    */
99,                  /*d_Clear RSOC % Threshold    */
3000,                  /*d_Set Voltage Threshold    */
3300,                  /*d_Clear Voltage Threshold    */
6,                  /*d_Set RSOC % Threshold    */
8,                  /*d_Clear RSOC % Threshold    */
4280,                  /*d_Set Voltage Threshold    */
4100,                  /*d_Clear Voltage Threshold    */
100,                  /*d_Set RSOC % Threshold    */
99,                  /*d_Clear RSOC % Threshold    */
0,                  /*d_Cycle Count    */
6350,                  /*d_QmaxCell1    */
6350,                  /*d_QmaxCell2    */
6350,                  /*d_QmaxCell3    */
6350,                  /*d_QmaxCell4    */
6350,                  /*d_QmaxPack    */
0,                  /*d_QmaxCycleCount    */
0,                  /*d_Update Status    */
0x0000,         /*d_FW Version    */
0x0001,         /*d_DF Version    */
24676,                 /*d_MPPCurrent Max    */
12338,                 /*d_SPPCurrent Max     */
12800,                  /*d_MinSysVoltage    */
0,                  /*d_MinSysVoltage delta    */
600,                  /*d_FC Diode voltage    */
15,                 /*d_DBPT min temp    */
45,                 /*d_DBPT max temp    */
9,                  /*d_PackResistance    */
0,                  /*d_SystemResistance    */
90,                  /*d_PI_RSOC_Threshold    */
40,                 /*d_PI_HI_Temp_Threshold    */
4250,                  /*d_Dsg to Voltage    */
400,                  /*d_PI_Delte_Voltage    */
72,                  /*d_PI_Time_Window    */
24,                  /*d_PI_HT_Temp_Threshold     */
48,                  /*d_PI_HT_Temp_Time     */
0x23a0,         /*d_Charging Config    */
0x3d,         /*d_FETOptions    */
0x17,         /*d_SBS Gauging Configuration    */
0x20,         /*d_SBS Configuration    */
0x00,         /*d_Auth Config    */
0x0001,         /*d_Power Config    */
0x00,         /*d_IO Config    */
0x0000,         /*d_GPIO Sealed Access Config    */
0x0000,         /*d_Flag Map Set Up 1    */
0x0000,         /*d_Flag Map Set Up 2    */
0x0000,         /*d_Flag Map Set Up 3    */
0x0000,         /*d_Flag Map Set Up 4    */
0x0000,         /*d_LED Configuration    */
0x07,         /*d_Temperature Enable    */
0x04,         /*d_Temperature Mode    */
0x041f,         /*d_DA Configuration    */
0x0c8c,         /*d_SOC Flag Config A    */
0x8c,         /*d_SOC Flag Config B    */
0x67,         /*d_Balancing Configuration    */
0xb252,         /*d_IT Gauging Configuration    */
0x02,         /*d_IT Gauging Ext    */
0x00,         /*d_Elevated Degrade Configuration    */
0x5f,         /*d_ Permanent Fail Fuse A    */
0x18,         /*d_ Permanent Fail Fuse B    */
0x43,         /*d_ Permanent Fail Fuse C    */
0x30,         /*d_ Permanent Fail Fuse D    */
12800,                  /*d_Min Blow Fuse Voltage    */
30,                  /*d_Fuse Blow Timeout    */
0x02,         /*d_Protection Configuration    */
0x7f,         /*d_Enabled Protections A    */
0x35,         /*d_Enabled Protections B    */
0x01,         /*d_Enabled Protections C    */
0x0c,         /*d_Enabled Protections D    */
0x00,         /*d_Enabled PF A    */
0x00,         /*d_Enabled PF B    */
0x00,         /*d_Enabled PF C    */
0x00,         /*d_Enabled PF D    */
0x00,         /*d_AFE Protection Control    */
0x00b8,         /*d_Manufacturing Status Init    */
-1000,                 /*d_Accumulated Charge Measurement    */
1000,                  /*d_Accum Charge Threshold    */
10,                  /*d_TimeRSOCThresholdA    */
30,                  /*d_TimeRSOCThresholdB    */
50,                  /*d_TimeRSOCThresholdC    */
65,                  /*d_TimeRSOCThresholdD    */
80,                  /*d_TimeRSOCThresholdE    */
90,                  /*d_TimeRSOCThresholdF    */
100,                  /*d_TimeRSOCThresholdG    */
2500,                  /*d_Precharge Start Voltage    */
2900,                  /*d_Charging Voltage Low    */
3600,                  /*d_Charging Voltage Med    */
4000,                  /*d_Charging Voltage High    */
0,                  /*d_Charging Voltage Hysteresis    */
0,                 /*d_T1 Temp    */
12,                 /*d_T2 Temp    */
20,                 /*d_T5 Temp    */
25,                 /*d_T6 Temp    */
50,                 /*d_T3 Temp    */
55,                 /*d_T4 Temp    */
1,                 /*d_Hysteresis Temp    */
4200,                  /*d_LT CV    */
132,                  /*d_LT CCL    */
352,                  /*d_LT CCM    */
264,                  /*d_LT CCH    */
4200,                  /*d_STL CV    */
1980,                  /*d_STL CCL    */
4004,                  /*d_STL CCM    */
2992,                  /*d_STL CCH    */
4200,                  /*d_STH CV    */
1980,                  /*d_STH CCL    */
4004,                  /*d_STH CCM    */
2992,                  /*d_STH CCH    */
4200,                  /*d_HT CV    */
1012,                  /*d_HT CCL    */
1980,                  /*d_HT CCM    */
1496,                  /*d_HT CCH    */
4200,                  /*d_RT CV    */
2508,                  /*d_RT CCL    */
4488,                  /*d_RT CCM    */
3520,                  /*d_RT CCH    */
0,                 /*d_Poly T1    */
10,                  /*d_Poly T1A    */
15,                  /*d_Poly T2    */
55,                  /*d_Poly T2A    */
55,                  /*d_Poly T3    */
55,                  /*d_Poly T3A    */
55,                  /*d_Poly T3B    */
55,                  /*d_Poly T3C    */
55,                  /*d_Poly T4    */
60,                  /*d_Poly T5    */
3238,                  /*d_I1    */
10758,                  /*d_I2    */
3238,                  /*d_I3    */
3238,                  /*d_I4    */
3238,                  /*d_I5    */
3238,                  /*d_I6    */
3238,                  /*d_I7    */
3238,                  /*d_I8    */
3238,                  /*d_I9    */
3238,                  /*d_I10    */
0,                  /*d_I11    */
2000,                  /*d_Poly V1    */
3000,                  /*d_Poly V2    */
4200,                  /*d_Poly V3    */
4250,                  /*d_Poly V4    */
4400,                  /*d_Poly V5    */
5,                  /*d_Poly hys Jt    */
244,                  /*d_Poly Code Tapper Current    */
100,                  /*d_Poly Step Current Delta    */
24,                  /*d_Poly Step Current Time    */
50,                  /*d_Poly Voltage Delta    */
53,                  /*d_Poly Reset Temperature    */
4150,                  /*d_Poly Reset voltage    */
4280,                  /*d_Smart Chg CV Step1 Voltage    */
4180,                  /*d_Smart Chg CV Step2 Voltage     */
4250,                  /*d_Smart Chg Max Cell Voltage    */
4250,                  /*d_Smart Chg Volt Reset    */
2411,                  /*d_Smart Chg Min  CC    */
482,                  /*d_Smart Chg Step Current Step    */
5552,                  /*d_Smart Chg Normal Charge Current    */
40,                  /*d_Smart Chg judgement time    */
80,                  /*d_Charge Term Voltage    */
1500,                  /*d_Charge Term Taper Current    */
25,                  /*d_Fullcharge judgement time    */
1,                  /*d_Charge Term Taper Capacity    */
88,                  /*d_Current    */
44,                 /*d_Maintenance ChargingCurrent    */
256,                 /*d_ Charge Inhibit Current    */
0x00,         /*d_ERETM Status    */
15,                  /*d_TemperatureTbl[0]    */
15,                  /*d_TemperatureTbl[1]    */
15,                  /*d_TemperatureTbl[2]    */
50,                  /*d_TemperatureTbl[3]    */
550,                 /*d_ChargeTaperCurrentTbl[0]    */
550,                 /*d_ChargeTaperCurrentTbl[1]    */
550,                 /*d_ChargeTaperCurrentTbl[2]    */
120,                  /*d_ChargeCellVoltageOffsetTbl[0]    */
120,                  /*d_ChargeCellVoltageOffsetTbl[1]    */
120,                  /*d_ChargeCellVoltageOffsetTbl[2]    */
350,                  /*d_CellimbalanceVoltage    */
2750,                  /*d_Shutdown Voltage    */
10,                  /*d_Shutdown Time    */
4,                  /*d_IO Shutdown Delay    */
8,                  /*d_IO Shutdown Timeout    */
3000,                  /*d_Charger Present Threshold    */
3,                  /*d_MAC_FET Off Time    */
5,                  /*d_MAC_Shutdown Delay    */
4320,                  /*d_Auto Ship time    */
20,                 /*d_Sleep Current    */
5,                  /*d_Bus TimeOut    */
5,                  /*d_Voltage Time    */
20,                  /*d_Current Time    */
0x00,         /*d_Wake Comparator    */
10,                  /*d_FET Off Storage Time    */
20,                  /*d_FET Off Min RSOC    */
2800,                  /*d_Threshold    */
2,                  /*d_Delay    */
2900,                  /*d_Recovery    */
3000,                  /*d_CUV Charger Present Threshold    */
3200,                  /*d_Threshold    */
12,                  /*d_Delay    */
3400,                  /*d_Recovery    */
0,                  /*d_CellResistance    */
3200,                  /*d_CUVC Charger Present Threshold    */
4280,                  /*d_Threshold Low Temp    */
4280,                  /*d_Threshold Standard Temp Low    */
4280,                  /*d_Threshold Standard Temp High    */
4280,                  /*d_Threshold High Temp    */
4280,                  /*d_Threshold Rec Temp    */
5,                  /*d_COV Delay    */
4100,                  /*d_Recovery Low Temp    */
4100,                  /*d_Recovery Standard Temp Low    */
4100,                  /*d_Recovery Standard Temp High    */
4100,                  /*d_Recovery High Temp    */
4100,                  /*d_Recovery Rec Temp    */
255,                  /*d_Cell Overvoltage Latch Limit    */
10,                  /*d_Cell Overvoltage Counter Decrement Delay    */
15,                  /*d_Reset    */
5000,                 /*d_Threshold    */
4,                  /*d_Delay    */
6000,                 /*d_Threshold    */
2,                  /*d_Delay    */
-200,                 /*d_Recovery Threshold    */
10,                  /*d_Recovery Delay    */
-7500,                 /*d_Threshold    */
2,                  /*d_Delay    */
-8000,                 /*d_Threshold    */
1,                  /*d_Delay    */
-200,                 /*d_Recovery Threshold    */
10,                  /*d_Recovery Delay     */
255,                  /*d_Latch Limit    */
10,                  /*d_Counter Dec Delay    */
15,                  /*d_Reset    */
0,                  /*d_Latch Limit    */
10,                  /*d_Counter Dec Delay    */
5,                  /*d_Recovery    */
15,                  /*d_Reset    */
0x38,         /*d_Threshold    */
0,                  /*d_Latch Limit    */
10,                  /*d_Counter Dec Delay    */
5,                  /*d_Recovery    */
15,                  /*d_Reset    */
0x23,         /*d_Threshold    */
0,                  /*d_Latch Limit    */
10,                  /*d_Counter Dec Delay    */
5,                  /*d_Recovery    */
15,                  /*d_Reset    */
0x44,         /*d_Threshold1    */
0x24,         /*d_Threshold2    */
50,                  /*d_Threshold    */
2,                  /*d_Delay    */
45,                 /*d_Recovery    */
70,                 /*d_Threshold    */
2,                  /*d_Delay    */
65,                 /*d_Recovery    */
100,                 /*d_Threshold    */
2,                  /*d_Delay    */
95,                 /*d_Recovery    */
-12,                 /*d_Threshold    */
2,                  /*d_Delay    */
-5,                 /*d_Recovery    */
-20,                 /*d_Threshold    */
2,                  /*d_Delay    */
-10,                 /*d_Recovery    */
10,                  /*d_Delay    */
2000,                 /*d_Charge Threshold    */
1800,                 /*d_Suspend Threshold    */
1800,                  /*d_Delay    */
2,                 /*d_Reset    */
2500,                 /*d_Charge Threshold    */
2000,                 /*d_Suspend Threshold    */
54000,                  /*d_Delay    */
2,                 /*d_Reset    */
300,                 /*d_Threshold    */
2,                 /*d_Recovery    */
90,                  /*d_RSOC Recovery    */
300,                  /*d_Threshold    */
30,                  /*d_Delay    */
0,                  /*d_Recovery    */
500,                 /*d_Threshold    */
2,                  /*d_Delay    */
100,                 /*d_Recovery Threshold    */
2,                  /*d_Recovery Delay    */
3000,                 /*d_Threshold    */
2,                  /*d_Delay    */
10,                 /*d_Recovery Threshold    */
2,                  /*d_Recovery Delay    */
2200,                  /*d_Threshold    */
5,                  /*d_Delay    */
4350,                  /*d_Threshold    */
5,                  /*d_Delay    */
10000,                  /*d_Threshold    */
5,                  /*d_Delay    */
-10000,                 /*d_Threshold    */
5,                  /*d_Delay    */
85,                 /*d_Threshold    */
5,                  /*d_Delay    */
110,                 /*d_Threshold    */
5,                  /*d_Delay    */
3500,                  /*d_Check Voltage    */
10,                 /*d_Check Current    */
500,                 /*d_Delta Threshold    */
5,                  /*d_Delay    */
100,                  /*d_Duration    */
3700,                  /*d_Check Voltage    */
50,                 /*d_Check Current    */
200,                  /*d_Delta Threshold    */
5,                  /*d_Delay    */
5,                 /*d_Threshold    */
5,                  /*d_Delay    */
20,                  /*d_VoltageDifference    */
5,                  /*d_Temperature difference    */
-5,                 /*d_Threshold    */
5,                  /*d_Delay    */
5,                 /*d_Threshold    */
5,                  /*d_Delay    */
5,                  /*d_2LVL    */
1000,                  /*d_Change Voltage    */
2500,                  /*d_Min_Voltage    */
60,                 /*d_Max_Temp    */
1,                  /*d_Delay    */
50,                  /*d_Cell Impedance    */
10,                  /*d_K    */
2000,                  /*d_Manufacturer Date    */
0x1234,         /*d_Serial Number    */
{7,'S','U','N','W','O','D','A'},                  /*d_Manufacturer Name    */
{3,'M','0','1'},                  /*d_Device Name    */
{4,'L','I','O','N'},                  /*d_Device Chemistry    */
600,                  /*d_Remaining Ah Capacity Alarm    */
900,                  /*d_Remaining Wh Capacity Alarm    */
10,                  /*d_Remaining Time Alarm    */
0x0000,         /*d_Initial Battery Mode    */
0x0000,         /*d_Configuration Register    */
0x00,         /*d_Configuration 2 Register    */
0x00,         /*d_Configuration 3 Register    */
0x00,         /*d_Configuration 4 Register    */
0x00,         /*d_Configuration 5 Register    */
0x00,         /*d_Configuration 6 Register    */
0x00,         /*d_Configuration 7 Register    */
0x00,         /*d_Configuration 8 Register    */
4280,                 /*d_Charging Voltage    */
3000,                 /*d_Fast Charging Current    */
0,                 /*d_CCCV Charging Voltage    */
0,                 /*d_CCCV Charging Current    */
0,                 /*d_CCCV Curr Taper Threshold    */
0,                 /*d_CCCV Curr Taper Voltage    */
0,                  /*d_CCCV Curr Taper Window    */
0,                  /*d_FCC Deg Current Adjust Cycle    */
0,                 /*d_FCC Deg Minimum Current    */
0,                 /*d_RT CCV Max Cell    */
0,                 /*d_LS1 CCV Max Cell    */
0,                 /*d_LS1 CCV Max Cell Drop    */
0,                 /*d_LS2 CCV Max Cell    */
0,                 /*d_CCV Min Current    */
0,                 /*d_RT CCV Max Current Step    */
0,                 /*d_LS1 CCV Max Current Step    */
0,                 /*d_LS2 CCV Max Current Step    */
0,                  /*d_CCV Max Time Hysteresis    */
0,                 /*d_Smart Chg Voltage Sw Over    */
0,                 /*d_Smart Chg Voltage    */
0,                 /*d_Smart Chg Max Cell    */
0,                 /*d_Smart Chg stp Reset    */
0,                 /*d_Smart Chg Max Current Step    */
0,                 /*d_Smart Chg Normal Current    */
0,                  /*d_Smart Chg Max Time Hysteresis    */
9300,                 /*d_Cell Over Current    */
3,                  /*d_Cell Delay Time    */
64,                  /*d_Cell Recovery Time    */
20,                  /*d_Cell Alarm Hold Time    */
1000,                 /*d_Cell Alarm Delta Current    */
1500,                 /*d_Cell Alarm Recovery Current    */
1,                  /*d_Cell Alarm Delay Time    */
4,                  /*d_Cell Alarm Recovery Time    */
400,                 /*d_Cell Knee Temperature    */
-1700,                 /*d_Cell Final Current    */
-5000,                 /*d_FET Over Current    */
1,                  /*d_FET Delay Time    */
64,                  /*d_FET Recovery Time    */
20,                  /*d_FET Alarm Hold Time    */
1000,                 /*d_FET Alarm Delta Current    */
1500,                 /*d_FET Alarm Recovery Current    */
1,                  /*d_FET Alarm Delay Time    */
4,                  /*d_FET Alarm Recovery Time    */
800,                 /*d_FET Knee Temperature    */
-3000,                 /*d_FET Final Current    */
0,                  /*d_Total Charged    */
0,                  /*d_Total Time    */
0,                  /*d_HiVolt Time    */
0,                  /*d_HiTemp Time    */
0,                  /*d_HiTempVolt Time    */
450,                 /*d_Storage High Temp    */
4100,                 /*d_Storage High Volt    */
0x00,         /*d_Dual mode Status    */
100,                  /*d_LS1 Start Cycle Count    */
960,                  /*d_LS1 Start Time    */
240,                  /*d_LS1 Delta Time    */
10,                 /*d_LS1 First Volt Drop    */
50,                 /*d_LS2 Second Volt Drop    */
5,                  /*d_LS2 Start Cycle Count    */
120,                  /*d_LS2 Start Hi Volt Storage Time    */
49561,                  /*d_Age Per Month    */
3980,                 /*d_LS2 Second Drop FCC Max    */
50,                  /*d_LS1 Delta Cycle Count 2    */
200,                  /*d_LS1 Delta Cycle Count 3    */
250,                  /*d_LS1 Delta Cycle Count 4    */
300,                  /*d_LS1 Delta Cycle Count 5    */
5,                  /*d_Cycle Count    */
180,                  /*d_HiVolt Time Threshold    */
10,                  /*d_TSF Min    */
100,                  /*d_TSF Max    */
0,                  /*d_Time Spent in RT    */
0,                  /*d_Time Spent In LS1_1    */
0,                  /*d_Time Spent In LS1_2    */
0,                  /*d_Time Spent In LS1_3    */
0,                  /*d_Time Spent In LS1_4    */
0,                  /*d_Time Spent In LS1_5    */
0,                  /*d_Time Spent in LS2    */
0,                  /*d_Adjusted HiVolt Time    */
0,                  /*d_VSF High    */
0,                  /*d_VSF Med    */
0,                  /*d_VSF Low    */
0,                  /*d_VSF Default    */
.t_System_Data.t_Manufacturer_Data.m_ManufacturerInfo = {7, 'S', 'U', 'N', 'W', 'O', 'D', 'A'},                 /*d_ManufacturerInfo    */
34,                  /*d_Manufacturer Info B Length    */
0x42,         /*d_Manufacturer Info B01    */
0x4c,         /*d_Manufacturer Info B02    */
0x30,         /*d_Manufacturer Info B03    */
0x31,         /*d_Manufacturer Info B04    */
0x32,         /*d_Manufacturer Info B05    */
0x30,         /*d_Manufacturer Info B06    */
0x39,         /*d_Manufacturer Info B07    */
0x30,         /*d_Manufacturer Info B08    */
0x30,         /*d_Manufacturer Info B09    */
0x37,         /*d_Manufacturer Info B10    */
0x30,         /*d_Manufacturer Info B11    */
0x31,         /*d_Manufacturer Info B12    */
0x30,         /*d_Manufacturer Info B13    */
0x33,         /*d_Manufacturer Info B14    */
0x41,         /*d_Manufacturer Info B15    */
0x52,         /*d_Manufacturer Info B16    */
0x41,         /*d_Manufacturer Info B17    */
0x32,         /*d_Manufacturer Info B18    */
0x43,         /*d_Manufacturer Info B19    */
0x44,         /*d_Manufacturer Info B20    */
0x75,         /*d_Manufacturer Info B21    */
0x76,         /*d_Manufacturer Info B22    */
0x77,         /*d_Manufacturer Info B23    */
0x7a,         /*d_Manufacturer Info B24    */
0x78,         /*d_Manufacturer Info B25    */
0x79,         /*d_Manufacturer Info B26    */
0x30,         /*d_Manufacturer Info B27    */
0x31,         /*d_Manufacturer Info B28    */
0x32,         /*d_Manufacturer Info B29    */
0x33,         /*d_Manufacturer Info B30    */
0x33,         /*d_Manufacturer Info B31    */
0x33,         /*d_Manufacturer Info B32    */
0x50,         /*d_Manufacturer Info C Length    */
0x42,         /*d_Manufacturer Info C01    */
0x4c,         /*d_Manufacturer Info C02    */
0x30,         /*d_Manufacturer Info C03    */
0x31,         /*d_Manufacturer Info C04    */
0x32,         /*d_Manufacturer Info C05    */
0x30,         /*d_Manufacturer Info C06    */
0x39,         /*d_Manufacturer Info C07    */
0x30,         /*d_Manufacturer Info C08    */
0x30,         /*d_Manufacturer Info C09    */
0x37,         /*d_Manufacturer Info C10    */
0x30,         /*d_Manufacturer Info C11    */
0x31,         /*d_Manufacturer Info C12    */
0x30,         /*d_Manufacturer Info C13    */
0x33,         /*d_Manufacturer Info C14    */
0x41,         /*d_Manufacturer Info C15    */
0x52,         /*d_Manufacturer Info C16    */
0x41,         /*d_Manufacturer Info C17    */
0x32,         /*d_Manufacturer Info C18    */
0x43,         /*d_Manufacturer Info C19    */
0x44,         /*d_Manufacturer Info C20    */
0x75,         /*d_Manufacturer Info C21    */
0x76,         /*d_Manufacturer Info C22    */
0x77,         /*d_Manufacturer Info C23    */
0x7a,         /*d_Manufacturer Info C24    */
0x78,         /*d_Manufacturer Info C25    */
0x79,         /*d_Manufacturer Info C26    */
0x33,         /*d_Manufacturer Info C27    */
0x32,         /*d_Manufacturer Info C28    */
0x31,         /*d_Manufacturer Info C29    */
0x30,         /*d_Manufacturer Info C30    */
0x30,         /*d_Manufacturer Info C31    */
0x30,         /*d_Manufacturer Info C32    */
0xb735,         /*d_Static DF Signature    */
0x0000,         /*d_Static Chem DF Signature    */
0x0000,         /*d_All DF Signature    */
0x12,         /*d_US_KEY1    */
0x34,         /*d_US_KEY2    */
0x56,         /*d_US_KEY3    */
0x78,         /*d_US_KEY4    */
0xff,         /*d_FA_KEY1    */
0xff,         /*d_FA_KEY2    */
0xff,         /*d_FA_KEY3    */
0xff,         /*d_FA_KEY4    */
0x6181,         /*d_Control flag 1    */
6350,                  /*d_FCC_max_limit    */
3700,                  /*d_FCC_min_limit    */
0,                  /*d_5_10CLimit    */
0,                  /*d_5CLimt    */
10,                  /*d_TEMPER_LIMIT_T1    */
20,                  /*d_TEMPER_LIMIT_T2    */
0,                  /*d_TEMPER_LIMIT_CAP1    */
0,                  /*d_TEMPER_LIMIT_CAP2    */
4200,                  /*d_Chg_smooth_Voltage_thresh    */
1500,                  /*d_Chg_smooth_current_low    */
2600,                  /*d_Chg_smooth_current_high    */
750,                  /*d_Chg_smooth_Cap_Low    */
680,                  /*d_Chg_smooth_Cap_Heigh    */
10,                  /*d_Chg_smooth_Voltage_thresh    */
308,                  /*d_Chg_smooth_current_low    */
980,                  /*d_Chg_smooth_current_high    */
40,                  /*d_Chg_smooth_current_time    */
3,                  /*d_Chg_smooth_current_range    */
29,                  /*d_Chg_smooth_cap_time    */
0,                  /*d_Dsg_smooth_mul    */
0,                  /*d_Dsg_smooth_div    */
1000,                  /*d_Charge Term Current    */
};
