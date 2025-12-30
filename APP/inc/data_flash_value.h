
#ifndef __DATA_FLASH_VALUE_H__
#define __DATA_FLASH_VALUE_H__

#include "main.h"

#ifdef __cplusplus
extern "C"{
#endif
#pragma pack(push,1)

typedef union{
uint8_t               value;
struct{
uint8_t Update0               :1;
uint8_t Update1               :1;
uint8_t Enable               :1;
uint8_t QMax               :1;
uint8_t                 :4;
}bits;
}U_Update_Status;

#define D_Update_Status_Update0               flashdata.t_Gas_Gauging.t_State.u_Update_Status.bits.Update0
#define D_Update_Status_Update1               flashdata.t_Gas_Gauging.t_State.u_Update_Status.bits.Update1
#define D_Update_Status_Enable               flashdata.t_Gas_Gauging.t_State.u_Update_Status.bits.Enable
#define D_Update_Status_QMax               flashdata.t_Gas_Gauging.t_State.u_Update_Status.bits.QMax
#define D_Update_Status               flashdata.t_Gas_Gauging.t_State.u_Update_Status.value

typedef union{
uint16_t               value;
struct{
uint16_t CRATE               :1;
uint16_t CCC               :1;
uint16_t SOC_CHARGE               :1;
uint16_t CS_CV               :1;
uint16_t COMP_IR               :1;
uint16_t DEGRADE_CC               :1;
uint16_t SOH_DEGRADE               :1;
uint16_t CYCLE_DEGRADE               :1;
uint16_t RUNTIME_DEGRADE               :1;
uint16_t RTORFCC               :1;
uint16_t TAPER_VOLT               :1;
uint16_t HIBAT_CHG               :1;
uint16_t HT_INIHIB_DIS               :1;
<<<<<<< HEAD
uint16_t COV_FULL               :1;
uint16_t                 :2;
=======
uint16_t                 :3;
>>>>>>> bff363fb8fc99b4a686864b311eee1856fd5ed4f
}bits;
}U_Charging_Config;

#define D_Charging_Config_CRATE               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.CRATE
#define D_Charging_Config_CCC               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.CCC
#define D_Charging_Config_SOC_CHARGE               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.SOC_CHARGE
#define D_Charging_Config_CS_CV               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.CS_CV
#define D_Charging_Config_COMP_IR               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.COMP_IR
#define D_Charging_Config_DEGRADE_CC               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.DEGRADE_CC
#define D_Charging_Config_SOH_DEGRADE               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.SOH_DEGRADE
#define D_Charging_Config_CYCLE_DEGRADE               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.CYCLE_DEGRADE
#define D_Charging_Config_RUNTIME_DEGRADE               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.RUNTIME_DEGRADE
#define D_Charging_Config_RTORFCC               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.RTORFCC
#define D_Charging_Config_TAPER_VOLT               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.TAPER_VOLT
#define D_Charging_Config_HIBAT_CHG               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.HIBAT_CHG
#define D_Charging_Config_HT_INIHIB_DIS               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.HT_INIHIB_DIS
<<<<<<< HEAD
#define D_Charging_Config_COV_FULL               flashdata.t_Setting.t_Configuration.u_Charging_Config.bits.COV_FULL
=======
>>>>>>> bff363fb8fc99b4a686864b311eee1856fd5ed4f
#define D_Charging_Config               flashdata.t_Setting.t_Configuration.u_Charging_Config.value

typedef union{
uint8_t               value;
struct{
uint8_t PCHG_COMM               :1;
uint8_t                 :1;
uint8_t OTFET               :1;
uint8_t CHGSU               :1;
uint8_t CHGIN               :1;
uint8_t CHGFET               :1;
uint8_t SLEEPCHG               :1;
uint8_t PACK_FUSE               :1;
}bits;
}U_FETOptions;

#define D_FETOptions_PCHG_COMM               flashdata.t_Setting.t_Configuration.u_FETOptions.bits.PCHG_COMM
#define D_FETOptions_OTFET               flashdata.t_Setting.t_Configuration.u_FETOptions.bits.OTFET
#define D_FETOptions_CHGSU               flashdata.t_Setting.t_Configuration.u_FETOptions.bits.CHGSU
#define D_FETOptions_CHGIN               flashdata.t_Setting.t_Configuration.u_FETOptions.bits.CHGIN
#define D_FETOptions_CHGFET               flashdata.t_Setting.t_Configuration.u_FETOptions.bits.CHGFET
#define D_FETOptions_SLEEPCHG               flashdata.t_Setting.t_Configuration.u_FETOptions.bits.SLEEPCHG
#define D_FETOptions_PACK_FUSE               flashdata.t_Setting.t_Configuration.u_FETOptions.bits.PACK_FUSE
#define D_FETOptions               flashdata.t_Setting.t_Configuration.u_FETOptions.value

typedef union{
uint8_t               value;
struct{
uint8_t RSOCL               :1;
uint8_t RSOC_HOLD               :1;
uint8_t LOCK0               :1;
uint8_t RSOC_RND_OFF               :1;
uint8_t _1PERCENT_HOLD               :1;
uint8_t                 :3;
}bits;
}U_SBS_Gauging_Configuration;

#define D_SBS_Gauging_Configuration_RSOCL               flashdata.t_Setting.t_Configuration.u_SBS_Gauging_Configuration.bits.RSOCL
#define D_SBS_Gauging_Configuration_RSOC_HOLD               flashdata.t_Setting.t_Configuration.u_SBS_Gauging_Configuration.bits.RSOC_HOLD
#define D_SBS_Gauging_Configuration_LOCK0               flashdata.t_Setting.t_Configuration.u_SBS_Gauging_Configuration.bits.LOCK0
#define D_SBS_Gauging_Configuration_RSOC_RND_OFF               flashdata.t_Setting.t_Configuration.u_SBS_Gauging_Configuration.bits.RSOC_RND_OFF
#define D_SBS_Gauging_Configuration_1PERCENT_HOLD               flashdata.t_Setting.t_Configuration.u_SBS_Gauging_Configuration.bits._1PERCENT_HOLD
#define D_SBS_Gauging_Configuration               flashdata.t_Setting.t_Configuration.u_SBS_Gauging_Configuration.value

typedef union{
uint8_t               value;
struct{
uint8_t BCAST               :1;
uint8_t CPE               :1;
uint8_t HPE               :1;
uint8_t XL               :1;
uint8_t BLT0               :1;
uint8_t BLT1               :1;
uint8_t                 :2;
}bits;
}U_SBS_Configuration;

#define D_SBS_Configuration_BCAST               flashdata.t_Setting.t_Configuration.u_SBS_Configuration.bits.BCAST
#define D_SBS_Configuration_CPE               flashdata.t_Setting.t_Configuration.u_SBS_Configuration.bits.CPE
#define D_SBS_Configuration_HPE               flashdata.t_Setting.t_Configuration.u_SBS_Configuration.bits.HPE
#define D_SBS_Configuration_XL               flashdata.t_Setting.t_Configuration.u_SBS_Configuration.bits.XL
#define D_SBS_Configuration_BLT0               flashdata.t_Setting.t_Configuration.u_SBS_Configuration.bits.BLT0
#define D_SBS_Configuration_BLT1               flashdata.t_Setting.t_Configuration.u_SBS_Configuration.bits.BLT1
#define D_SBS_Configuration               flashdata.t_Setting.t_Configuration.u_SBS_Configuration.value

typedef union{
uint8_t               value;
struct{
uint8_t                 :2;
uint8_t SHA1_SECURE               :1;
uint8_t DF_READ_EN               :1;
uint8_t                 :4;
}bits;
}U_Auth_Config;

#define D_Auth_Config_SHA1_SECURE               flashdata.t_Setting.t_Configuration.u_Auth_Config.bits.SHA1_SECURE
#define D_Auth_Config_DF_READ_EN               flashdata.t_Setting.t_Configuration.u_Auth_Config.bits.DF_READ_EN
#define D_Auth_Config               flashdata.t_Setting.t_Configuration.u_Auth_Config.value

typedef union{
uint16_t               value;
struct{
uint16_t AUTO_SHIP_EN               :1;
uint16_t PWR_SAVE_VSHUT               :1;
uint16_t EMSHUT_EXIT_VPACK               :1;
uint16_t EMSHUT_EXIT_COMM               :1;
uint16_t CHECK_WAKE               :1;
uint16_t CHECK_WAKE_FET               :1;
uint16_t MFC_CLR_CMD               :1;
uint16_t SHIP_MODE_EN               :1;
uint16_t SLP_ACCUM               :1;
uint16_t SLEEPWKCHG               :1;
uint16_t IO_SHUT               :1;
uint16_t IO_POL               :1;
uint16_t IO_PUL               :1;
uint16_t                 :3;
}bits;
}U_Power_Config;

#define D_Power_Config_AUTO_SHIP_EN               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.AUTO_SHIP_EN
#define D_Power_Config_PWR_SAVE_VSHUT               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.PWR_SAVE_VSHUT
#define D_Power_Config_EMSHUT_EXIT_VPACK               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.EMSHUT_EXIT_VPACK
#define D_Power_Config_EMSHUT_EXIT_COMM               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.EMSHUT_EXIT_COMM
#define D_Power_Config_CHECK_WAKE               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.CHECK_WAKE
#define D_Power_Config_CHECK_WAKE_FET               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.CHECK_WAKE_FET
#define D_Power_Config_MFC_CLR_CMD               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.MFC_CLR_CMD
#define D_Power_Config_SHIP_MODE_EN               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.SHIP_MODE_EN
#define D_Power_Config_SLP_ACCUM               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.SLP_ACCUM
#define D_Power_Config_SLEEPWKCHG               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.SLEEPWKCHG
#define D_Power_Config_IO_SHUT               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.IO_SHUT
#define D_Power_Config_IO_POL               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.IO_POL
#define D_Power_Config_IO_PUL               flashdata.t_Setting.t_Configuration.u_Power_Config.bits.IO_PUL
#define D_Power_Config               flashdata.t_Setting.t_Configuration.u_Power_Config.value

typedef union{
uint8_t               value;
struct{
uint8_t BTP_EN               :1;
uint8_t BTP_POL               :1;
uint8_t BTP_MODE               :1;
uint8_t GPIO_EN               :1;
uint8_t GPIO_PF               :1;
uint8_t                 :3;
}bits;
}U_IO_Config;

#define D_IO_Config_BTP_EN               flashdata.t_Setting.t_Configuration.u_IO_Config.bits.BTP_EN
#define D_IO_Config_BTP_POL               flashdata.t_Setting.t_Configuration.u_IO_Config.bits.BTP_POL
#define D_IO_Config_BTP_MODE               flashdata.t_Setting.t_Configuration.u_IO_Config.bits.BTP_MODE
#define D_IO_Config_GPIO_EN               flashdata.t_Setting.t_Configuration.u_IO_Config.bits.GPIO_EN
#define D_IO_Config_GPIO_PF               flashdata.t_Setting.t_Configuration.u_IO_Config.bits.GPIO_PF
#define D_IO_Config               flashdata.t_Setting.t_Configuration.u_IO_Config.value

typedef union{
uint16_t               value;
struct{
uint16_t DISP_PIN17               :1;
uint16_t LEDCNTLA_PIN20               :1;
uint16_t LEDCNTLB_PIN21               :1;
uint16_t LEDCNTLC_PIN22               :1;
uint16_t                 :12;
}bits;
}U_GPIO_Sealed_Access_Config;

#define D_GPIO_Sealed_Access_Config_DISP_PIN17               flashdata.t_Setting.t_Configuration.u_GPIO_Sealed_Access_Config.bits.DISP_PIN17
#define D_GPIO_Sealed_Access_Config_LEDCNTLA_PIN20               flashdata.t_Setting.t_Configuration.u_GPIO_Sealed_Access_Config.bits.LEDCNTLA_PIN20
#define D_GPIO_Sealed_Access_Config_LEDCNTLB_PIN21               flashdata.t_Setting.t_Configuration.u_GPIO_Sealed_Access_Config.bits.LEDCNTLB_PIN21
#define D_GPIO_Sealed_Access_Config_LEDCNTLC_PIN22               flashdata.t_Setting.t_Configuration.u_GPIO_Sealed_Access_Config.bits.LEDCNTLC_PIN22
#define D_GPIO_Sealed_Access_Config               flashdata.t_Setting.t_Configuration.u_GPIO_Sealed_Access_Config.value

typedef union{
uint16_t               value;
struct{
uint16_t FLAG_REG0               :1;
uint16_t FLAG_REG1               :1;
uint16_t FLAG_REG2               :1;
uint16_t FLAG_REG3               :1;
uint16_t FLAG_BIT0               :1;
uint16_t FLAG_BIT1               :1;
uint16_t FLAG_BIT2               :1;
uint16_t FLAG_BIT3               :1;
uint16_t FLAG_POL               :1;
uint16_t FLAG_GPIO0               :1;
uint16_t FLAG_GPIO1               :1;
uint16_t                 :1;
uint16_t FLAG_OR               :1;
uint16_t FLAG_OD               :1;
uint16_t                 :1;
uint16_t FLAG_EN               :1;
}bits;
}U_Flag_Map_Set_Up_1;

#define D_Flag_Map_Set_Up_1_FLAG_REG0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_REG0
#define D_Flag_Map_Set_Up_1_FLAG_REG1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_REG1
#define D_Flag_Map_Set_Up_1_FLAG_REG2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_REG2
#define D_Flag_Map_Set_Up_1_FLAG_REG3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_REG3
#define D_Flag_Map_Set_Up_1_FLAG_BIT0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_BIT0
#define D_Flag_Map_Set_Up_1_FLAG_BIT1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_BIT1
#define D_Flag_Map_Set_Up_1_FLAG_BIT2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_BIT2
#define D_Flag_Map_Set_Up_1_FLAG_BIT3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_BIT3
#define D_Flag_Map_Set_Up_1_FLAG_POL               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_POL
#define D_Flag_Map_Set_Up_1_FLAG_GPIO0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_GPIO0
#define D_Flag_Map_Set_Up_1_FLAG_GPIO1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_GPIO1
#define D_Flag_Map_Set_Up_1_FLAG_OR               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_OR
#define D_Flag_Map_Set_Up_1_FLAG_OD               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_OD
#define D_Flag_Map_Set_Up_1_FLAG_EN               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.bits.FLAG_EN
#define D_Flag_Map_Set_Up_1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_1.value

typedef union{
uint16_t               value;
struct{
uint16_t FLAG_REG0               :1;
uint16_t FLAG_REG1               :1;
uint16_t FLAG_REG2               :1;
uint16_t FLAG_REG3               :1;
uint16_t FLAG_BIT0               :1;
uint16_t FLAG_BIT1               :1;
uint16_t FLAG_BIT2               :1;
uint16_t FLAG_BIT3               :1;
uint16_t FLAG_POL               :1;
uint16_t FLAG_GPIO0               :1;
uint16_t FLAG_GPIO1               :1;
uint16_t                 :1;
uint16_t FLAG_OR               :1;
uint16_t FLAG_OD               :1;
uint16_t                 :1;
uint16_t FLAG_EN               :1;
}bits;
}U_Flag_Map_Set_Up_2;

#define D_Flag_Map_Set_Up_2_FLAG_REG0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_REG0
#define D_Flag_Map_Set_Up_2_FLAG_REG1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_REG1
#define D_Flag_Map_Set_Up_2_FLAG_REG2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_REG2
#define D_Flag_Map_Set_Up_2_FLAG_REG3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_REG3
#define D_Flag_Map_Set_Up_2_FLAG_BIT0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_BIT0
#define D_Flag_Map_Set_Up_2_FLAG_BIT1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_BIT1
#define D_Flag_Map_Set_Up_2_FLAG_BIT2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_BIT2
#define D_Flag_Map_Set_Up_2_FLAG_BIT3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_BIT3
#define D_Flag_Map_Set_Up_2_FLAG_POL               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_POL
#define D_Flag_Map_Set_Up_2_FLAG_GPIO0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_GPIO0
#define D_Flag_Map_Set_Up_2_FLAG_GPIO1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_GPIO1
#define D_Flag_Map_Set_Up_2_FLAG_OR               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_OR
#define D_Flag_Map_Set_Up_2_FLAG_OD               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_OD
#define D_Flag_Map_Set_Up_2_FLAG_EN               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.bits.FLAG_EN
#define D_Flag_Map_Set_Up_2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_2.value

typedef union{
uint16_t               value;
struct{
uint16_t FLAG_REG0               :1;
uint16_t FLAG_REG1               :1;
uint16_t FLAG_REG2               :1;
uint16_t FLAG_REG3               :1;
uint16_t FLAG_BIT0               :1;
uint16_t FLAG_BIT1               :1;
uint16_t FLAG_BIT2               :1;
uint16_t FLAG_BIT3               :1;
uint16_t FLAG_POL               :1;
uint16_t FLAG_GPIO0               :1;
uint16_t FLAG_GPIO1               :1;
uint16_t                 :1;
uint16_t FLAG_OR               :1;
uint16_t FLAG_OD               :1;
uint16_t                 :1;
uint16_t FLAG_EN               :1;
}bits;
}U_Flag_Map_Set_Up_3;

#define D_Flag_Map_Set_Up_3_FLAG_REG0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_REG0
#define D_Flag_Map_Set_Up_3_FLAG_REG1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_REG1
#define D_Flag_Map_Set_Up_3_FLAG_REG2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_REG2
#define D_Flag_Map_Set_Up_3_FLAG_REG3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_REG3
#define D_Flag_Map_Set_Up_3_FLAG_BIT0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_BIT0
#define D_Flag_Map_Set_Up_3_FLAG_BIT1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_BIT1
#define D_Flag_Map_Set_Up_3_FLAG_BIT2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_BIT2
#define D_Flag_Map_Set_Up_3_FLAG_BIT3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_BIT3
#define D_Flag_Map_Set_Up_3_FLAG_POL               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_POL
#define D_Flag_Map_Set_Up_3_FLAG_GPIO0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_GPIO0
#define D_Flag_Map_Set_Up_3_FLAG_GPIO1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_GPIO1
#define D_Flag_Map_Set_Up_3_FLAG_OR               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_OR
#define D_Flag_Map_Set_Up_3_FLAG_OD               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_OD
#define D_Flag_Map_Set_Up_3_FLAG_EN               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.bits.FLAG_EN
#define D_Flag_Map_Set_Up_3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_3.value

typedef union{
uint16_t               value;
struct{
uint16_t FLAG_REG0               :1;
uint16_t FLAG_REG1               :1;
uint16_t FLAG_REG2               :1;
uint16_t FLAG_REG3               :1;
uint16_t FLAG_BIT0               :1;
uint16_t FLAG_BIT1               :1;
uint16_t FLAG_BIT2               :1;
uint16_t FLAG_BIT3               :1;
uint16_t FLAG_POL               :1;
uint16_t FLAG_GPIO0               :1;
uint16_t FLAG_GPIO1               :1;
uint16_t                 :1;
uint16_t FLAG_OR               :1;
uint16_t FLAG_OD               :1;
uint16_t                 :1;
uint16_t FLAG_EN               :1;
}bits;
}U_Flag_Map_Set_Up_4;

#define D_Flag_Map_Set_Up_4_FLAG_REG0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_REG0
#define D_Flag_Map_Set_Up_4_FLAG_REG1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_REG1
#define D_Flag_Map_Set_Up_4_FLAG_REG2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_REG2
#define D_Flag_Map_Set_Up_4_FLAG_REG3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_REG3
#define D_Flag_Map_Set_Up_4_FLAG_BIT0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_BIT0
#define D_Flag_Map_Set_Up_4_FLAG_BIT1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_BIT1
#define D_Flag_Map_Set_Up_4_FLAG_BIT2               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_BIT2
#define D_Flag_Map_Set_Up_4_FLAG_BIT3               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_BIT3
#define D_Flag_Map_Set_Up_4_FLAG_POL               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_POL
#define D_Flag_Map_Set_Up_4_FLAG_GPIO0               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_GPIO0
#define D_Flag_Map_Set_Up_4_FLAG_GPIO1               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_GPIO1
#define D_Flag_Map_Set_Up_4_FLAG_OR               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_OR
#define D_Flag_Map_Set_Up_4_FLAG_OD               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_OD
#define D_Flag_Map_Set_Up_4_FLAG_EN               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.bits.FLAG_EN
#define D_Flag_Map_Set_Up_4               flashdata.t_Setting.t_Configuration.u_Flag_Map_Set_Up_4.value

typedef union{
uint16_t               value;
struct{
uint16_t LEDR               :1;
uint16_t LEDRCA               :1;
uint16_t LEDCHG               :1;
uint16_t LEDMODE               :1;
uint16_t LEDPF0               :1;
uint16_t LEDPF1               :1;
uint16_t LEDC0               :1;
uint16_t LEDC1               :1;
uint16_t LEDPFON               :1;
uint16_t LEDIFCUV               :1;
uint16_t BLINKMIDPT               :1;
uint16_t LEDONFC               :1;
uint16_t                 :4;
}bits;
}U_LED_Configuration;

#define D_LED_Configuration_LEDR               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDR
#define D_LED_Configuration_LEDRCA               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDRCA
#define D_LED_Configuration_LEDCHG               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDCHG
#define D_LED_Configuration_LEDMODE               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDMODE
#define D_LED_Configuration_LEDPF0               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDPF0
#define D_LED_Configuration_LEDPF1               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDPF1
#define D_LED_Configuration_LEDC0               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDC0
#define D_LED_Configuration_LEDC1               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDC1
#define D_LED_Configuration_LEDPFON               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDPFON
#define D_LED_Configuration_LEDIFCUV               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDIFCUV
#define D_LED_Configuration_BLINKMIDPT               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.BLINKMIDPT
#define D_LED_Configuration_LEDONFC               flashdata.t_Setting.t_Configuration.u_LED_Configuration.bits.LEDONFC
#define D_LED_Configuration               flashdata.t_Setting.t_Configuration.u_LED_Configuration.value

typedef union{
uint8_t               value;
struct{
uint8_t TSint               :1;
uint8_t TS1               :1;
uint8_t TS2               :1;
uint8_t TS3               :1;
uint8_t TS4               :1;
uint8_t                 :3;
}bits;
}U_Temperature_Enable;

#define D_Temperature_Enable_TSint               flashdata.t_Setting.t_Configuration.u_Temperature_Enable.bits.TSint
#define D_Temperature_Enable_TS1               flashdata.t_Setting.t_Configuration.u_Temperature_Enable.bits.TS1
#define D_Temperature_Enable_TS2               flashdata.t_Setting.t_Configuration.u_Temperature_Enable.bits.TS2
#define D_Temperature_Enable_TS3               flashdata.t_Setting.t_Configuration.u_Temperature_Enable.bits.TS3
#define D_Temperature_Enable_TS4               flashdata.t_Setting.t_Configuration.u_Temperature_Enable.bits.TS4
#define D_Temperature_Enable               flashdata.t_Setting.t_Configuration.u_Temperature_Enable.value

typedef union{
uint8_t               value;
struct{
uint8_t TSint_Mode               :1;
uint8_t TS1_Mode               :1;
uint8_t TS2_Mode               :1;
uint8_t TS3_Mode               :1;
uint8_t TS4_Mode               :1;
uint8_t                 :3;
}bits;
}U_Temperature_Mode;

#define D_Temperature_Mode_TSint_Mode               flashdata.t_Setting.t_Configuration.u_Temperature_Mode.bits.TSint_Mode
#define D_Temperature_Mode_TS1_Mode               flashdata.t_Setting.t_Configuration.u_Temperature_Mode.bits.TS1_Mode
#define D_Temperature_Mode_TS2_Mode               flashdata.t_Setting.t_Configuration.u_Temperature_Mode.bits.TS2_Mode
#define D_Temperature_Mode_TS3_Mode               flashdata.t_Setting.t_Configuration.u_Temperature_Mode.bits.TS3_Mode
#define D_Temperature_Mode_TS4_Mode               flashdata.t_Setting.t_Configuration.u_Temperature_Mode.bits.TS4_Mode
#define D_Temperature_Mode               flashdata.t_Setting.t_Configuration.u_Temperature_Mode.value

typedef union{
uint16_t               value;
struct{
uint16_t CC0               :1;
uint16_t CC1               :1;
uint16_t NR               :1;
uint16_t IN_SYSTEM_SLEEP               :1;
uint16_t SLEEP               :1;
uint16_t EMSHUT_EN               :1;
uint16_t DISCONN_EN               :1;
uint16_t FTEMP               :1;
uint16_t EMSHUT_PEXIT_DIS               :1;
uint16_t Sampling_Rate               :1;
uint16_t PI_EN               :1;
uint16_t                 :5;
}bits;
}U_DA_Configuration;

#define D_DA_Configuration_CC0               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.CC0
#define D_DA_Configuration_CC1               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.CC1
#define D_DA_Configuration_NR               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.NR
#define D_DA_Configuration_IN_SYSTEM_SLEEP               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.IN_SYSTEM_SLEEP
#define D_DA_Configuration_SLEEP               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.SLEEP
#define D_DA_Configuration_EMSHUT_EN               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.EMSHUT_EN
#define D_DA_Configuration_DISCONN_EN               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.DISCONN_EN
#define D_DA_Configuration_FTEMP               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.FTEMP
#define D_DA_Configuration_EMSHUT_PEXIT_DIS               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.EMSHUT_PEXIT_DIS
#define D_DA_Configuration_Sampling_Rate               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.Sampling_Rate
#define D_DA_Configuration_PI_EN               flashdata.t_Setting.t_Configuration.u_DA_Configuration.bits.PI_EN
#define D_DA_Configuration               flashdata.t_Setting.t_Configuration.u_DA_Configuration.value

typedef union{
uint16_t               value;
struct{
uint16_t TDSETV               :1;
uint16_t TDCLEARV               :1;
uint16_t TDSETRSOC               :1;
uint16_t TDCLEARRSOC               :1;
uint16_t TCSETV               :1;
uint16_t TCCLEARV               :1;
uint16_t TCSETRSOC               :1;
uint16_t TCCLEARRSOC               :1;
uint16_t                 :2;
uint16_t FCSETVCT               :1;
uint16_t TCSETVCT               :1;
uint16_t                 :4;
}bits;
}U_SOC_Flag_Config_A;

#define D_SOC_Flag_Config_A_TDSETV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TDSETV
#define D_SOC_Flag_Config_A_TDCLEARV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TDCLEARV
#define D_SOC_Flag_Config_A_TDSETRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TDSETRSOC
#define D_SOC_Flag_Config_A_TDCLEARRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TDCLEARRSOC
#define D_SOC_Flag_Config_A_TCSETV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TCSETV
#define D_SOC_Flag_Config_A_TCCLEARV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TCCLEARV
#define D_SOC_Flag_Config_A_TCSETRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TCSETRSOC
#define D_SOC_Flag_Config_A_TCCLEARRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TCCLEARRSOC
#define D_SOC_Flag_Config_A_FCSETVCT               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.FCSETVCT
#define D_SOC_Flag_Config_A_TCSETVCT               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.bits.TCSETVCT
#define D_SOC_Flag_Config_A               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_A.value

typedef union{
uint8_t               value;
struct{
uint8_t FDSETV               :1;
uint8_t FDCLEARV               :1;
uint8_t FDSETRSOC               :1;
uint8_t FDCLEARRSOC               :1;
uint8_t FCSETV               :1;
uint8_t FCCLEARV               :1;
uint8_t FCSETRSOC               :1;
uint8_t FCCLEARRSOC               :1;
}bits;
}U_SOC_Flag_Config_B;

#define D_SOC_Flag_Config_B_FDSETV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FDSETV
#define D_SOC_Flag_Config_B_FDCLEARV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FDCLEARV
#define D_SOC_Flag_Config_B_FDSETRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FDSETRSOC
#define D_SOC_Flag_Config_B_FDCLEARRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FDCLEARRSOC
#define D_SOC_Flag_Config_B_FCSETV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FCSETV
#define D_SOC_Flag_Config_B_FCCLEARV               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FCCLEARV
#define D_SOC_Flag_Config_B_FCSETRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FCSETRSOC
#define D_SOC_Flag_Config_B_FCCLEARRSOC               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.bits.FCCLEARRSOC
#define D_SOC_Flag_Config_B               flashdata.t_Setting.t_Configuration.u_SOC_Flag_Config_B.value

typedef union{
uint8_t               value;
struct{
uint8_t CB               :1;
uint8_t CBM               :1;
uint8_t CBR               :1;
uint8_t CB_CHG_DOD0EW               :1;
uint8_t CB_RLX_DOD0EW               :1;
uint8_t CBS               :1;
uint8_t CBV               :1;
uint8_t                 :1;
}bits;
}U_Balancing_Configuration;

#define D_Balancing_Configuration_CB               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.bits.CB
#define D_Balancing_Configuration_CBM               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.bits.CBM
#define D_Balancing_Configuration_CBR               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.bits.CBR
#define D_Balancing_Configuration_CB_CHG_DOD0EW               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.bits.CB_CHG_DOD0EW
#define D_Balancing_Configuration_CB_RLX_DOD0EW               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.bits.CB_RLX_DOD0EW
#define D_Balancing_Configuration_CBS               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.bits.CBS
#define D_Balancing_Configuration_CBV               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.bits.CBV
#define D_Balancing_Configuration               flashdata.t_Setting.t_Configuration.u_Balancing_Configuration.value

typedef union{
uint16_t               value;
struct{
uint16_t CCT               :1;
uint16_t CSYNC               :1;
uint16_t RFACTSTEP               :1;
uint16_t OCVFR               :1;
uint16_t DOD0EW               :1;
uint16_t LFP_RELAX               :1;
uint16_t RSOC_CONV               :1;
uint16_t FAST_QMAX_LRN               :1;
uint16_t FAST_QMAX_FLD               :1;
uint16_t CELL_TERM               :1;
uint16_t DELAY_DROP_TO_0               :1;
uint16_t RELAX_JUMP_OK               :1;
uint16_t SMOOTH               :1;
uint16_t TDELTAV               :1;
uint16_t RELAX_SMOOTH_OK               :1;
uint16_t DOD_RSCALE_EN               :1;
}bits;
}U_IT_Gauging_Configuration;

#define D_IT_Gauging_Configuration_CCT               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.CCT
#define D_IT_Gauging_Configuration_CSYNC               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.CSYNC
#define D_IT_Gauging_Configuration_RFACTSTEP               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.RFACTSTEP
#define D_IT_Gauging_Configuration_OCVFR               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.OCVFR
#define D_IT_Gauging_Configuration_DOD0EW               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.DOD0EW
#define D_IT_Gauging_Configuration_LFP_RELAX               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.LFP_RELAX
#define D_IT_Gauging_Configuration_RSOC_CONV               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.RSOC_CONV
#define D_IT_Gauging_Configuration_FAST_QMAX_LRN               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.FAST_QMAX_LRN
#define D_IT_Gauging_Configuration_FAST_QMAX_FLD               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.FAST_QMAX_FLD
#define D_IT_Gauging_Configuration_CELL_TERM               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.CELL_TERM
#define D_IT_Gauging_Configuration_DELAY_DROP_TO_0               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.DELAY_DROP_TO_0
#define D_IT_Gauging_Configuration_RELAX_JUMP_OK               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.RELAX_JUMP_OK
#define D_IT_Gauging_Configuration_SMOOTH               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.SMOOTH
#define D_IT_Gauging_Configuration_TDELTAV               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.TDELTAV
#define D_IT_Gauging_Configuration_RELAX_SMOOTH_OK               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.RELAX_SMOOTH_OK
#define D_IT_Gauging_Configuration_DOD_RSCALE_EN               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.bits.DOD_RSCALE_EN
#define D_IT_Gauging_Configuration               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Configuration.value

typedef union{
uint8_t               value;
struct{
uint8_t DSG_0_SMOOTH_OK               :1;
uint8_t CHG_100_SMOOTH_OK               :1;
uint8_t AMB_PRED               :1;
uint8_t THERM_IV               :1;
uint8_t THERM_SAT               :1;
uint8_t TS0               :1;
uint8_t TS1               :1;
uint8_t                 :1;
}bits;
}U_IT_Gauging_Ext;

#define D_IT_Gauging_Ext_DSG_0_SMOOTH_OK               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.bits.DSG_0_SMOOTH_OK
#define D_IT_Gauging_Ext_CHG_100_SMOOTH_OK               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.bits.CHG_100_SMOOTH_OK
#define D_IT_Gauging_Ext_AMB_PRED               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.bits.AMB_PRED
#define D_IT_Gauging_Ext_THERM_IV               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.bits.THERM_IV
#define D_IT_Gauging_Ext_THERM_SAT               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.bits.THERM_SAT
#define D_IT_Gauging_Ext_TS0               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.bits.TS0
#define D_IT_Gauging_Ext_TS1               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.bits.TS1
#define D_IT_Gauging_Ext               flashdata.t_Setting.t_Configuration.u_IT_Gauging_Ext.value

typedef union{
uint8_t               value;
struct{
uint8_t ERM_TIME               :1;
uint8_t ERM_MODE               :1;
uint8_t ERETM_TIME               :1;
uint8_t ERETM_MODE               :1;
uint8_t ERETM_MAX_T               :1;
uint8_t                 :3;
}bits;
}U_Elevated_Degrade_Configuration;

#define D_Elevated_Degrade_Configuration_ERM_TIME               flashdata.t_Setting.t_Configuration.u_Elevated_Degrade_Configuration.bits.ERM_TIME
#define D_Elevated_Degrade_Configuration_ERM_MODE               flashdata.t_Setting.t_Configuration.u_Elevated_Degrade_Configuration.bits.ERM_MODE
#define D_Elevated_Degrade_Configuration_ERETM_TIME               flashdata.t_Setting.t_Configuration.u_Elevated_Degrade_Configuration.bits.ERETM_TIME
#define D_Elevated_Degrade_Configuration_ERETM_MODE               flashdata.t_Setting.t_Configuration.u_Elevated_Degrade_Configuration.bits.ERETM_MODE
#define D_Elevated_Degrade_Configuration_ERETM_MAX_T               flashdata.t_Setting.t_Configuration.u_Elevated_Degrade_Configuration.bits.ERETM_MAX_T
#define D_Elevated_Degrade_Configuration               flashdata.t_Setting.t_Configuration.u_Elevated_Degrade_Configuration.value

typedef union{
uint8_t               value;
struct{
uint8_t SUV               :1;
uint8_t SOV               :1;
uint8_t SOCC               :1;
uint8_t SOCD               :1;
uint8_t SOT               :1;
uint8_t                 :1;
uint8_t SOTF               :1;
uint8_t QIM               :1;
}bits;
}U_Permanent_Fail_Fuse_A;

#define D_Permanent_Fail_Fuse_A_SUV               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.bits.SUV
#define D_Permanent_Fail_Fuse_A_SOV               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.bits.SOV
#define D_Permanent_Fail_Fuse_A_SOCC               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.bits.SOCC
#define D_Permanent_Fail_Fuse_A_SOCD               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.bits.SOCD
#define D_Permanent_Fail_Fuse_A_SOT               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.bits.SOT
#define D_Permanent_Fail_Fuse_A_SOTF               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.bits.SOTF
#define D_Permanent_Fail_Fuse_A_QIM               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.bits.QIM
#define D_Permanent_Fail_Fuse_A               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_A.value

typedef union{
uint8_t               value;
struct{
uint8_t CB               :1;
uint8_t IMP               :1;
uint8_t CD               :1;
uint8_t VIMR               :1;
uint8_t VIMA               :1;
uint8_t                 :3;
}bits;
}U_Permanent_Fail_Fuse_B;

#define D_Permanent_Fail_Fuse_B_CB               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_B.bits.CB
#define D_Permanent_Fail_Fuse_B_IMP               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_B.bits.IMP
#define D_Permanent_Fail_Fuse_B_CD               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_B.bits.CD
#define D_Permanent_Fail_Fuse_B_VIMR               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_B.bits.VIMR
#define D_Permanent_Fail_Fuse_B_VIMA               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_B.bits.VIMA
#define D_Permanent_Fail_Fuse_B               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_B.value

typedef union{
uint8_t               value;
struct{
uint8_t CFETF               :1;
uint8_t DFETF               :1;
uint8_t                 :1;
uint8_t FUSE               :1;
uint8_t AFER               :1;
uint8_t AFEC               :1;
uint8_t _2LVL               :1;
uint8_t PTC               :1;
}bits;
}U_Permanent_Fail_Fuse_C;

#define D_Permanent_Fail_Fuse_C_CFETF               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.bits.CFETF
#define D_Permanent_Fail_Fuse_C_DFETF               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.bits.DFETF
#define D_Permanent_Fail_Fuse_C_FUSE               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.bits.FUSE
#define D_Permanent_Fail_Fuse_C_AFER               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.bits.AFER
#define D_Permanent_Fail_Fuse_C_AFEC               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.bits.AFEC
#define D_Permanent_Fail_Fuse_C_2LVL               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.bits._2LVL
#define D_Permanent_Fail_Fuse_C_PTC               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.bits.PTC
#define D_Permanent_Fail_Fuse_C               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_C.value

typedef union{
uint8_t               value;
struct{
uint8_t IFC               :1;
uint8_t FORCE               :1;
uint8_t TCO               :1;
uint8_t                 :1;
uint8_t TS1               :1;
uint8_t TS2               :1;
uint8_t TS3               :1;
uint8_t TS4               :1;
}bits;
}U_Permanent_Fail_Fuse_D;

#define D_Permanent_Fail_Fuse_D_IFC               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.bits.IFC
#define D_Permanent_Fail_Fuse_D_FORCE               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.bits.FORCE
#define D_Permanent_Fail_Fuse_D_TCO               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.bits.TCO
#define D_Permanent_Fail_Fuse_D_TS1               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.bits.TS1
#define D_Permanent_Fail_Fuse_D_TS2               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.bits.TS2
#define D_Permanent_Fail_Fuse_D_TS3               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.bits.TS3
#define D_Permanent_Fail_Fuse_D_TS4               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.bits.TS4
#define D_Permanent_Fail_Fuse_D               flashdata.t_Setting.t_Fuse.u_Permanent_Fail_Fuse_D.value

typedef union{
uint8_t               value;
struct{
uint8_t SUV_MODE               :1;
uint8_t CUV_RECOV_CHG               :1;
uint8_t CUDEP_REQ_CHG               :1;
uint8_t                 :5;
}bits;
}U_Protection_Configuration;

#define D_Protection_Configuration_SUV_MODE               flashdata.t_Setting.t_Protection.u_Protection_Configuration.bits.SUV_MODE
#define D_Protection_Configuration_CUV_RECOV_CHG               flashdata.t_Setting.t_Protection.u_Protection_Configuration.bits.CUV_RECOV_CHG
#define D_Protection_Configuration_CUDEP_REQ_CHG               flashdata.t_Setting.t_Protection.u_Protection_Configuration.bits.CUDEP_REQ_CHG
#define D_Protection_Configuration               flashdata.t_Setting.t_Protection.u_Protection_Configuration.value

typedef union{
uint8_t               value;
struct{
uint8_t CUV               :1;
uint8_t COV               :1;
uint8_t OCC1               :1;
uint8_t OCC2               :1;
uint8_t OCD1               :1;
uint8_t OCD2               :1;
uint8_t AOLD               :1;
uint8_t AOLDL               :1;
}bits;
}U_Enabled_Protections_A;

#define D_Enabled_Protections_A_CUV               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.CUV
#define D_Enabled_Protections_A_COV               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.COV
#define D_Enabled_Protections_A_OCC1               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.OCC1
#define D_Enabled_Protections_A_OCC2               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.OCC2
#define D_Enabled_Protections_A_OCD1               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.OCD1
#define D_Enabled_Protections_A_OCD2               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.OCD2
#define D_Enabled_Protections_A_AOLD               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.AOLD
#define D_Enabled_Protections_A_AOLDL               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.bits.AOLDL
#define D_Enabled_Protections_A               flashdata.t_Setting.t_Protection.u_Enabled_Protections_A.value

typedef union{
uint8_t               value;
struct{
uint8_t ASCC               :1;
uint8_t ASCCL               :1;
uint8_t ASCD               :1;
uint8_t ASCDL               :1;
uint8_t OTC               :1;
uint8_t OTD               :1;
uint8_t CUVC               :1;
uint8_t                 :1;
}bits;
}U_Enabled_Protections_B;

#define D_Enabled_Protections_B_ASCC               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.bits.ASCC
#define D_Enabled_Protections_B_ASCCL               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.bits.ASCCL
#define D_Enabled_Protections_B_ASCD               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.bits.ASCD
#define D_Enabled_Protections_B_ASCDL               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.bits.ASCDL
#define D_Enabled_Protections_B_OTC               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.bits.OTC
#define D_Enabled_Protections_B_OTD               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.bits.OTD
#define D_Enabled_Protections_B_CUVC               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.bits.CUVC
#define D_Enabled_Protections_B               flashdata.t_Setting.t_Protection.u_Enabled_Protections_B.value

typedef union{
uint8_t               value;
struct{
uint8_t OTF               :1;
uint8_t HWDF               :1;
uint8_t PTO               :1;
uint8_t                 :1;
uint8_t CTO               :1;
uint8_t                 :1;
uint8_t OC               :1;
uint8_t CHGC               :1;
}bits;
}U_Enabled_Protections_C;

#define D_Enabled_Protections_C_OTF               flashdata.t_Setting.t_Protection.u_Enabled_Protections_C.bits.OTF
#define D_Enabled_Protections_C_HWDF               flashdata.t_Setting.t_Protection.u_Enabled_Protections_C.bits.HWDF
#define D_Enabled_Protections_C_PTO               flashdata.t_Setting.t_Protection.u_Enabled_Protections_C.bits.PTO
#define D_Enabled_Protections_C_CTO               flashdata.t_Setting.t_Protection.u_Enabled_Protections_C.bits.CTO
#define D_Enabled_Protections_C_OC               flashdata.t_Setting.t_Protection.u_Enabled_Protections_C.bits.OC
#define D_Enabled_Protections_C_CHGC               flashdata.t_Setting.t_Protection.u_Enabled_Protections_C.bits.CHGC
#define D_Enabled_Protections_C               flashdata.t_Setting.t_Protection.u_Enabled_Protections_C.value

typedef union{
uint8_t               value;
struct{
uint8_t CHGV               :1;
uint8_t PCHGC               :1;
uint8_t UTC               :1;
uint8_t UTD               :1;
uint8_t COVL               :1;
uint8_t OCDL               :1;
uint8_t                 :2;
}bits;
}U_Enabled_Protections_D;

#define D_Enabled_Protections_D_CHGV               flashdata.t_Setting.t_Protection.u_Enabled_Protections_D.bits.CHGV
#define D_Enabled_Protections_D_PCHGC               flashdata.t_Setting.t_Protection.u_Enabled_Protections_D.bits.PCHGC
#define D_Enabled_Protections_D_UTC               flashdata.t_Setting.t_Protection.u_Enabled_Protections_D.bits.UTC
#define D_Enabled_Protections_D_UTD               flashdata.t_Setting.t_Protection.u_Enabled_Protections_D.bits.UTD
#define D_Enabled_Protections_D_COVL               flashdata.t_Setting.t_Protection.u_Enabled_Protections_D.bits.COVL
#define D_Enabled_Protections_D_OCDL               flashdata.t_Setting.t_Protection.u_Enabled_Protections_D.bits.OCDL
#define D_Enabled_Protections_D               flashdata.t_Setting.t_Protection.u_Enabled_Protections_D.value

typedef union{
uint8_t               value;
struct{
uint8_t SUV               :1;
uint8_t SOV               :1;
uint8_t SOCC               :1;
uint8_t SOCD               :1;
uint8_t SOT               :1;
uint8_t COVL               :1;
uint8_t SOTF               :1;
uint8_t QIM               :1;
}bits;
}U_Enabled_PF_A;

#define D_Enabled_PF_A_SUV               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.SUV
#define D_Enabled_PF_A_SOV               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.SOV
#define D_Enabled_PF_A_SOCC               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.SOCC
#define D_Enabled_PF_A_SOCD               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.SOCD
#define D_Enabled_PF_A_SOT               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.SOT
#define D_Enabled_PF_A_COVL               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.COVL
#define D_Enabled_PF_A_SOTF               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.SOTF
#define D_Enabled_PF_A_QIM               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.bits.QIM
#define D_Enabled_PF_A               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_A.value

typedef union{
uint8_t               value;
struct{
uint8_t CB               :1;
uint8_t IMP               :1;
uint8_t CD               :1;
uint8_t VIMR               :1;
uint8_t VIMA               :1;
uint8_t AOLDL               :1;
uint8_t ASCCL               :1;
uint8_t ASCDL               :1;
}bits;
}U_Enabled_PF_B;

#define D_Enabled_PF_B_CB               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.CB
#define D_Enabled_PF_B_IMP               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.IMP
#define D_Enabled_PF_B_CD               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.CD
#define D_Enabled_PF_B_VIMR               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.VIMR
#define D_Enabled_PF_B_VIMA               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.VIMA
#define D_Enabled_PF_B_AOLDL               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.AOLDL
#define D_Enabled_PF_B_ASCCL               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.ASCCL
#define D_Enabled_PF_B_ASCDL               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.bits.ASCDL
#define D_Enabled_PF_B               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_B.value

typedef union{
uint8_t               value;
struct{
uint8_t CFETF               :1;
uint8_t DFETF               :1;
uint8_t OCDL               :1;
uint8_t FUSE               :1;
uint8_t AFER               :1;
uint8_t AFEC               :1;
uint8_t _2LVL               :1;
uint8_t PTC               :1;
}bits;
}U_Enabled_PF_C;

#define D_Enabled_PF_C_CFETF               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits.CFETF
#define D_Enabled_PF_C_DFETF               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits.DFETF
#define D_Enabled_PF_C_OCDL               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits.OCDL
#define D_Enabled_PF_C_FUSE               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits.FUSE
#define D_Enabled_PF_C_AFER               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits.AFER
#define D_Enabled_PF_C_AFEC               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits.AFEC
#define D_Enabled_PF_C_2LVL               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits._2LVL
#define D_Enabled_PF_C_PTC               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.bits.PTC
#define D_Enabled_PF_C               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_C.value

typedef union{
uint8_t               value;
struct{
uint8_t VSP               :1;
uint8_t FORCE               :1;
uint8_t TCO               :1;
uint8_t                 :1;
uint8_t TS1               :1;
uint8_t TS2               :1;
uint8_t TS3               :1;
uint8_t TS4               :1;
}bits;
}U_Enabled_PF_D;

#define D_Enabled_PF_D_VSP               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.bits.VSP
#define D_Enabled_PF_D_FORCE               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.bits.FORCE
#define D_Enabled_PF_D_TCO               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.bits.TCO
#define D_Enabled_PF_D_TS1               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.bits.TS1
#define D_Enabled_PF_D_TS2               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.bits.TS2
#define D_Enabled_PF_D_TS3               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.bits.TS3
#define D_Enabled_PF_D_TS4               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.bits.TS4
#define D_Enabled_PF_D               flashdata.t_Setting.t_Permanent_Failure.u_Enabled_PF_D.value

typedef union{
uint8_t               value;
struct{
uint8_t RSNS               :1;
uint8_t SCDDx2               :1;
uint8_t                 :6;
}bits;
}U_AFE_Protection_Control;

#define D_AFE_Protection_Control_RSNS               flashdata.t_Setting.t_AFE.u_AFE_Protection_Control.bits.RSNS
#define D_AFE_Protection_Control_SCDDx2               flashdata.t_Setting.t_AFE.u_AFE_Protection_Control.bits.SCDDx2
#define D_AFE_Protection_Control               flashdata.t_Setting.t_AFE.u_AFE_Protection_Control.value

typedef union{
uint16_t               value;
struct{
uint16_t                 :2;
uint16_t LDO_EN               :1;
uint16_t GAUGE_EN               :1;
uint16_t FET_EN               :1;
uint16_t LF_EN               :1;
uint16_t PF_EN               :1;
uint16_t BBR_EN               :1;
uint16_t FUSE_EN               :1;
uint16_t LED_EN               :1;
uint16_t ACDSG_EN               :1;
uint16_t ACCHG_EN               :1;
uint16_t FFC_EN               :1;
uint16_t                 :3;
}bits;
}U_Manufacturing_Status_Init;

#define D_Manufacturing_Status_Init_LDO_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.LDO_EN
#define D_Manufacturing_Status_Init_GAUGE_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.GAUGE_EN
#define D_Manufacturing_Status_Init_FET_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.FET_EN
#define D_Manufacturing_Status_Init_LF_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.LF_EN
#define D_Manufacturing_Status_Init_PF_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.PF_EN
#define D_Manufacturing_Status_Init_BBR_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.BBR_EN
#define D_Manufacturing_Status_Init_FUSE_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.FUSE_EN
#define D_Manufacturing_Status_Init_LED_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.LED_EN
#define D_Manufacturing_Status_Init_ACDSG_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.ACDSG_EN
#define D_Manufacturing_Status_Init_ACCHG_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.ACCHG_EN
#define D_Manufacturing_Status_Init_FFC_EN               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.bits.FFC_EN
#define D_Manufacturing_Status_Init               flashdata.t_Setting.t_AFE.u_Manufacturing_Status_Init.value

typedef union{
uint8_t               value;
struct{
uint8_t                 :2;
uint8_t WK0               :1;
uint8_t WK1               :1;
uint8_t                 :4;
}bits;
}U_Wake_Comparator;

#define D_Wake_Comparator_WK0               flashdata.t_Power.t_Sleep.u_Wake_Comparator.bits.WK0
#define D_Wake_Comparator_WK1               flashdata.t_Power.t_Sleep.u_Wake_Comparator.bits.WK1
#define D_Wake_Comparator               flashdata.t_Power.t_Sleep.u_Wake_Comparator.value

typedef union{
uint16_t               value;
struct{
uint16_t                 :15;
uint16_t CAPM               :1;
}bits;
}U_Initial_Battery_Mode;

#define D_Initial_Battery_Mode_CAPM               flashdata.t_SBS_Configuration.t_Data.u_Initial_Battery_Mode.bits.CAPM
#define D_Initial_Battery_Mode               flashdata.t_SBS_Configuration.t_Data.u_Initial_Battery_Mode.value

typedef union{
uint16_t               value;
struct{
uint16_t DUAL_MODE_EN               :1;
uint16_t FU_DIS               :1;
uint16_t MFC_DIS               :1;
uint16_t MFC_CLR_CMD               :1;
uint16_t ErrRst_EN               :1;
uint16_t JEITA_EN               :1;
uint16_t POLY_EN               :1;
uint16_t POLY_STEP_DWN               :1;
uint16_t PSE_CHG_EN               :1;
uint16_t                 :1;
uint16_t _3ENR_EN               :1;
uint16_t C13_SPEC               :1;
uint16_t DMCHG_ADJ               :1;
uint16_t ATTF_EN               :1;
uint16_t TCMD_DIS               :1;
uint16_t RSOC_RND_99               :1;
}bits;
}U_Configuration_Register;

#define D_Configuration_Register_DUAL_MODE_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.DUAL_MODE_EN
#define D_Configuration_Register_FU_DIS               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.FU_DIS
#define D_Configuration_Register_MFC_DIS               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.MFC_DIS
#define D_Configuration_Register_MFC_CLR_CMD               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.MFC_CLR_CMD
#define D_Configuration_Register_ErrRst_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.ErrRst_EN
#define D_Configuration_Register_JEITA_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.JEITA_EN
#define D_Configuration_Register_POLY_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.POLY_EN
#define D_Configuration_Register_POLY_STEP_DWN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.POLY_STEP_DWN
#define D_Configuration_Register_PSE_CHG_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.PSE_CHG_EN
#define D_Configuration_Register_3ENR_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits._3ENR_EN
#define D_Configuration_Register_C13_SPEC               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.C13_SPEC
#define D_Configuration_Register_DMCHG_ADJ               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.DMCHG_ADJ
#define D_Configuration_Register_ATTF_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.ATTF_EN
#define D_Configuration_Register_TCMD_DIS               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.TCMD_DIS
#define D_Configuration_Register_RSOC_RND_99               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.bits.RSOC_RND_99
#define D_Configuration_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_Register.value

typedef union{
uint8_t               value;
struct{
uint8_t EDV_SOC_EN               :1;
uint8_t ALT_LS2_TRIGGER               :1;
uint8_t SYS_PRES_EN               :1;
uint8_t RELAX_RSOC_DROP               :1;
uint8_t USE_FCC_SoH               :1;
uint8_t SMART_CHG               :1;
uint8_t SMART_CHG_STP_DWN               :1;
uint8_t                 :1;
}bits;
}U_Configuration_2_Register;

#define D_Configuration_2_Register_EDV_SOC_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.bits.EDV_SOC_EN
#define D_Configuration_2_Register_ALT_LS2_TRIGGER               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.bits.ALT_LS2_TRIGGER
#define D_Configuration_2_Register_SYS_PRES_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.bits.SYS_PRES_EN
#define D_Configuration_2_Register_RELAX_RSOC_DROP               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.bits.RELAX_RSOC_DROP
#define D_Configuration_2_Register_USE_FCC_SoH               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.bits.USE_FCC_SoH
#define D_Configuration_2_Register_SMART_CHG               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.bits.SMART_CHG
#define D_Configuration_2_Register_SMART_CHG_STP_DWN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.bits.SMART_CHG_STP_DWN
#define D_Configuration_2_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_2_Register.value

typedef union{
uint8_t               value;
struct{
uint8_t CS20_SPEC               :1;
uint8_t RSOC_RND_DWN               :1;
uint8_t DIS_Exit_RemCap               :1;
uint8_t Dis_Max_Exit_RemCap               :1;
uint8_t                 :1;
uint8_t FCC_VDQ_EN               :1;
uint8_t NO_LO_TEMP_FCC_UPDATE               :1;
uint8_t CP_CTRL               :1;
}bits;
}U_Configuration_3_Register;

#define D_Configuration_3_Register_CS20_SPEC               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.bits.CS20_SPEC
#define D_Configuration_3_Register_RSOC_RND_DWN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.bits.RSOC_RND_DWN
#define D_Configuration_3_Register_DIS_Exit_RemCap               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.bits.DIS_Exit_RemCap
#define D_Configuration_3_Register_Dis_Max_Exit_RemCap               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.bits.Dis_Max_Exit_RemCap
#define D_Configuration_3_Register_FCC_VDQ_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.bits.FCC_VDQ_EN
#define D_Configuration_3_Register_NO_LO_TEMP_FCC_UPDATE               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.bits.NO_LO_TEMP_FCC_UPDATE
#define D_Configuration_3_Register_CP_CTRL               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.bits.CP_CTRL
#define D_Configuration_3_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_3_Register.value

typedef union{
uint8_t               value;
struct{
uint8_t SHP_FCSET               :1;
uint8_t AUTH0               :1;
uint8_t AUTH1               :1;
uint8_t FCC_CAL               :1;
uint8_t SHA1_AUTH_EN               :1;
uint8_t SHA1_KEY0               :1;
uint8_t SHA1_KEY1               :1;
uint8_t GB_SOV_RECOV               :1;
}bits;
}U_Configuration_4_Register;

#define D_Configuration_4_Register_SHP_FCSET               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.SHP_FCSET
#define D_Configuration_4_Register_AUTH0               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.AUTH0
#define D_Configuration_4_Register_AUTH1               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.AUTH1
#define D_Configuration_4_Register_FCC_CAL               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.FCC_CAL
#define D_Configuration_4_Register_SHA1_AUTH_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.SHA1_AUTH_EN
#define D_Configuration_4_Register_SHA1_KEY0               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.SHA1_KEY0
#define D_Configuration_4_Register_SHA1_KEY1               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.SHA1_KEY1
#define D_Configuration_4_Register_GB_SOV_RECOV               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.bits.GB_SOV_RECOV
#define D_Configuration_4_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_4_Register.value

typedef union{
uint8_t               value;
struct{
uint8_t CMND26               :1;
uint8_t                 :7;
}bits;
}U_Configuration_5_Register;

#define D_Configuration_5_Register_CMND26               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_5_Register.bits.CMND26
#define D_Configuration_5_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_5_Register.value

typedef union{
uint8_t               value;
struct{
uint8_t AIDM_EN               :1;
uint8_t                 :1;
uint8_t AIDM_SYNCH_FCC               :1;
uint8_t PI_EN               :1;
uint8_t PI_ENTER_CHG               :1;
uint8_t PI_RELAX_JUMP_OK               :1;
uint8_t PI_RELAX_SMOOTH_OK               :1;
uint8_t DLS_EXIT_EN               :1;
}bits;
}U_Configuration_6_Register;

#define D_Configuration_6_Register_AIDM_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.bits.AIDM_EN
#define D_Configuration_6_Register_AIDM_SYNCH_FCC               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.bits.AIDM_SYNCH_FCC
#define D_Configuration_6_Register_PI_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.bits.PI_EN
#define D_Configuration_6_Register_PI_ENTER_CHG               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.bits.PI_ENTER_CHG
#define D_Configuration_6_Register_PI_RELAX_JUMP_OK               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.bits.PI_RELAX_JUMP_OK
#define D_Configuration_6_Register_PI_RELAX_SMOOTH_OK               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.bits.PI_RELAX_SMOOTH_OK
#define D_Configuration_6_Register_DLS_EXIT_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.bits.DLS_EXIT_EN
#define D_Configuration_6_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_6_Register.value

typedef union{
uint8_t               value;
struct{
uint8_t DLS_CHGTERM               :1;
uint8_t FCC_PI_SYNC               :1;
uint8_t RSC_TAPER_EN               :1;
uint8_t SM_3_0               :1;
uint8_t OSCM_ACT               :1;
uint8_t OSCM_ACIN_RESTORE               :1;
uint8_t SM_3_5               :1;
uint8_t SM_4_0               :1;
}bits;
}U_Configuration_7_Register;

#define D_Configuration_7_Register_DLS_CHGTERM               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.DLS_CHGTERM
#define D_Configuration_7_Register_FCC_PI_SYNC               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.FCC_PI_SYNC
#define D_Configuration_7_Register_RSC_TAPER_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.RSC_TAPER_EN
#define D_Configuration_7_Register_SM_3_0               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.SM_3_0
#define D_Configuration_7_Register_OSCM_ACT               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.OSCM_ACT
#define D_Configuration_7_Register_OSCM_ACIN_RESTORE               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.OSCM_ACIN_RESTORE
#define D_Configuration_7_Register_SM_3_5               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.SM_3_5
#define D_Configuration_7_Register_SM_4_0               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.bits.SM_4_0
#define D_Configuration_7_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_7_Register.value

typedef union{
uint8_t               value;
struct{
uint8_t EXTD_STORAGE               :1;
uint8_t OSCM_EN               :1;
uint8_t OSCM_T3TIME               :1;
uint8_t RSC_EN               :1;
uint8_t ISD_RECHECK               :1;
uint8_t CID_RECHECK               :1;
uint8_t OSCM_CALTime               :1;
uint8_t                 :1;
}bits;
}U_Configuration_8_Register;

#define D_Configuration_8_Register_EXTD_STORAGE               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.bits.EXTD_STORAGE
#define D_Configuration_8_Register_OSCM_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.bits.OSCM_EN
#define D_Configuration_8_Register_OSCM_T3TIME               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.bits.OSCM_T3TIME
#define D_Configuration_8_Register_RSC_EN               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.bits.RSC_EN
#define D_Configuration_8_Register_ISD_RECHECK               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.bits.ISD_RECHECK
#define D_Configuration_8_Register_CID_RECHECK               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.bits.CID_RECHECK
#define D_Configuration_8_Register_OSCM_CALTime               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.bits.OSCM_CALTime
#define D_Configuration_8_Register               flashdata.t_Lenovo_Data.t_ConfigurationEx.u_Configuration_8_Register.value

typedef union{
uint16_t               value;
struct{
uint16_t RSOC_USE_DF               :1;
uint16_t                 :5;
uint16_t FCC_Update_delaying               :1;
uint16_t Correct_RCL               :1;
uint16_t Qmax_update_DSG               :1;
uint16_t Qmax_update_CHG               :1;
uint16_t                 :3;
uint16_t Discharge_relearning_point               :1;
uint16_t DIS_CHG_Releaning               :1;
uint16_t DIS_DSG_Releaning               :1;
}bits;
}U_Control_flag_1;

#define D_Control_flag_1_RSOC_USE_DF               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.RSOC_USE_DF
#define D_Control_flag_1_FCC_Update_delaying               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.FCC_Update_delaying
#define D_Control_flag_1_Correct_RCL               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.Correct_RCL
#define D_Control_flag_1_Qmax_update_DSG               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.Qmax_update_DSG
#define D_Control_flag_1_Qmax_update_CHG               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.Qmax_update_CHG
#define D_Control_flag_1_Discharge_relearning_point               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.Discharge_relearning_point
#define D_Control_flag_1_DIS_CHG_Releaning               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.DIS_CHG_Releaning
#define D_Control_flag_1_DIS_DSG_Releaning               flashdata.t_Control.t_Control_flag.u_Control_flag_1.bits.DIS_DSG_Releaning
#define D_Control_flag_1               flashdata.t_Control.t_Control_flag.u_Control_flag_1.value

typedef struct{
uint16_t               m_Cell1_vol_Gain;
uint16_t               m_Cell2_vol_Gain;
uint16_t               m_Cell3_vol_Gain;
uint16_t               m_Cell4_vol_Gain;
uint16_t               m_Pack_Gain;
uint16_t               m_Bat_Gain;
uint16_t               m_Current_Gain;
int16_t               m_CC_Offset;
uint16_t               m_Dead_Band;
int16_t               m_InterTOffset;
int16_t               m_TS1Offset;
int16_t               m_TS2Offset;
int16_t               m_TS3Offset;
int16_t               m_TS4Offset;
}T_Calibdata;

#define D_Calibdata_Cell1_vol_Gain               flashdata.t_Calib.t_Calibdata.m_Cell1_vol_Gain
#define D_Calibdata_Cell2_vol_Gain               flashdata.t_Calib.t_Calibdata.m_Cell2_vol_Gain
#define D_Calibdata_Cell3_vol_Gain               flashdata.t_Calib.t_Calibdata.m_Cell3_vol_Gain
#define D_Calibdata_Cell4_vol_Gain               flashdata.t_Calib.t_Calibdata.m_Cell4_vol_Gain
#define D_Calibdata_Pack_Gain               flashdata.t_Calib.t_Calibdata.m_Pack_Gain
#define D_Calibdata_Bat_Gain               flashdata.t_Calib.t_Calibdata.m_Bat_Gain
#define D_Calibdata_Current_Gain               flashdata.t_Calib.t_Calibdata.m_Current_Gain
#define D_Calibdata_CC_Offset               flashdata.t_Calib.t_Calibdata.m_CC_Offset
#define D_Calibdata_Dead_Band               flashdata.t_Calib.t_Calibdata.m_Dead_Band
#define D_Calibdata_InterTOffset               flashdata.t_Calib.t_Calibdata.m_InterTOffset
#define D_Calibdata_TS1Offset               flashdata.t_Calib.t_Calibdata.m_TS1Offset
#define D_Calibdata_TS2Offset               flashdata.t_Calib.t_Calibdata.m_TS2Offset
#define D_Calibdata_TS3Offset               flashdata.t_Calib.t_Calibdata.m_TS3Offset
#define D_Calibdata_TS4Offset               flashdata.t_Calib.t_Calibdata.m_TS4Offset

typedef struct{
uint16_t               m_SOC_OCV_Table_0;
uint16_t               m_SOC_OCV_Table_5;
uint16_t               m_SOC_OCV_Table_10;
uint16_t               m_SOC_OCV_Table_15;
uint16_t               m_SOC_OCV_Table_20;
uint16_t               m_SOC_OCV_Table_25;
uint16_t               m_SOC_OCV_Table_30;
uint16_t               m_SOC_OCV_Table_35;
uint16_t               m_SOC_OCV_Table_40;
uint16_t               m_SOC_OCV_Table_45;
uint16_t               m_SOC_OCV_Table_50;
uint16_t               m_SOC_OCV_Table_55;
uint16_t               m_SOC_OCV_Table_60;
uint16_t               m_SOC_OCV_Table_65;
uint16_t               m_SOC_OCV_Table_70;
uint16_t               m_SOC_OCV_Table_75;
uint16_t               m_SOC_OCV_Table_80;
uint16_t               m_SOC_OCV_Table_85;
uint16_t               m_SOC_OCV_Table_90;
uint16_t               m_SOC_OCV_Table_95;
uint16_t               m_SOC_OCV_Table_100;
}T_OCV_table;

#define D_OCV_SOC_OCV_Table_0               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_0
#define D_OCV_SOC_OCV_Table_5               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_5
#define D_OCV_SOC_OCV_Table_10               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_10
#define D_OCV_SOC_OCV_Table_15               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_15
#define D_OCV_SOC_OCV_Table_20               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_20
#define D_OCV_SOC_OCV_Table_25               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_25
#define D_OCV_SOC_OCV_Table_30               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_30
#define D_OCV_SOC_OCV_Table_35               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_35
#define D_OCV_SOC_OCV_Table_40               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_40
#define D_OCV_SOC_OCV_Table_45               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_45
#define D_OCV_SOC_OCV_Table_50               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_50
#define D_OCV_SOC_OCV_Table_55               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_55
#define D_OCV_SOC_OCV_Table_60               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_60
#define D_OCV_SOC_OCV_Table_65               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_65
#define D_OCV_SOC_OCV_Table_70               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_70
#define D_OCV_SOC_OCV_Table_75               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_75
#define D_OCV_SOC_OCV_Table_80               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_80
#define D_OCV_SOC_OCV_Table_85               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_85
#define D_OCV_SOC_OCV_Table_90               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_90
#define D_OCV_SOC_OCV_Table_95               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_95
#define D_OCV_SOC_OCV_Table_100               flashdata.t_OCV_SOC_table.t_OCV_table.m_SOC_OCV_Table_100

typedef struct{
uint16_t               m_SOC_OCV_Table_0;
uint16_t               m_SOC_OCV_Table_5;
uint16_t               m_SOC_OCV_Table_10;
uint16_t               m_SOC_OCV_Table_15;
uint16_t               m_SOC_OCV_Table_20;
uint16_t               m_SOC_OCV_Table_25;
uint16_t               m_SOC_OCV_Table_30;
uint16_t               m_SOC_OCV_Table_35;
uint16_t               m_SOC_OCV_Table_40;
uint16_t               m_SOC_OCV_Table_45;
uint16_t               m_SOC_OCV_Table_50;
uint16_t               m_SOC_OCV_Table_55;
uint16_t               m_SOC_OCV_Table_60;
uint16_t               m_SOC_OCV_Table_65;
uint16_t               m_SOC_OCV_Table_70;
uint16_t               m_SOC_OCV_Table_75;
uint16_t               m_SOC_OCV_Table_80;
uint16_t               m_SOC_OCV_Table_85;
uint16_t               m_SOC_OCV_Table_90;
uint16_t               m_SOC_OCV_Table_95;
uint16_t               m_SOC_OCV_Table_100;
}T_RA1;

#define D_RA1_SOC_OCV_Table_0               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_0
#define D_RA1_SOC_OCV_Table_5               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_5
#define D_RA1_SOC_OCV_Table_10               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_10
#define D_RA1_SOC_OCV_Table_15               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_15
#define D_RA1_SOC_OCV_Table_20               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_20
#define D_RA1_SOC_OCV_Table_25               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_25
#define D_RA1_SOC_OCV_Table_30               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_30
#define D_RA1_SOC_OCV_Table_35               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_35
#define D_RA1_SOC_OCV_Table_40               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_40
#define D_RA1_SOC_OCV_Table_45               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_45
#define D_RA1_SOC_OCV_Table_50               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_50
#define D_RA1_SOC_OCV_Table_55               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_55
#define D_RA1_SOC_OCV_Table_60               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_60
#define D_RA1_SOC_OCV_Table_65               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_65
#define D_RA1_SOC_OCV_Table_70               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_70
#define D_RA1_SOC_OCV_Table_75               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_75
#define D_RA1_SOC_OCV_Table_80               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_80
#define D_RA1_SOC_OCV_Table_85               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_85
#define D_RA1_SOC_OCV_Table_90               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_90
#define D_RA1_SOC_OCV_Table_95               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_95
#define D_RA1_SOC_OCV_Table_100               flashdata.t_SOC_RA.t_RA1.m_SOC_OCV_Table_100

typedef struct{
uint16_t               m_SOC_OCV_Table_0;
uint16_t               m_SOC_OCV_Table_5;
uint16_t               m_SOC_OCV_Table_10;
uint16_t               m_SOC_OCV_Table_15;
uint16_t               m_SOC_OCV_Table_20;
uint16_t               m_SOC_OCV_Table_25;
uint16_t               m_SOC_OCV_Table_30;
uint16_t               m_SOC_OCV_Table_35;
uint16_t               m_SOC_OCV_Table_40;
uint16_t               m_SOC_OCV_Table_45;
uint16_t               m_SOC_OCV_Table_50;
uint16_t               m_SOC_OCV_Table_55;
uint16_t               m_SOC_OCV_Table_60;
uint16_t               m_SOC_OCV_Table_65;
uint16_t               m_SOC_OCV_Table_70;
uint16_t               m_SOC_OCV_Table_75;
uint16_t               m_SOC_OCV_Table_80;
uint16_t               m_SOC_OCV_Table_85;
uint16_t               m_SOC_OCV_Table_90;
uint16_t               m_SOC_OCV_Table_95;
uint16_t               m_SOC_OCV_Table_100;
}T_RA2;

#define D_RA2_SOC_OCV_Table_0               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_0
#define D_RA2_SOC_OCV_Table_5               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_5
#define D_RA2_SOC_OCV_Table_10               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_10
#define D_RA2_SOC_OCV_Table_15               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_15
#define D_RA2_SOC_OCV_Table_20               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_20
#define D_RA2_SOC_OCV_Table_25               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_25
#define D_RA2_SOC_OCV_Table_30               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_30
#define D_RA2_SOC_OCV_Table_35               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_35
#define D_RA2_SOC_OCV_Table_40               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_40
#define D_RA2_SOC_OCV_Table_45               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_45
#define D_RA2_SOC_OCV_Table_50               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_50
#define D_RA2_SOC_OCV_Table_55               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_55
#define D_RA2_SOC_OCV_Table_60               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_60
#define D_RA2_SOC_OCV_Table_65               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_65
#define D_RA2_SOC_OCV_Table_70               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_70
#define D_RA2_SOC_OCV_Table_75               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_75
#define D_RA2_SOC_OCV_Table_80               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_80
#define D_RA2_SOC_OCV_Table_85               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_85
#define D_RA2_SOC_OCV_Table_90               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_90
#define D_RA2_SOC_OCV_Table_95               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_95
#define D_RA2_SOC_OCV_Table_100               flashdata.t_SOC_RA.t_RA2.m_SOC_OCV_Table_100

typedef struct{
uint8_t               m_CP_Delay;
uint8_t               m_CP_H;
uint8_t               m_CP_L;
uint8_t               m_CPH_Coefficcient;
uint8_t               m_CPL_Coefficcient;
uint8_t               m_FCC_Coefficcient;
}T_CP_Para;

#define D_CP_Delay               flashdata.t_CP_Correction.t_CP_Para.m_CP_Delay
#define D_CP_H               flashdata.t_CP_Correction.t_CP_Para.m_CP_H
#define D_CP_L               flashdata.t_CP_Correction.t_CP_Para.m_CP_L
#define D_CP_CPH_Coefficcient               flashdata.t_CP_Correction.t_CP_Para.m_CPH_Coefficcient
#define D_CP_CPL_Coefficcient               flashdata.t_CP_Correction.t_CP_Para.m_CPL_Coefficcient
#define D_CP_FCC_Coefficcient               flashdata.t_CP_Correction.t_CP_Para.m_FCC_Coefficcient

typedef struct{
uint8_t               m_CP_table_C_rate_1;
uint8_t               m_CP_table_C_rate_2;
uint8_t               m_CP_table_C_rate_3;
uint8_t               m_CP_table_C_rate_4;
int8_t               m_CP_table_T_rate_1;
int8_t               m_CP_table_T_rate_2;
int8_t               m_CP_table_T_rate_3;
int8_t               m_CP_table_T_rate_4;
int8_t               m_CP_table_T_rate_5;
}T_CP_Para_table;

#define D_CP_table_C_rate_1               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_C_rate_1
#define D_CP_table_C_rate_2               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_C_rate_2
#define D_CP_table_C_rate_3               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_C_rate_3
#define D_CP_table_C_rate_4               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_C_rate_4
#define D_CP_table_T_rate_1               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_T_rate_1
#define D_CP_table_T_rate_2               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_T_rate_2
#define D_CP_table_T_rate_3               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_T_rate_3
#define D_CP_table_T_rate_4               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_T_rate_4
#define D_CP_table_T_rate_5               flashdata.t_CP_Correction.t_CP_Para_table.m_CP_table_T_rate_5

typedef struct{
uint8_t               m_RA_table_C_rate_1;
uint8_t               m_RA_table_C_rate_2;
uint8_t               m_RA_table_C_rate_3;
int8_t               m_RA_table_T_rate_1;
int8_t               m_RA_table_T_rate_2;
int8_t               m_RA_table_T_rate_3;
}T_RA_Para_table;

#define D_RA_table_C_rate_1               flashdata.t_CP_Correction.t_RA_Para_table.m_RA_table_C_rate_1
#define D_RA_table_C_rate_2               flashdata.t_CP_Correction.t_RA_Para_table.m_RA_table_C_rate_2
#define D_RA_table_C_rate_3               flashdata.t_CP_Correction.t_RA_Para_table.m_RA_table_C_rate_3
#define D_RA_table_T_rate_1               flashdata.t_CP_Correction.t_RA_Para_table.m_RA_table_T_rate_1
#define D_RA_table_T_rate_2               flashdata.t_CP_Correction.t_RA_Para_table.m_RA_table_T_rate_2
#define D_RA_table_T_rate_3               flashdata.t_CP_Correction.t_RA_Para_table.m_RA_table_T_rate_3

typedef struct{
uint16_t               m_CPL_voltage_table_C1_T1;
uint16_t               m_CPL_voltage_table_C1_T2;
uint16_t               m_CPL_voltage_table_C1_T3;
uint16_t               m_CPL_voltage_table_C1_T4;
uint16_t               m_CPL_voltage_table_C1_T5;
uint16_t               m_CPL_voltage_table_C2_T1;
uint16_t               m_CPL_voltage_table_C2_T2;
uint16_t               m_CPL_voltage_table_C2_T3;
uint16_t               m_CPL_voltage_table_C2_T4;
uint16_t               m_CPL_voltage_table_C2_T5;
uint16_t               m_CPL_voltage_table_C3_T1;
uint16_t               m_CPL_voltage_table_C3_T2;
uint16_t               m_CPL_voltage_table_C3_T3;
uint16_t               m_CPL_voltage_table_C3_T4;
uint16_t               m_CPL_voltage_table_C3_T5;
uint16_t               m_CPL_voltage_table_C4_T1;
uint16_t               m_CPL_voltage_table_C4_T2;
uint16_t               m_CPL_voltage_table_C4_T3;
uint16_t               m_CPL_voltage_table_C4_T4;
uint16_t               m_CPL_voltage_table_C4_T5;
}T_CPL_Table;

#define D_CPL_voltage_table_C1_T1               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C1_T1
#define D_CPL_voltage_table_C1_T2               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C1_T2
#define D_CPL_voltage_table_C1_T3               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C1_T3
#define D_CPL_voltage_table_C1_T4               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C1_T4
#define D_CPL_voltage_table_C1_T5               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C1_T5
#define D_CPL_voltage_table_C2_T1               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C2_T1
#define D_CPL_voltage_table_C2_T2               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C2_T2
#define D_CPL_voltage_table_C2_T3               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C2_T3
#define D_CPL_voltage_table_C2_T4               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C2_T4
#define D_CPL_voltage_table_C2_T5               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C2_T5
#define D_CPL_voltage_table_C3_T1               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C3_T1
#define D_CPL_voltage_table_C3_T2               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C3_T2
#define D_CPL_voltage_table_C3_T3               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C3_T3
#define D_CPL_voltage_table_C3_T4               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C3_T4
#define D_CPL_voltage_table_C3_T5               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C3_T5
#define D_CPL_voltage_table_C4_T1               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C4_T1
#define D_CPL_voltage_table_C4_T2               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C4_T2
#define D_CPL_voltage_table_C4_T3               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C4_T3
#define D_CPL_voltage_table_C4_T4               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C4_T4
#define D_CPL_voltage_table_C4_T5               flashdata.t_CP_Correction.t_CPL_Table.m_CPL_voltage_table_C4_T5

typedef struct{
uint16_t               m_QCap_Capcity_table_C1_T1;
uint16_t               m_QCap_Capcity_table_C1_T2;
uint16_t               m_QCap_Capcity_table_C1_T3;
uint16_t               m_QCap_Capcity_table_C1_T4;
uint16_t               m_QCap_Capcity_table_C1_T5;
uint16_t               m_QCap_Capcity_table_C2_T1;
uint16_t               m_QCap_Capcity_table_C2_T2;
uint16_t               m_QCap_Capcity_table_C2_T3;
uint16_t               m_QCap_Capcity_table_C2_T4;
uint16_t               m_QCap_Capcity_table_C2_T5;
uint16_t               m_QCap_Capcity_table_C3_T1;
uint16_t               m_QCap_Capcity_table_C3_T2;
uint16_t               m_QCap_Capcity_table_C3_T3;
uint16_t               m_QCap_Capcity_table_C3_T4;
uint16_t               m_QCap_Capcity_table_C3_T5;
uint16_t               m_QCap_Capcity_table_C4_T1;
uint16_t               m_QCap_Capcity_table_C4_T2;
uint16_t               m_QCap_Capcity_table_C4_T3;
uint16_t               m_QCap_Capcity_table_C4_T4;
uint16_t               m_QCap_Capcity_table_C4_T5;
}T_QCap_Table;

#define D_QCap_Capcity_table_C1_T1               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C1_T1
#define D_QCap_Capcity_table_C1_T2               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C1_T2
#define D_QCap_Capcity_table_C1_T3               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C1_T3
#define D_QCap_Capcity_table_C1_T4               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C1_T4
#define D_QCap_Capcity_table_C1_T5               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C1_T5
#define D_QCap_Capcity_table_C2_T1               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C2_T1
#define D_QCap_Capcity_table_C2_T2               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C2_T2
#define D_QCap_Capcity_table_C2_T3               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C2_T3
#define D_QCap_Capcity_table_C2_T4               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C2_T4
#define D_QCap_Capcity_table_C2_T5               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C2_T5
#define D_QCap_Capcity_table_C3_T1               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C3_T1
#define D_QCap_Capcity_table_C3_T2               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C3_T2
#define D_QCap_Capcity_table_C3_T3               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C3_T3
#define D_QCap_Capcity_table_C3_T4               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C3_T4
#define D_QCap_Capcity_table_C3_T5               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C3_T5
#define D_QCap_Capcity_table_C4_T1               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C4_T1
#define D_QCap_Capcity_table_C4_T2               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C4_T2
#define D_QCap_Capcity_table_C4_T3               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C4_T3
#define D_QCap_Capcity_table_C4_T4               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C4_T4
#define D_QCap_Capcity_table_C4_T5               flashdata.t_CP_Correction.t_QCap_Table.m_QCap_Capcity_table_C4_T5

typedef struct{
uint16_t               m_Si_New_Capacity;
uint16_t               m_Si_Loss_Start_SOC;
uint16_t               m_Si_Loss_End_SOC;
uint16_t               m_Si_Loss_Start_Voltage;
uint16_t               m_Si_Loss_End_Voltage;
int32_t               m_Si_Loss_A;
int32_t               m_Si_Loss_B;
}T_Si_Loss_Para;

#define D_Si_New_Capacity               flashdata.t_CP_Correction.t_Si_Loss_Para.m_Si_New_Capacity
#define D_Si_Loss_Start_SOC               flashdata.t_CP_Correction.t_Si_Loss_Para.m_Si_Loss_Start_SOC
#define D_Si_Loss_End_SOC               flashdata.t_CP_Correction.t_Si_Loss_Para.m_Si_Loss_End_SOC
#define D_Si_Loss_Start_Voltage               flashdata.t_CP_Correction.t_Si_Loss_Para.m_Si_Loss_Start_Voltage
#define D_Si_Loss_End_Voltage               flashdata.t_CP_Correction.t_Si_Loss_Para.m_Si_Loss_End_Voltage
#define D_Si_Loss_A               flashdata.t_CP_Correction.t_Si_Loss_Para.m_Si_Loss_A
#define D_Si_Loss_B               flashdata.t_CP_Correction.t_Si_Loss_Para.m_Si_Loss_B

typedef struct{
uint16_t               m_Internal_impedance_cycle1;
uint16_t               m_Internal_impedance_cycle2;
uint16_t               m_Internal_impedance_cycle3;
uint16_t               m_Internal_impedance_cycle4;
uint16_t               m_Internal_impedance_cycle5;
uint16_t               m_Internal_impedance_cycle6;
uint8_t               m_Internal_impedance_table1;
uint8_t               m_Internal_impedance_table2;
uint8_t               m_Internal_impedance_table3;
uint8_t               m_Internal_impedance_table4;
uint8_t               m_Internal_impedance_table5;
uint8_t               m_Internal_impedance_table6;
uint16_t               m_Internal_FCC_table1;
uint16_t               m_Internal_FCC_table2;
uint16_t               m_Internal_FCC_table3;
uint16_t               m_Internal_FCC_table4;
uint16_t               m_Internal_FCC_table5;
uint16_t               m_Internal_FCC_table6;
}T_CEDV_Cycle_Compensate;

#define D_CEDV_Internal_impedance_cycle1               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_cycle1
#define D_CEDV_Internal_impedance_cycle2               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_cycle2
#define D_CEDV_Internal_impedance_cycle3               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_cycle3
#define D_CEDV_Internal_impedance_cycle4               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_cycle4
#define D_CEDV_Internal_impedance_cycle5               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_cycle5
#define D_CEDV_Internal_impedance_cycle6               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_cycle6
#define D_CEDV_Internal_impedance_table1               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_table1
#define D_CEDV_Internal_impedance_table2               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_table2
#define D_CEDV_Internal_impedance_table3               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_table3
#define D_CEDV_Internal_impedance_table4               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_table4
#define D_CEDV_Internal_impedance_table5               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_table5
#define D_CEDV_Internal_impedance_table6               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_impedance_table6
#define D_CEDV_Internal_FCC_table1               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_FCC_table1
#define D_CEDV_Internal_FCC_table2               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_FCC_table2
#define D_CEDV_Internal_FCC_table3               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_FCC_table3
#define D_CEDV_Internal_FCC_table4               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_FCC_table4
#define D_CEDV_Internal_FCC_table5               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_FCC_table5
#define D_CEDV_Internal_FCC_table6               flashdata.t_Gas_Gauging.t_CEDV_Cycle_Compensate.m_Internal_FCC_table6

typedef struct{
uint16_t               m_Relearn_stop_time;
uint8_t               m_Min_current_of_cap_calc;
uint8_t               m_Consum_current_of_discharge;
uint8_t               m_Deterioration_capacity;
uint16_t               m_FCC_variance;
int8_t               m_relearn_temp_limit;
}T_FCC;

#define D_FCC_Relearn_stop_time               flashdata.t_Gas_Gauging.t_FCC.m_Relearn_stop_time
#define D_FCC_Min_current_of_cap_calc               flashdata.t_Gas_Gauging.t_FCC.m_Min_current_of_cap_calc
#define D_FCC_Consum_current_of_discharge               flashdata.t_Gas_Gauging.t_FCC.m_Consum_current_of_discharge
#define D_FCC_Deterioration_capacity               flashdata.t_Gas_Gauging.t_FCC.m_Deterioration_capacity
#define D_FCC_variance               flashdata.t_Gas_Gauging.t_FCC.m_FCC_variance
#define D_FCC_relearn_temp_limit               flashdata.t_Gas_Gauging.t_FCC.m_relearn_temp_limit

typedef struct{
uint8_t               m_Qmax_update_min_delta_SOC;
uint8_t               m_Temp_Low_limit;
uint8_t               m_Temp_High_limit;
uint8_t               m_C_rate_low_limit;
uint8_t               m_C_rate_high_limit;
uint8_t               m_SOC_low_limit;
uint8_t               m_SOC_high_limit;
uint8_t               m_Cycle_limit;
}T_Qmax;

#define D_Qmax_update_min_delta_SOC               flashdata.t_Gas_Gauging.t_Qmax.m_Qmax_update_min_delta_SOC
#define D_Qmax_Temp_Low_limit               flashdata.t_Gas_Gauging.t_Qmax.m_Temp_Low_limit
#define D_Qmax_Temp_High_limit               flashdata.t_Gas_Gauging.t_Qmax.m_Temp_High_limit
#define D_Qmax_C_rate_low_limit               flashdata.t_Gas_Gauging.t_Qmax.m_C_rate_low_limit
#define D_Qmax_C_rate_high_limit               flashdata.t_Gas_Gauging.t_Qmax.m_C_rate_high_limit
#define D_Qmax_SOC_low_limit               flashdata.t_Gas_Gauging.t_Qmax.m_SOC_low_limit
#define D_Qmax_SOC_high_limit               flashdata.t_Gas_Gauging.t_Qmax.m_SOC_high_limit
#define D_Qmax_Cycle_limit               flashdata.t_Gas_Gauging.t_Qmax.m_Cycle_limit

typedef struct{
uint16_t               m_0_voltage;
uint8_t               m_0_voltage_Delay;
}T_Discharge_termination;

#define D_Discharge_0_voltage               flashdata.t_Gas_Gauging.t_Discharge_termination.m_0_voltage
#define D_Discharge_0_voltage_Delay               flashdata.t_Gas_Gauging.t_Discharge_termination.m_0_voltage_Delay

typedef struct{
uint16_t               m_Cell_balancing_ON_voltage;
uint16_t               m_Cell_balancing_OFF_voltage;
uint16_t               m_Enable_voltage_upper_limit;
uint16_t               m_Enable_voltage_lower_limit;
}T_Cell_Balances;

#define D_Cell_balancing_ON_voltage               flashdata.t_Gas_Gauging.t_Cell_Balances.m_Cell_balancing_ON_voltage
#define D_Cell_balancing_OFF_voltage               flashdata.t_Gas_Gauging.t_Cell_Balances.m_Cell_balancing_OFF_voltage
#define D_Cell_Enable_voltage_upper_limit               flashdata.t_Gas_Gauging.t_Cell_Balances.m_Enable_voltage_upper_limit
#define D_Cell_Enable_voltage_lower_limit               flashdata.t_Gas_Gauging.t_Cell_Balances.m_Enable_voltage_lower_limit

typedef struct{
int16_t               m_Dsg_Current_Threshold;
int16_t               m_Chg_Current_Threshold;
int16_t               m_Quit_Current;
uint8_t               m_Dsg_Relax_Time;
uint8_t               m_Chg_Relax_Time;
}T_Current_Thresholds;

#define D_Current_Dsg_Current_Threshold               flashdata.t_Gas_Gauging.t_Current_Thresholds.m_Dsg_Current_Threshold
#define D_Current_Chg_Current_Threshold               flashdata.t_Gas_Gauging.t_Current_Thresholds.m_Chg_Current_Threshold
#define D_Current_Quit_Current               flashdata.t_Gas_Gauging.t_Current_Thresholds.m_Quit_Current
#define D_Current_Dsg_Relax_Time               flashdata.t_Gas_Gauging.t_Current_Thresholds.m_Dsg_Relax_Time
#define D_Current_Chg_Relax_Time               flashdata.t_Gas_Gauging.t_Current_Thresholds.m_Chg_Relax_Time

typedef struct{
uint16_t               m_Design_Capacity_mAh;
uint16_t               m_Design_Capacity_in_cWh;
uint16_t               m_Design_Voltage;
uint16_t               m_Initial_FCC;
}T_Design;

#define D_Design_Capacity_mAh               flashdata.t_Gas_Gauging.t_Design.m_Design_Capacity_mAh
#define D_Design_Capacity_in_cWh               flashdata.t_Gas_Gauging.t_Design.m_Design_Capacity_in_cWh
#define D_Design_Voltage               flashdata.t_Gas_Gauging.t_Design.m_Design_Voltage
#define D_Design_Initial_FCC               flashdata.t_Gas_Gauging.t_Design.m_Initial_FCC

typedef struct{
int8_t               m_Cycle_Count_Percentage;
}T_Cycle;

#define D_Cycle_Count_Percentage               flashdata.t_Gas_Gauging.t_Cycle.m_Cycle_Count_Percentage

typedef struct{
uint16_t               m_Set_Voltage_Threshold;
uint16_t               m_Clear_Voltage_Threshold;
uint8_t               m_Set_RSOC_Threshold;
uint8_t               m_Clear_RSOC_Threshold;
}T_FD;

#define D_FD_Set_Voltage_Threshold               flashdata.t_Gas_Gauging.t_FD.m_Set_Voltage_Threshold
#define D_FD_Clear_Voltage_Threshold               flashdata.t_Gas_Gauging.t_FD.m_Clear_Voltage_Threshold
#define D_FD_Set_RSOC_Threshold               flashdata.t_Gas_Gauging.t_FD.m_Set_RSOC_Threshold
#define D_FD_Clear_RSOC_Threshold               flashdata.t_Gas_Gauging.t_FD.m_Clear_RSOC_Threshold

typedef struct{
uint16_t               m_Set_Voltage_Threshold;
uint16_t               m_Clear_Voltage_Threshold;
uint8_t               m_Set_RSOC_Threshold;
uint8_t               m_Clear_RSOC_Threshold;
}T_FC;

#define D_FC_Set_Voltage_Threshold               flashdata.t_Gas_Gauging.t_FC.m_Set_Voltage_Threshold
#define D_FC_Clear_Voltage_Threshold               flashdata.t_Gas_Gauging.t_FC.m_Clear_Voltage_Threshold
#define D_FC_Set_RSOC_Threshold               flashdata.t_Gas_Gauging.t_FC.m_Set_RSOC_Threshold
#define D_FC_Clear_RSOC_Threshold               flashdata.t_Gas_Gauging.t_FC.m_Clear_RSOC_Threshold

typedef struct{
uint16_t               m_Set_Voltage_Threshold;
uint16_t               m_Clear_Voltage_Threshold;
uint8_t               m_Set_RSOC_Threshold;
uint8_t               m_Clear_RSOC_Threshold;
}T_TD;

#define D_TD_Set_Voltage_Threshold               flashdata.t_Gas_Gauging.t_TD.m_Set_Voltage_Threshold
#define D_TD_Clear_Voltage_Threshold               flashdata.t_Gas_Gauging.t_TD.m_Clear_Voltage_Threshold
#define D_TD_Set_RSOC_Threshold               flashdata.t_Gas_Gauging.t_TD.m_Set_RSOC_Threshold
#define D_TD_Clear_RSOC_Threshold               flashdata.t_Gas_Gauging.t_TD.m_Clear_RSOC_Threshold

typedef struct{
uint16_t               m_Set_Voltage_Threshold;
uint16_t               m_Clear_Voltage_Threshold;
uint8_t               m_Set_RSOC_Threshold;
uint8_t               m_Clear_RSOC_Threshold;
}T_TC;

#define D_TC_Set_Voltage_Threshold               flashdata.t_Gas_Gauging.t_TC.m_Set_Voltage_Threshold
#define D_TC_Clear_Voltage_Threshold               flashdata.t_Gas_Gauging.t_TC.m_Clear_Voltage_Threshold
#define D_TC_Set_RSOC_Threshold               flashdata.t_Gas_Gauging.t_TC.m_Set_RSOC_Threshold
#define D_TC_Clear_RSOC_Threshold               flashdata.t_Gas_Gauging.t_TC.m_Clear_RSOC_Threshold

typedef struct{
uint16_t               m_Cycle_Count;
uint16_t               m_QmaxCell1;
uint16_t               m_QmaxCell2;
uint16_t               m_QmaxCell3;
uint16_t               m_QmaxCell4;
uint16_t               m_QmaxPack;
uint16_t               m_QmaxCycleCount;
U_Update_Status               u_Update_Status;
}T_State;

#define D_State_Cycle_Count               flashdata.t_Gas_Gauging.t_State.m_Cycle_Count
#define D_State_QmaxCell1               flashdata.t_Gas_Gauging.t_State.m_QmaxCell1
#define D_State_QmaxCell2               flashdata.t_Gas_Gauging.t_State.m_QmaxCell2
#define D_State_QmaxCell3               flashdata.t_Gas_Gauging.t_State.m_QmaxCell3
#define D_State_QmaxCell4               flashdata.t_Gas_Gauging.t_State.m_QmaxCell4
#define D_State_QmaxPack               flashdata.t_Gas_Gauging.t_State.m_QmaxPack
#define D_State_QmaxCycleCount               flashdata.t_Gas_Gauging.t_State.m_QmaxCycleCount

typedef struct{
uint16_t               m_FW_Version;
uint16_t               m_DF_Version;
}T_Version;

#define D_Version_FW_Version               flashdata.t_Gas_Gauging.t_Version.m_FW_Version
#define D_Version_DF_Version               flashdata.t_Gas_Gauging.t_Version.m_DF_Version

typedef struct{
int16_t               m_MPPCurrent_Max;
int16_t               m_SPPCurrent_Max;
uint16_t               m_MinSysVoltage;
uint16_t               m_MinSysVoltage_delta;
uint16_t               m_FC_Diode_voltage;
int8_t               m_DBPT_min_temp;
int8_t               m_DBPT_max_temp;
uint16_t               m_PackResistance;
uint16_t               m_SystemResistance;
}T_DBPT;

#define D_DBPT_MPPCurrent_Max               flashdata.t_Gas_Gauging.t_DBPT.m_MPPCurrent_Max
#define D_DBPT_SPPCurrent_Max               flashdata.t_Gas_Gauging.t_DBPT.m_SPPCurrent_Max
#define D_DBPT_MinSysVoltage               flashdata.t_Gas_Gauging.t_DBPT.m_MinSysVoltage
#define D_DBPT_MinSysVoltage_delta               flashdata.t_Gas_Gauging.t_DBPT.m_MinSysVoltage_delta
#define D_DBPT_FC_Diode_voltage               flashdata.t_Gas_Gauging.t_DBPT.m_FC_Diode_voltage
#define D_DBPT_min_temp               flashdata.t_Gas_Gauging.t_DBPT.m_DBPT_min_temp
#define D_DBPT_max_temp               flashdata.t_Gas_Gauging.t_DBPT.m_DBPT_max_temp
#define D_DBPT_PackResistance               flashdata.t_Gas_Gauging.t_DBPT.m_PackResistance
#define D_DBPT_SystemResistance               flashdata.t_Gas_Gauging.t_DBPT.m_SystemResistance

typedef struct{
uint8_t               m_PI_RSOC_Threshold;
int8_t               m_PI_HI_Temp_Threshold;
uint16_t               m_Dsg_to_Voltage;
uint16_t               m_PI_Delte_Voltage;
uint16_t               m_PI_Time_Window;
uint16_t               m_PI_HT_Temp_Threshold;
uint16_t               m_PI_HT_Temp_Time;
}T_PI_Mode;

#define D_PI_RSOC_Threshold               flashdata.t_Gas_Gauging.t_PI_Mode.m_PI_RSOC_Threshold
#define D_PI_HI_Temp_Threshold               flashdata.t_Gas_Gauging.t_PI_Mode.m_PI_HI_Temp_Threshold
#define D_PI_Dsg_to_Voltage               flashdata.t_Gas_Gauging.t_PI_Mode.m_Dsg_to_Voltage
#define D_PI_Delte_Voltage               flashdata.t_Gas_Gauging.t_PI_Mode.m_PI_Delte_Voltage
#define D_PI_Time_Window               flashdata.t_Gas_Gauging.t_PI_Mode.m_PI_Time_Window
#define D_PI_HT_Temp_Threshold               flashdata.t_Gas_Gauging.t_PI_Mode.m_PI_HT_Temp_Threshold
#define D_PI_HT_Temp_Time               flashdata.t_Gas_Gauging.t_PI_Mode.m_PI_HT_Temp_Time

typedef struct{
U_Charging_Config               u_Charging_Config;
U_FETOptions               u_FETOptions;
U_SBS_Gauging_Configuration               u_SBS_Gauging_Configuration;
U_SBS_Configuration               u_SBS_Configuration;
U_Auth_Config               u_Auth_Config;
U_Power_Config               u_Power_Config;
U_IO_Config               u_IO_Config;
U_GPIO_Sealed_Access_Config               u_GPIO_Sealed_Access_Config;
U_Flag_Map_Set_Up_1               u_Flag_Map_Set_Up_1;
U_Flag_Map_Set_Up_2               u_Flag_Map_Set_Up_2;
U_Flag_Map_Set_Up_3               u_Flag_Map_Set_Up_3;
U_Flag_Map_Set_Up_4               u_Flag_Map_Set_Up_4;
U_LED_Configuration               u_LED_Configuration;
U_Temperature_Enable               u_Temperature_Enable;
U_Temperature_Mode               u_Temperature_Mode;
U_DA_Configuration               u_DA_Configuration;
U_SOC_Flag_Config_A               u_SOC_Flag_Config_A;
U_SOC_Flag_Config_B               u_SOC_Flag_Config_B;
U_Balancing_Configuration               u_Balancing_Configuration;
U_IT_Gauging_Configuration               u_IT_Gauging_Configuration;
U_IT_Gauging_Ext               u_IT_Gauging_Ext;
U_Elevated_Degrade_Configuration               u_Elevated_Degrade_Configuration;
}T_Configuration;


typedef struct{
U_Permanent_Fail_Fuse_A               u_Permanent_Fail_Fuse_A;
U_Permanent_Fail_Fuse_B               u_Permanent_Fail_Fuse_B;
U_Permanent_Fail_Fuse_C               u_Permanent_Fail_Fuse_C;
U_Permanent_Fail_Fuse_D               u_Permanent_Fail_Fuse_D;
uint16_t               m_Min_Blow_Fuse_Voltage;
uint8_t               m_Fuse_Blow_Timeout;
}T_Fuse;

#define D_Fuse_Min_Blow_Fuse_Voltage               flashdata.t_Setting.t_Fuse.m_Min_Blow_Fuse_Voltage
#define D_Fuse_Blow_Timeout               flashdata.t_Setting.t_Fuse.m_Fuse_Blow_Timeout

typedef struct{
U_Protection_Configuration               u_Protection_Configuration;
U_Enabled_Protections_A               u_Enabled_Protections_A;
U_Enabled_Protections_B               u_Enabled_Protections_B;
U_Enabled_Protections_C               u_Enabled_Protections_C;
U_Enabled_Protections_D               u_Enabled_Protections_D;
}T_Protection;


typedef struct{
U_Enabled_PF_A               u_Enabled_PF_A;
U_Enabled_PF_B               u_Enabled_PF_B;
U_Enabled_PF_C               u_Enabled_PF_C;
U_Enabled_PF_D               u_Enabled_PF_D;
}T_Permanent_Failure;


typedef struct{
U_AFE_Protection_Control               u_AFE_Protection_Control;
U_Manufacturing_Status_Init               u_Manufacturing_Status_Init;
}T_AFE;


typedef struct{
int16_t               m_Accumulated_Charge_Measurement;
uint16_t               m_Accum_Charge_Threshold;
}T_Accumulated_Charge_Measurement;

#define D_Accumulated_Charge_Measurement               flashdata.t_Setting.t_Accumulated_Charge_Measurement.m_Accumulated_Charge_Measurement
#define D_Accumulated_Accum_Charge_Threshold               flashdata.t_Setting.t_Accumulated_Charge_Measurement.m_Accum_Charge_Threshold

typedef struct{
uint8_t               m_TimeRSOCThresholdA;
uint8_t               m_TimeRSOCThresholdB;
uint8_t               m_TimeRSOCThresholdC;
uint8_t               m_TimeRSOCThresholdD;
uint8_t               m_TimeRSOCThresholdE;
uint8_t               m_TimeRSOCThresholdF;
uint8_t               m_TimeRSOCThresholdG;
}T_Lifetime_Setting;

#define D_Lifetime_TimeRSOCThresholdA               flashdata.t_Setting.t_Lifetime_Setting.m_TimeRSOCThresholdA
#define D_Lifetime_TimeRSOCThresholdB               flashdata.t_Setting.t_Lifetime_Setting.m_TimeRSOCThresholdB
#define D_Lifetime_TimeRSOCThresholdC               flashdata.t_Setting.t_Lifetime_Setting.m_TimeRSOCThresholdC
#define D_Lifetime_TimeRSOCThresholdD               flashdata.t_Setting.t_Lifetime_Setting.m_TimeRSOCThresholdD
#define D_Lifetime_TimeRSOCThresholdE               flashdata.t_Setting.t_Lifetime_Setting.m_TimeRSOCThresholdE
#define D_Lifetime_TimeRSOCThresholdF               flashdata.t_Setting.t_Lifetime_Setting.m_TimeRSOCThresholdF
#define D_Lifetime_TimeRSOCThresholdG               flashdata.t_Setting.t_Lifetime_Setting.m_TimeRSOCThresholdG

typedef struct{
uint16_t               m_Precharge_Start_Voltage;
uint16_t               m_Charging_Voltage_Low;
uint16_t               m_Charging_Voltage_Med;
uint16_t               m_Charging_Voltage_High;
uint8_t               m_Charging_Voltage_Hysteresis;
}T_Voltage_Range;

#define D_Voltage_Precharge_Start_Voltage               flashdata.t_Charging_algorithm.t_Voltage_Range.m_Precharge_Start_Voltage
#define D_Voltage_Charging_Voltage_Low               flashdata.t_Charging_algorithm.t_Voltage_Range.m_Charging_Voltage_Low
#define D_Voltage_Charging_Voltage_Med               flashdata.t_Charging_algorithm.t_Voltage_Range.m_Charging_Voltage_Med
#define D_Voltage_Charging_Voltage_High               flashdata.t_Charging_algorithm.t_Voltage_Range.m_Charging_Voltage_High
#define D_Voltage_Charging_Voltage_Hysteresis               flashdata.t_Charging_algorithm.t_Voltage_Range.m_Charging_Voltage_Hysteresis

typedef struct{
int16_t               m_T1_Temp;
int16_t               m_T2_Temp;
int16_t               m_T5_Temp;
int16_t               m_T6_Temp;
int16_t               m_T3_Temp;
int16_t               m_T4_Temp;
int16_t               m_Hysteresis_Temp;
}T_Temp_ranges;

#define D_Temp_T1_Temp               flashdata.t_Charging_algorithm.t_Temp_ranges.m_T1_Temp
#define D_Temp_T2_Temp               flashdata.t_Charging_algorithm.t_Temp_ranges.m_T2_Temp
#define D_Temp_T5_Temp               flashdata.t_Charging_algorithm.t_Temp_ranges.m_T5_Temp
#define D_Temp_T6_Temp               flashdata.t_Charging_algorithm.t_Temp_ranges.m_T6_Temp
#define D_Temp_T3_Temp               flashdata.t_Charging_algorithm.t_Temp_ranges.m_T3_Temp
#define D_Temp_T4_Temp               flashdata.t_Charging_algorithm.t_Temp_ranges.m_T4_Temp
#define D_Temp_Hysteresis_Temp               flashdata.t_Charging_algorithm.t_Temp_ranges.m_Hysteresis_Temp

typedef struct{
uint16_t               m_LT_CV;
uint16_t               m_LT_CCL;
uint16_t               m_LT_CCM;
uint16_t               m_LT_CCH;
}T_Low_temp;

#define D_Low_LT_CV               flashdata.t_Charging_algorithm.t_Low_temp.m_LT_CV
#define D_Low_LT_CCL               flashdata.t_Charging_algorithm.t_Low_temp.m_LT_CCL
#define D_Low_LT_CCM               flashdata.t_Charging_algorithm.t_Low_temp.m_LT_CCM
#define D_Low_LT_CCH               flashdata.t_Charging_algorithm.t_Low_temp.m_LT_CCH

typedef struct{
uint16_t               m_STL_CV;
uint16_t               m_STL_CCL;
uint16_t               m_STL_CCM;
uint16_t               m_STL_CCH;
}T_Standard_Low_temp;

#define D_Standard_STL_CV               flashdata.t_Charging_algorithm.t_Standard_Low_temp.m_STL_CV
#define D_Standard_STL_CCL               flashdata.t_Charging_algorithm.t_Standard_Low_temp.m_STL_CCL
#define D_Standard_STL_CCM               flashdata.t_Charging_algorithm.t_Standard_Low_temp.m_STL_CCM
#define D_Standard_STL_CCH               flashdata.t_Charging_algorithm.t_Standard_Low_temp.m_STL_CCH

typedef struct{
uint16_t               m_STH_CV;
uint16_t               m_STH_CCL;
uint16_t               m_STH_CCM;
uint16_t               m_STH_CCH;
}T_Standard_High_temp;

#define D_Standard_STH_CV               flashdata.t_Charging_algorithm.t_Standard_High_temp.m_STH_CV
#define D_Standard_STH_CCL               flashdata.t_Charging_algorithm.t_Standard_High_temp.m_STH_CCL
#define D_Standard_STH_CCM               flashdata.t_Charging_algorithm.t_Standard_High_temp.m_STH_CCM
#define D_Standard_STH_CCH               flashdata.t_Charging_algorithm.t_Standard_High_temp.m_STH_CCH

typedef struct{
uint16_t               m_HT_CV;
uint16_t               m_HT_CCL;
uint16_t               m_HT_CCM;
uint16_t               m_HT_CCH;
}T_High_temp;

#define D_High_HT_CV               flashdata.t_Charging_algorithm.t_High_temp.m_HT_CV
#define D_High_HT_CCL               flashdata.t_Charging_algorithm.t_High_temp.m_HT_CCL
#define D_High_HT_CCM               flashdata.t_Charging_algorithm.t_High_temp.m_HT_CCM
#define D_High_HT_CCH               flashdata.t_Charging_algorithm.t_High_temp.m_HT_CCH

typedef struct{
uint16_t               m_RT_CV;
uint16_t               m_RT_CCL;
uint16_t               m_RT_CCM;
uint16_t               m_RT_CCH;
}T_Rec_Temp_Charging;

#define D_Rec_RT_CV               flashdata.t_Charging_algorithm.t_Rec_Temp_Charging.m_RT_CV
#define D_Rec_RT_CCL               flashdata.t_Charging_algorithm.t_Rec_Temp_Charging.m_RT_CCL
#define D_Rec_RT_CCM               flashdata.t_Charging_algorithm.t_Rec_Temp_Charging.m_RT_CCM
#define D_Rec_RT_CCH               flashdata.t_Charging_algorithm.t_Rec_Temp_Charging.m_RT_CCH

typedef struct{
int16_t               m_Poly_T1;
uint16_t               m_Poly_T1A;
uint16_t               m_Poly_T2;
uint16_t               m_Poly_T2A;
uint16_t               m_Poly_T3;
uint16_t               m_Poly_T3A;
uint16_t               m_Poly_T3B;
uint16_t               m_Poly_T3C;
uint16_t               m_Poly_T4;
uint16_t               m_Poly_T5;
uint16_t               m_I1;
uint16_t               m_I2;
uint16_t               m_I3;
uint16_t               m_I4;
uint16_t               m_I5;
uint16_t               m_I6;
uint16_t               m_I7;
uint16_t               m_I8;
uint16_t               m_I9;
uint16_t               m_I10;
uint16_t               m_I11;
uint16_t               m_Poly_V1;
uint16_t               m_Poly_V2;
uint16_t               m_Poly_V3;
uint16_t               m_Poly_V4;
uint16_t               m_Poly_V5;
uint16_t               m_Poly_hys_Jt;
uint16_t               m_Poly_Code_Tapper_Current;
uint16_t               m_Poly_Step_Current_Delta;
uint16_t               m_Poly_Step_Current_Time;
uint16_t               m_Poly_Voltage_Delta;
uint16_t               m_Poly_Reset_Temperature;
uint16_t               m_Poly_Reset_voltage;
}T_Poly;

#define D_Poly_T1               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T1
#define D_Poly_T1A               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T1A
#define D_Poly_T2               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T2
#define D_Poly_T2A               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T2A
#define D_Poly_T3               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T3
#define D_Poly_T3A               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T3A
#define D_Poly_T3B               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T3B
#define D_Poly_T3C               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T3C
#define D_Poly_T4               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T4
#define D_Poly_T5               flashdata.t_Charging_algorithm.t_Poly.m_Poly_T5
#define D_Poly_I1               flashdata.t_Charging_algorithm.t_Poly.m_I1
#define D_Poly_I2               flashdata.t_Charging_algorithm.t_Poly.m_I2
#define D_Poly_I3               flashdata.t_Charging_algorithm.t_Poly.m_I3
#define D_Poly_I4               flashdata.t_Charging_algorithm.t_Poly.m_I4
#define D_Poly_I5               flashdata.t_Charging_algorithm.t_Poly.m_I5
#define D_Poly_I6               flashdata.t_Charging_algorithm.t_Poly.m_I6
#define D_Poly_I7               flashdata.t_Charging_algorithm.t_Poly.m_I7
#define D_Poly_I8               flashdata.t_Charging_algorithm.t_Poly.m_I8
#define D_Poly_I9               flashdata.t_Charging_algorithm.t_Poly.m_I9
#define D_Poly_I10               flashdata.t_Charging_algorithm.t_Poly.m_I10
#define D_Poly_I11               flashdata.t_Charging_algorithm.t_Poly.m_I11
#define D_Poly_V1               flashdata.t_Charging_algorithm.t_Poly.m_Poly_V1
#define D_Poly_V2               flashdata.t_Charging_algorithm.t_Poly.m_Poly_V2
#define D_Poly_V3               flashdata.t_Charging_algorithm.t_Poly.m_Poly_V3
#define D_Poly_V4               flashdata.t_Charging_algorithm.t_Poly.m_Poly_V4
#define D_Poly_V5               flashdata.t_Charging_algorithm.t_Poly.m_Poly_V5
#define D_Poly_hys_Jt               flashdata.t_Charging_algorithm.t_Poly.m_Poly_hys_Jt
#define D_Poly_Code_Tapper_Current               flashdata.t_Charging_algorithm.t_Poly.m_Poly_Code_Tapper_Current
#define D_Poly_Step_Current_Delta               flashdata.t_Charging_algorithm.t_Poly.m_Poly_Step_Current_Delta
#define D_Poly_Step_Current_Time               flashdata.t_Charging_algorithm.t_Poly.m_Poly_Step_Current_Time
#define D_Poly_Voltage_Delta               flashdata.t_Charging_algorithm.t_Poly.m_Poly_Voltage_Delta
#define D_Poly_Reset_Temperature               flashdata.t_Charging_algorithm.t_Poly.m_Poly_Reset_Temperature
#define D_Poly_Reset_voltage               flashdata.t_Charging_algorithm.t_Poly.m_Poly_Reset_voltage

typedef struct{
uint16_t               m_Smart_Chg_CV_Step1_Voltage;
uint16_t               m_Smart_Chg_CV_Step2_Voltage;
uint16_t               m_Smart_Chg_Max_Cell_Voltage;
uint16_t               m_Smart_Chg_Volt_Reset;
uint16_t               m_Smart_Chg_Min_CC;
uint16_t               m_Smart_Chg_Step_Current_Step;
uint16_t               m_Smart_Chg_Normal_Charge_Current;
uint16_t               m_Smart_Chg_judgement_time;
}T_Smart_charge;

#define D_Smart_Chg_CV_Step1_Voltage               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_CV_Step1_Voltage
#define D_Smart_Chg_CV_Step2_Voltage               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_CV_Step2_Voltage
#define D_Smart_Chg_Max_Cell_Voltage               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_Max_Cell_Voltage
#define D_Smart_Chg_Volt_Reset               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_Volt_Reset
#define D_Smart_Chg_Min_CC               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_Min_CC
#define D_Smart_Chg_Step_Current_Step               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_Step_Current_Step
#define D_Smart_Chg_Normal_Charge_Current               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_Normal_Charge_Current
#define D_Smart_Chg_judgement_time               flashdata.t_Charging_algorithm.t_Smart_charge.m_Smart_Chg_judgement_time

typedef struct{
uint16_t               m_Charge_Term_Voltage;
uint16_t               m_Charge_Term_Taper_Current;
uint16_t               m_Fullcharge_judgement_time;
uint16_t               m_Charge_Term_Taper_Capacity;
}T_Termination_Config;

#define D_Termination_Charge_Term_Voltage               flashdata.t_Charging_algorithm.t_Termination_Config.m_Charge_Term_Voltage
#define D_Termination_Charge_Term_Taper_Current               flashdata.t_Charging_algorithm.t_Termination_Config.m_Charge_Term_Taper_Current
#define D_Termination_Fullcharge_judgement_time               flashdata.t_Charging_algorithm.t_Termination_Config.m_Fullcharge_judgement_time
#define D_Termination_Charge_Term_Taper_Capacity               flashdata.t_Charging_algorithm.t_Termination_Config.m_Charge_Term_Taper_Capacity

typedef struct{
uint16_t               m_Current;
}T_PreCharging;

#define D_PreCharging_Current               flashdata.t_Charging_algorithm.t_PreCharging.m_Current

typedef struct{
int16_t               m_Maintenance_ChargingCurrent;
}T_Maintenance_Charging;

#define D_Maintenance_ChargingCurrent               flashdata.t_Charging_algorithm.t_Maintenance_Charging.m_Maintenance_ChargingCurrent

typedef struct{
int16_t               m_Charge_Inhibit_Current;
}T_Charge_Inhibit;

#define D_Charge_Inhibit_Current               flashdata.t_Charging_algorithm.t_Charge_Inhibit.m_Charge_Inhibit_Current

typedef struct{
uint8_t               m_ERETM_Status;
}T_Elevated_Degrade;

#define D_Elevated_ERETM_Status               flashdata.t_Charging_algorithm.t_Elevated_Degrade.m_ERETM_Status

typedef struct{
uint16_t               m_TemperatureTbl0;
uint16_t               m_TemperatureTbl1;
uint16_t               m_TemperatureTbl2;
uint16_t               m_TemperatureTbl3;
int16_t               m_ChargeTaperCurrentTbl0;
int16_t               m_ChargeTaperCurrentTbl1;
int16_t               m_ChargeTaperCurrentTbl2;
uint16_t               m_ChargeCellVoltageOffsetTbl0;
uint16_t               m_ChargeCellVoltageOffsetTbl1;
uint16_t               m_ChargeCellVoltageOffsetTbl2;
uint16_t               m_CellimbalanceVoltage;
}T_FFC;

#define D_FFC_TemperatureTbl0               flashdata.t_Charging_algorithm.t_FFC.m_TemperatureTbl0
#define D_FFC_TemperatureTbl1               flashdata.t_Charging_algorithm.t_FFC.m_TemperatureTbl1
#define D_FFC_TemperatureTbl2               flashdata.t_Charging_algorithm.t_FFC.m_TemperatureTbl2
#define D_FFC_TemperatureTbl3               flashdata.t_Charging_algorithm.t_FFC.m_TemperatureTbl3
#define D_FFC_ChargeTaperCurrentTbl0               flashdata.t_Charging_algorithm.t_FFC.m_ChargeTaperCurrentTbl0
#define D_FFC_ChargeTaperCurrentTbl1               flashdata.t_Charging_algorithm.t_FFC.m_ChargeTaperCurrentTbl1
#define D_FFC_ChargeTaperCurrentTbl2               flashdata.t_Charging_algorithm.t_FFC.m_ChargeTaperCurrentTbl2
#define D_FFC_ChargeCellVoltageOffsetTbl0               flashdata.t_Charging_algorithm.t_FFC.m_ChargeCellVoltageOffsetTbl0
#define D_FFC_ChargeCellVoltageOffsetTbl1               flashdata.t_Charging_algorithm.t_FFC.m_ChargeCellVoltageOffsetTbl1
#define D_FFC_ChargeCellVoltageOffsetTbl2               flashdata.t_Charging_algorithm.t_FFC.m_ChargeCellVoltageOffsetTbl2
#define D_FFC_CellimbalanceVoltage               flashdata.t_Charging_algorithm.t_FFC.m_CellimbalanceVoltage

typedef struct{
uint16_t               m_Shutdown_Voltage;
uint16_t               m_Shutdown_Time;
uint8_t               m_IO_Shutdown_Delay;
uint8_t               m_IO_Shutdown_Timeout;
uint16_t               m_Charger_Present_Threshold;
uint8_t               m_MAC_FET_Off_Time;
uint8_t               m_MAC_Shutdown_Delay;
uint16_t               m_Auto_Ship_time;
}T_Shutdown;

#define D_Shutdown_Voltage               flashdata.t_Power.t_Shutdown.m_Shutdown_Voltage
#define D_Shutdown_Time               flashdata.t_Power.t_Shutdown.m_Shutdown_Time
#define D_Shutdown_IO_Shutdown_Delay               flashdata.t_Power.t_Shutdown.m_IO_Shutdown_Delay
#define D_Shutdown_IO_Shutdown_Timeout               flashdata.t_Power.t_Shutdown.m_IO_Shutdown_Timeout
#define D_Shutdown_Charger_Present_Threshold               flashdata.t_Power.t_Shutdown.m_Charger_Present_Threshold
#define D_Shutdown_MAC_FET_Off_Time               flashdata.t_Power.t_Shutdown.m_MAC_FET_Off_Time
#define D_Shutdown_MAC_Shutdown_Delay               flashdata.t_Power.t_Shutdown.m_MAC_Shutdown_Delay
#define D_Shutdown_Auto_Ship_time               flashdata.t_Power.t_Shutdown.m_Auto_Ship_time

typedef struct{
int16_t               m_Sleep_Current;
uint8_t               m_Bus_TimeOut;
uint8_t               m_Voltage_Time;
uint8_t               m_Current_Time;
U_Wake_Comparator               u_Wake_Comparator;
}T_Sleep;

#define D_Sleep_Current               flashdata.t_Power.t_Sleep.m_Sleep_Current
#define D_Sleep_Bus_TimeOut               flashdata.t_Power.t_Sleep.m_Bus_TimeOut
#define D_Sleep_Voltage_Time               flashdata.t_Power.t_Sleep.m_Voltage_Time
#define D_Sleep_Current_Time               flashdata.t_Power.t_Sleep.m_Current_Time

typedef struct{
uint8_t               m_FET_Off_Storage_Time;
uint8_t               m_FET_Off_Min_RSOC;
}T_Ship_Mode;

#define D_Ship_FET_Off_Storage_Time               flashdata.t_Power.t_Ship_Mode.m_FET_Off_Storage_Time
#define D_Ship_FET_Off_Min_RSOC               flashdata.t_Power.t_Ship_Mode.m_FET_Off_Min_RSOC

typedef struct{
uint16_t               m_Threshold;
uint8_t               m_Delay;
uint16_t               m_Recovery;
uint16_t               m_CUV_Charger_Present_Threshold;
}T_CUV_Cell_Undervoltage;

#define D_CUV_Threshold               flashdata.t_Protections.t_CUV_Cell_Undervoltage.m_Threshold
#define D_CUV_Delay               flashdata.t_Protections.t_CUV_Cell_Undervoltage.m_Delay
#define D_CUV_Recovery               flashdata.t_Protections.t_CUV_Cell_Undervoltage.m_Recovery
#define D_CUV_Charger_Present_Threshold               flashdata.t_Protections.t_CUV_Cell_Undervoltage.m_CUV_Charger_Present_Threshold

typedef struct{
uint16_t               m_Threshold;
uint8_t               m_Delay;
uint16_t               m_Recovery;
uint8_t               m_CellResistance;
uint16_t               m_CUVC_Charger_Present_Threshold;
}T_CUVC;

#define D_CUVC_Threshold               flashdata.t_Protections.t_CUVC.m_Threshold
#define D_CUVC_Delay               flashdata.t_Protections.t_CUVC.m_Delay
#define D_CUVC_Recovery               flashdata.t_Protections.t_CUVC.m_Recovery
#define D_CUVC_CellResistance               flashdata.t_Protections.t_CUVC.m_CellResistance
#define D_CUVC_Charger_Present_Threshold               flashdata.t_Protections.t_CUVC.m_CUVC_Charger_Present_Threshold

typedef struct{
uint16_t               m_Threshold_Low_Temp;
uint16_t               m_Threshold_Standard_Temp_Low;
uint16_t               m_Threshold_Standard_Temp_High;
uint16_t               m_Threshold_High_Temp;
uint16_t               m_Threshold_Rec_Temp;
uint8_t               m_COV_Delay;
uint16_t               m_Recovery_Low_Temp;
uint16_t               m_Recovery_Standard_Temp_Low;
uint16_t               m_Recovery_Standard_Temp_High;
uint16_t               m_Recovery_High_Temp;
uint16_t               m_Recovery_Rec_Temp;
uint8_t               m_Cell_Overvoltage_Latch_Limit;
uint8_t               m_Cell_Overvoltage_Counter_Decrement_Delay;
uint8_t               m_Reset;
}T_COV_Cell_Overvoltage;

#define D_COV_Threshold_Low_Temp               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Threshold_Low_Temp
#define D_COV_Threshold_Standard_Temp_Low               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Threshold_Standard_Temp_Low
#define D_COV_Threshold_Standard_Temp_High               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Threshold_Standard_Temp_High
#define D_COV_Threshold_High_Temp               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Threshold_High_Temp
#define D_COV_Threshold_Rec_Temp               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Threshold_Rec_Temp
#define D_COV_Delay               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_COV_Delay
#define D_COV_Recovery_Low_Temp               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Recovery_Low_Temp
#define D_COV_Recovery_Standard_Temp_Low               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Recovery_Standard_Temp_Low
#define D_COV_Recovery_Standard_Temp_High               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Recovery_Standard_Temp_High
#define D_COV_Recovery_High_Temp               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Recovery_High_Temp
#define D_COV_Recovery_Rec_Temp               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Recovery_Rec_Temp
#define D_COV_Cell_Overvoltage_Latch_Limit               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Cell_Overvoltage_Latch_Limit
#define D_COV_Cell_Overvoltage_Counter_Decrement_Delay               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Cell_Overvoltage_Counter_Decrement_Delay
#define D_COV_Reset               flashdata.t_Protections.t_COV_Cell_Overvoltage.m_Reset

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_OCC1_Overcurrent_In_Charge_1;

#define D_OCC1_Threshold               flashdata.t_Protections.t_OCC1_Overcurrent_In_Charge_1.m_Threshold
#define D_OCC1_Delay               flashdata.t_Protections.t_OCC1_Overcurrent_In_Charge_1.m_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_OCC2_Overcurrent_In_Charge_2;

#define D_OCC2_Threshold               flashdata.t_Protections.t_OCC2_Overcurrent_In_Charge_2.m_Threshold
#define D_OCC2_Delay               flashdata.t_Protections.t_OCC2_Overcurrent_In_Charge_2.m_Delay

typedef struct{
int16_t               m_Recovery_Threshold;
uint8_t               m_Recovery_Delay;
}T_OCC_Overcurrent_In_Charge_Recovery;

#define D_OCC_Recovery_Threshold               flashdata.t_Protections.t_OCC_Overcurrent_In_Charge_Recovery.m_Recovery_Threshold
#define D_OCC_Recovery_Delay               flashdata.t_Protections.t_OCC_Overcurrent_In_Charge_Recovery.m_Recovery_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_OCD1_Overcurrent_In_Discharge_1;

#define D_OCD1_Threshold               flashdata.t_Protections.t_OCD1_Overcurrent_In_Discharge_1.m_Threshold
#define D_OCD1_Delay               flashdata.t_Protections.t_OCD1_Overcurrent_In_Discharge_1.m_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_OCD2_Overcurrent_In_Discharge_2;

#define D_OCD2_Threshold               flashdata.t_Protections.t_OCD2_Overcurrent_In_Discharge_2.m_Threshold
#define D_OCD2_Delay               flashdata.t_Protections.t_OCD2_Overcurrent_In_Discharge_2.m_Delay

typedef struct{
int16_t               m_Recovery_Threshold;
uint8_t               m_Recovery_Delay;
}T_OCD_Overcurrent_In_Discharge;

#define D_OCD_Recovery_Threshold               flashdata.t_Protections.t_OCD_Overcurrent_In_Discharge.m_Recovery_Threshold
#define D_OCD_Recovery_Delay               flashdata.t_Protections.t_OCD_Overcurrent_In_Discharge.m_Recovery_Delay

typedef struct{
uint8_t               m_Latch_Limit;
uint8_t               m_Counter_Dec_Delay;
uint8_t               m_Reset;
}T_OCD_Overcurrent_In_Discharge_Latch;

#define D_OCD_Latch_Limit               flashdata.t_Protections.t_OCD_Overcurrent_In_Discharge_Latch.m_Latch_Limit
#define D_OCD_Counter_Dec_Delay               flashdata.t_Protections.t_OCD_Overcurrent_In_Discharge_Latch.m_Counter_Dec_Delay
#define D_OCD_Reset               flashdata.t_Protections.t_OCD_Overcurrent_In_Discharge_Latch.m_Reset

typedef struct{
uint8_t               m_Latch_Limit;
uint8_t               m_Counter_Dec_Delay;
uint8_t               m_Recovery;
uint8_t               m_Reset;
uint8_t               m_Threshold;
}T_AOLD_Overload_in_Discharge;

#define D_AOLD_Latch_Limit               flashdata.t_Protections.t_AOLD_Overload_in_Discharge.m_Latch_Limit
#define D_AOLD_Counter_Dec_Delay               flashdata.t_Protections.t_AOLD_Overload_in_Discharge.m_Counter_Dec_Delay
#define D_AOLD_Recovery               flashdata.t_Protections.t_AOLD_Overload_in_Discharge.m_Recovery
#define D_AOLD_Reset               flashdata.t_Protections.t_AOLD_Overload_in_Discharge.m_Reset
#define D_AOLD_Threshold               flashdata.t_Protections.t_AOLD_Overload_in_Discharge.m_Threshold

typedef struct{
uint8_t               m_Latch_Limit;
uint8_t               m_Counter_Dec_Delay;
uint8_t               m_Recovery;
uint8_t               m_Reset;
uint8_t               m_Threshold;
}T_ASCC_Short_Circuit_In_Charge;

#define D_ASCC_Latch_Limit               flashdata.t_Protections.t_ASCC_Short_Circuit_In_Charge.m_Latch_Limit
#define D_ASCC_Counter_Dec_Delay               flashdata.t_Protections.t_ASCC_Short_Circuit_In_Charge.m_Counter_Dec_Delay
#define D_ASCC_Recovery               flashdata.t_Protections.t_ASCC_Short_Circuit_In_Charge.m_Recovery
#define D_ASCC_Reset               flashdata.t_Protections.t_ASCC_Short_Circuit_In_Charge.m_Reset
#define D_ASCC_Threshold               flashdata.t_Protections.t_ASCC_Short_Circuit_In_Charge.m_Threshold

typedef struct{
uint8_t               m_Latch_Limit;
uint8_t               m_Counter_Dec_Delay;
uint8_t               m_Recovery;
uint8_t               m_Reset;
uint8_t               m_Threshold1;
uint8_t               m_Threshold2;
}T_ASCD_Short_Circuit_in_Discharge;

#define D_ASCD_Latch_Limit               flashdata.t_Protections.t_ASCD_Short_Circuit_in_Discharge.m_Latch_Limit
#define D_ASCD_Counter_Dec_Delay               flashdata.t_Protections.t_ASCD_Short_Circuit_in_Discharge.m_Counter_Dec_Delay
#define D_ASCD_Recovery               flashdata.t_Protections.t_ASCD_Short_Circuit_in_Discharge.m_Recovery
#define D_ASCD_Reset               flashdata.t_Protections.t_ASCD_Short_Circuit_in_Discharge.m_Reset
#define D_ASCD_Threshold1               flashdata.t_Protections.t_ASCD_Short_Circuit_in_Discharge.m_Threshold1
#define D_ASCD_Threshold2               flashdata.t_Protections.t_ASCD_Short_Circuit_in_Discharge.m_Threshold2

typedef struct{
uint16_t               m_Threshold;
uint8_t               m_Delay;
int16_t               m_Recovery;
}T_OTC_Overtemperature_in_Charge;

#define D_OTC_Threshold               flashdata.t_Protections.t_OTC_Overtemperature_in_Charge.m_Threshold
#define D_OTC_Delay               flashdata.t_Protections.t_OTC_Overtemperature_in_Charge.m_Delay
#define D_OTC_Recovery               flashdata.t_Protections.t_OTC_Overtemperature_in_Charge.m_Recovery

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
int16_t               m_Recovery;
}T_OTD_Overtemperature_in_Discharge;

#define D_OTD_Threshold               flashdata.t_Protections.t_OTD_Overtemperature_in_Discharge.m_Threshold
#define D_OTD_Delay               flashdata.t_Protections.t_OTD_Overtemperature_in_Discharge.m_Delay
#define D_OTD_Recovery               flashdata.t_Protections.t_OTD_Overtemperature_in_Discharge.m_Recovery

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
int16_t               m_Recovery;
}T_OTF_Overtemperature_FET;

#define D_OTF_Threshold               flashdata.t_Protections.t_OTF_Overtemperature_FET.m_Threshold
#define D_OTF_Delay               flashdata.t_Protections.t_OTF_Overtemperature_FET.m_Delay
#define D_OTF_Recovery               flashdata.t_Protections.t_OTF_Overtemperature_FET.m_Recovery

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
int16_t               m_Recovery;
}T_UTC_Undertemperature_in_Charge;

#define D_UTC_Threshold               flashdata.t_Protections.t_UTC_Undertemperature_in_Charge.m_Threshold
#define D_UTC_Delay               flashdata.t_Protections.t_UTC_Undertemperature_in_Charge.m_Delay
#define D_UTC_Recovery               flashdata.t_Protections.t_UTC_Undertemperature_in_Charge.m_Recovery

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
int16_t               m_Recovery;
}T_UTD_Undertemperature_in_Discharge;

#define D_UTD_Threshold               flashdata.t_Protections.t_UTD_Undertemperature_in_Discharge.m_Threshold
#define D_UTD_Delay               flashdata.t_Protections.t_UTD_Undertemperature_in_Discharge.m_Delay
#define D_UTD_Recovery               flashdata.t_Protections.t_UTD_Undertemperature_in_Discharge.m_Recovery

typedef struct{
uint8_t               m_Delay;
}T_HWD_Host_Watchdog;

#define D_HWD_Delay               flashdata.t_Protections.t_HWD_Host_Watchdog.m_Delay

typedef struct{
int16_t               m_Charge_Threshold;
int16_t               m_Suspend_Threshold;
uint16_t               m_Delay;
int16_t               m_Reset;
}T_PTO_PRECHARGE_Mode_Time_Out;

#define D_PTO_Charge_Threshold               flashdata.t_Protections.t_PTO_PRECHARGE_Mode_Time_Out.m_Charge_Threshold
#define D_PTO_Suspend_Threshold               flashdata.t_Protections.t_PTO_PRECHARGE_Mode_Time_Out.m_Suspend_Threshold
#define D_PTO_Delay               flashdata.t_Protections.t_PTO_PRECHARGE_Mode_Time_Out.m_Delay
#define D_PTO_Reset               flashdata.t_Protections.t_PTO_PRECHARGE_Mode_Time_Out.m_Reset

typedef struct{
int16_t               m_Charge_Threshold;
int16_t               m_Suspend_Threshold;
uint16_t               m_Delay;
int16_t               m_Reset;
}T_CTO_Fast_Charge_Mode_Time_Out;

#define D_CTO_Charge_Threshold               flashdata.t_Protections.t_CTO_Fast_Charge_Mode_Time_Out.m_Charge_Threshold
#define D_CTO_Suspend_Threshold               flashdata.t_Protections.t_CTO_Fast_Charge_Mode_Time_Out.m_Suspend_Threshold
#define D_CTO_Delay               flashdata.t_Protections.t_CTO_Fast_Charge_Mode_Time_Out.m_Delay
#define D_CTO_Reset               flashdata.t_Protections.t_CTO_Fast_Charge_Mode_Time_Out.m_Reset

typedef struct{
int16_t               m_Threshold;
int16_t               m_Recovery;
uint8_t               m_RSOC_Recovery;
}T_OC_Overcharge;

#define D_OC_Threshold               flashdata.t_Protections.t_OC_Overcharge.m_Threshold
#define D_OC_Recovery               flashdata.t_Protections.t_OC_Overcharge.m_Recovery
#define D_OC_RSOC_Recovery               flashdata.t_Protections.t_OC_Overcharge.m_RSOC_Recovery

typedef struct{
uint16_t               m_Threshold;
uint8_t               m_Delay;
uint16_t               m_Recovery;
}T_CHGV_ChargingVoltage;

#define D_CHGV_Threshold               flashdata.t_Protections.t_CHGV_ChargingVoltage.m_Threshold
#define D_CHGV_Delay               flashdata.t_Protections.t_CHGV_ChargingVoltage.m_Delay
#define D_CHGV_Recovery               flashdata.t_Protections.t_CHGV_ChargingVoltage.m_Recovery

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
int16_t               m_Recovery_Threshold;
uint8_t               m_Recovery_Delay;
}T_CHGC_ChargingCurrent;

#define D_CHGC_Threshold               flashdata.t_Protections.t_CHGC_ChargingCurrent.m_Threshold
#define D_CHGC_Delay               flashdata.t_Protections.t_CHGC_ChargingCurrent.m_Delay
#define D_CHGC_Recovery_Threshold               flashdata.t_Protections.t_CHGC_ChargingCurrent.m_Recovery_Threshold
#define D_CHGC_Recovery_Delay               flashdata.t_Protections.t_CHGC_ChargingCurrent.m_Recovery_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
int16_t               m_Recovery_Threshold;
uint8_t               m_Recovery_Delay;
}T_PCHGC_Pre_ChargingCurrent;

#define D_PCHGC_Threshold               flashdata.t_Protections.t_PCHGC_Pre_ChargingCurrent.m_Threshold
#define D_PCHGC_Delay               flashdata.t_Protections.t_PCHGC_Pre_ChargingCurrent.m_Delay
#define D_PCHGC_Recovery_Threshold               flashdata.t_Protections.t_PCHGC_Pre_ChargingCurrent.m_Recovery_Threshold
#define D_PCHGC_Recovery_Delay               flashdata.t_Protections.t_PCHGC_Pre_ChargingCurrent.m_Recovery_Delay

typedef struct{
uint16_t               m_Threshold;
uint8_t               m_Delay;
}T_SUV_Safety_Cell_Undervoltage;

#define D_SUV_Threshold               flashdata.t_Permanent_Fail.t_SUV_Safety_Cell_Undervoltage.m_Threshold
#define D_SUV_Delay               flashdata.t_Permanent_Fail.t_SUV_Safety_Cell_Undervoltage.m_Delay

typedef struct{
uint16_t               m_Threshold;
uint8_t               m_Delay;
}T_SOV_Safety_Cell_Overvoltage;

#define D_SOV_Threshold               flashdata.t_Permanent_Fail.t_SOV_Safety_Cell_Overvoltage.m_Threshold
#define D_SOV_Delay               flashdata.t_Permanent_Fail.t_SOV_Safety_Cell_Overvoltage.m_Delay

typedef struct{
uint16_t               m_Threshold;
uint8_t               m_Delay;
}T_SOCC_Safety_Overcurrent_in_Charge;

#define D_SOCC_Threshold               flashdata.t_Permanent_Fail.t_SOCC_Safety_Overcurrent_in_Charge.m_Threshold
#define D_SOCC_Delay               flashdata.t_Permanent_Fail.t_SOCC_Safety_Overcurrent_in_Charge.m_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_SOCD_Safety_Overcurrent_in_Discharge;

#define D_SOCD_Threshold               flashdata.t_Permanent_Fail.t_SOCD_Safety_Overcurrent_in_Discharge.m_Threshold
#define D_SOCD_Delay               flashdata.t_Permanent_Fail.t_SOCD_Safety_Overcurrent_in_Discharge.m_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_SOT_Overtemperature_Cell;

#define D_SOT_Threshold               flashdata.t_Permanent_Fail.t_SOT_Overtemperature_Cell.m_Threshold
#define D_SOT_Delay               flashdata.t_Permanent_Fail.t_SOT_Overtemperature_Cell.m_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_SOTF_Overtemperature_FET;

#define D_SOTF_Threshold               flashdata.t_Permanent_Fail.t_SOTF_Overtemperature_FET.m_Threshold
#define D_SOTF_Delay               flashdata.t_Permanent_Fail.t_SOTF_Overtemperature_FET.m_Delay

typedef struct{
uint16_t               m_Check_Voltage;
int16_t               m_Check_Current;
int16_t               m_Delta_Threshold;
uint8_t               m_Delay;
uint16_t               m_Duration;
}T_VIMR_Voltage_Imbalance_At_Rest;

#define D_VIMR_Check_Voltage               flashdata.t_Permanent_Fail.t_VIMR_Voltage_Imbalance_At_Rest.m_Check_Voltage
#define D_VIMR_Check_Current               flashdata.t_Permanent_Fail.t_VIMR_Voltage_Imbalance_At_Rest.m_Check_Current
#define D_VIMR_Delta_Threshold               flashdata.t_Permanent_Fail.t_VIMR_Voltage_Imbalance_At_Rest.m_Delta_Threshold
#define D_VIMR_Delay               flashdata.t_Permanent_Fail.t_VIMR_Voltage_Imbalance_At_Rest.m_Delay
#define D_VIMR_Duration               flashdata.t_Permanent_Fail.t_VIMR_Voltage_Imbalance_At_Rest.m_Duration

typedef struct{
uint16_t               m_Check_Voltage;
int16_t               m_Check_Current;
uint16_t               m_Delta_Threshold;
uint8_t               m_Delay;
}T_VIMA_Voltage_Imbalance_Active;

#define D_VIMA_Check_Voltage               flashdata.t_Permanent_Fail.t_VIMA_Voltage_Imbalance_Active.m_Check_Voltage
#define D_VIMA_Check_Current               flashdata.t_Permanent_Fail.t_VIMA_Voltage_Imbalance_Active.m_Check_Current
#define D_VIMA_Delta_Threshold               flashdata.t_Permanent_Fail.t_VIMA_Voltage_Imbalance_Active.m_Delta_Threshold
#define D_VIMA_Delay               flashdata.t_Permanent_Fail.t_VIMA_Voltage_Imbalance_Active.m_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
uint16_t               m_VoltageDifference;
uint16_t               m_Temperature_difference;
}T_CFET_CHG_FET_Failure;

#define D_CFET_Threshold               flashdata.t_Permanent_Fail.t_CFET_CHG_FET_Failure.m_Threshold
#define D_CFET_Delay               flashdata.t_Permanent_Fail.t_CFET_CHG_FET_Failure.m_Delay
#define D_CFET_VoltageDifference               flashdata.t_Permanent_Fail.t_CFET_CHG_FET_Failure.m_VoltageDifference
#define D_CFET_Temperature_difference               flashdata.t_Permanent_Fail.t_CFET_CHG_FET_Failure.m_Temperature_difference

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_DFET_DFET_Failure;

#define D_DFET_Threshold               flashdata.t_Permanent_Fail.t_DFET_DFET_Failure.m_Threshold
#define D_DFET_Delay               flashdata.t_Permanent_Fail.t_DFET_DFET_Failure.m_Delay

typedef struct{
int16_t               m_Threshold;
uint8_t               m_Delay;
}T_FUSE_FUSE_Failure;

#define D_FUSE_Threshold               flashdata.t_Permanent_Fail.t_FUSE_FUSE_Failure.m_Threshold
#define D_FUSE_Delay               flashdata.t_Permanent_Fail.t_FUSE_FUSE_Failure.m_Delay

typedef struct{
uint8_t               m_2LVL;
}T_2LVL_2nd_Level_OV;

#define D_2LVL               flashdata.t_Permanent_Fail.t_2LVL_2nd_Level_OV.m_2LVL

typedef struct{
uint16_t               m_Change_Voltage;
uint16_t               m_Min_Voltage;
int16_t               m_Max_Temp;
uint8_t               m_Delay;
uint16_t               m_Cell_Impedance;
uint16_t               m_K;
}T_TCO;

#define D_TCO_Change_Voltage               flashdata.t_Permanent_Fail.t_TCO.m_Change_Voltage
#define D_TCO_Min_Voltage               flashdata.t_Permanent_Fail.t_TCO.m_Min_Voltage
#define D_TCO_Max_Temp               flashdata.t_Permanent_Fail.t_TCO.m_Max_Temp
#define D_TCO_Delay               flashdata.t_Permanent_Fail.t_TCO.m_Delay
#define D_TCO_Cell_Impedance               flashdata.t_Permanent_Fail.t_TCO.m_Cell_Impedance
#define D_TCO_K               flashdata.t_Permanent_Fail.t_TCO.m_K

typedef struct{
uint16_t               m_Manufacturer_Date;
uint16_t               m_Serial_Number;
uint8_t               m_Manufacturer_Name[21];
uint8_t               m_Device_Name[21];
uint8_t               m_Device_Chemistry[5];
uint16_t               m_Remaining_Ah_Capacity_Alarm;
uint16_t               m_Remaining_Wh_Capacity_Alarm;
uint16_t               m_Remaining_Time_Alarm;
U_Initial_Battery_Mode               u_Initial_Battery_Mode;
}T_Data;

#define D_Data_Manufacturer_Date               flashdata.t_SBS_Configuration.t_Data.m_Manufacturer_Date
#define D_Data_Serial_Number               flashdata.t_SBS_Configuration.t_Data.m_Serial_Number
#define D_Data_Manufacturer_Name               flashdata.t_SBS_Configuration.t_Data.m_Manufacturer_Name
#define D_Data_Device_Name               flashdata.t_SBS_Configuration.t_Data.m_Device_Name
#define D_Data_Device_Chemistry               flashdata.t_SBS_Configuration.t_Data.m_Device_Chemistry
#define D_Data_Remaining_Ah_Capacity_Alarm               flashdata.t_SBS_Configuration.t_Data.m_Remaining_Ah_Capacity_Alarm
#define D_Data_Remaining_Wh_Capacity_Alarm               flashdata.t_SBS_Configuration.t_Data.m_Remaining_Wh_Capacity_Alarm
#define D_Data_Remaining_Time_Alarm               flashdata.t_SBS_Configuration.t_Data.m_Remaining_Time_Alarm

typedef struct{
U_Configuration_Register               u_Configuration_Register;
U_Configuration_2_Register               u_Configuration_2_Register;
U_Configuration_3_Register               u_Configuration_3_Register;
U_Configuration_4_Register               u_Configuration_4_Register;
U_Configuration_5_Register               u_Configuration_5_Register;
U_Configuration_6_Register               u_Configuration_6_Register;
U_Configuration_7_Register               u_Configuration_7_Register;
U_Configuration_8_Register               u_Configuration_8_Register;
}T_ConfigurationEx;


typedef struct{
int16_t               m_Charging_Voltage;
int16_t               m_Fast_Charging_Current;
}T_Normal_Charging;

#define D_Normal_Charging_Voltage               flashdata.t_Lenovo_Data.t_Normal_Charging.m_Charging_Voltage
#define D_Normal_Fast_Charging_Current               flashdata.t_Lenovo_Data.t_Normal_Charging.m_Fast_Charging_Current

typedef struct{
int16_t               m_CCCV_Charging_Voltage;
int16_t               m_CCCV_Charging_Current;
int16_t               m_CCCV_Curr_Taper_Threshold;
int16_t               m_CCCV_Curr_Taper_Voltage;
uint8_t               m_CCCV_Curr_Taper_Window;
}T_CCCV_Charging;

#define D_CCCV_Charging_Voltage               flashdata.t_Lenovo_Data.t_CCCV_Charging.m_CCCV_Charging_Voltage
#define D_CCCV_Charging_Current               flashdata.t_Lenovo_Data.t_CCCV_Charging.m_CCCV_Charging_Current
#define D_CCCV_Curr_Taper_Threshold               flashdata.t_Lenovo_Data.t_CCCV_Charging.m_CCCV_Curr_Taper_Threshold
#define D_CCCV_Curr_Taper_Voltage               flashdata.t_Lenovo_Data.t_CCCV_Charging.m_CCCV_Curr_Taper_Voltage
#define D_CCCV_Curr_Taper_Window               flashdata.t_Lenovo_Data.t_CCCV_Charging.m_CCCV_Curr_Taper_Window

typedef struct{
uint8_t               m_FCC_Deg_Current_Adjust_Cycle;
int16_t               m_FCC_Deg_Minimum_Current;
}T_FCC_Degrade_Chg_Current;

#define D_FCC_Deg_Current_Adjust_Cycle               flashdata.t_Lenovo_Data.t_FCC_Degrade_Chg_Current.m_FCC_Deg_Current_Adjust_Cycle
#define D_FCC_Deg_Minimum_Current               flashdata.t_Lenovo_Data.t_FCC_Degrade_Chg_Current.m_FCC_Deg_Minimum_Current

typedef struct{
int16_t               m_RT_CCV_Max_Cell;
int16_t               m_LS1_CCV_Max_Cell;
int16_t               m_LS1_CCV_Max_Cell_Drop;
int16_t               m_LS2_CCV_Max_Cell;
int16_t               m_CCV_Min_Current;
int16_t               m_RT_CCV_Max_Current_Step;
int16_t               m_LS1_CCV_Max_Current_Step;
int16_t               m_LS2_CCV_Max_Current_Step;
uint8_t               m_CCV_Max_Time_Hysteresis;
}T_CCV_Step_Down_Charging;

#define D_CCV_RT_CCV_Max_Cell               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_RT_CCV_Max_Cell
#define D_CCV_LS1_CCV_Max_Cell               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_LS1_CCV_Max_Cell
#define D_CCV_LS1_CCV_Max_Cell_Drop               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_LS1_CCV_Max_Cell_Drop
#define D_CCV_LS2_CCV_Max_Cell               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_LS2_CCV_Max_Cell
#define D_CCV_Min_Current               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_CCV_Min_Current
#define D_CCV_RT_CCV_Max_Current_Step               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_RT_CCV_Max_Current_Step
#define D_CCV_LS1_CCV_Max_Current_Step               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_LS1_CCV_Max_Current_Step
#define D_CCV_LS2_CCV_Max_Current_Step               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_LS2_CCV_Max_Current_Step
#define D_CCV_Max_Time_Hysteresis               flashdata.t_Lenovo_Data.t_CCV_Step_Down_Charging.m_CCV_Max_Time_Hysteresis

typedef struct{
int16_t               m_Smart_Chg_Voltage_Sw_Over;
int16_t               m_Smart_Chg_Voltage;
int16_t               m_Smart_Chg_Max_Cell;
int16_t               m_Smart_Chg_stp_Reset;
int16_t               m_Smart_Chg_Max_Current_Step;
int16_t               m_Smart_Chg_Normal_Current;
uint8_t               m_Smart_Chg_Max_Time_Hysteresis;
}T_Smart_Charge;

#define D_Smart_Chg_Voltage_Sw_Over               flashdata.t_Lenovo_Data.t_Smart_Charge.m_Smart_Chg_Voltage_Sw_Over
#define D_Smart_Chg_Voltage               flashdata.t_Lenovo_Data.t_Smart_Charge.m_Smart_Chg_Voltage
#define D_Smart_Chg_Max_Cell               flashdata.t_Lenovo_Data.t_Smart_Charge.m_Smart_Chg_Max_Cell
#define D_Smart_Chg_stp_Reset               flashdata.t_Lenovo_Data.t_Smart_Charge.m_Smart_Chg_stp_Reset
#define D_Smart_Chg_Max_Current_Step               flashdata.t_Lenovo_Data.t_Smart_Charge.m_Smart_Chg_Max_Current_Step
#define D_Smart_Chg_Normal_Current               flashdata.t_Lenovo_Data.t_Smart_Charge.m_Smart_Chg_Normal_Current
#define D_Smart_Chg_Max_Time_Hysteresis               flashdata.t_Lenovo_Data.t_Smart_Charge.m_Smart_Chg_Max_Time_Hysteresis

typedef struct{
int16_t               m_Cell_Over_Current;
uint8_t               m_Cell_Delay_Time;
uint8_t               m_Cell_Recovery_Time;
uint8_t               m_Cell_Alarm_Hold_Time;
int16_t               m_Cell_Alarm_Delta_Current;
int16_t               m_Cell_Alarm_Recovery_Current;
uint8_t               m_Cell_Alarm_Delay_Time;
uint8_t               m_Cell_Alarm_Recovery_Time;
int16_t               m_Cell_Knee_Temperature;
int16_t               m_Cell_Final_Current;
int16_t               m_FET_Over_Current;
uint8_t               m_FET_Delay_Time;
uint8_t               m_FET_Recovery_Time;
uint8_t               m_FET_Alarm_Hold_Time;
int16_t               m_FET_Alarm_Delta_Current;
int16_t               m_FET_Alarm_Recovery_Current;
uint8_t               m_FET_Alarm_Delay_Time;
uint8_t               m_FET_Alarm_Recovery_Time;
int16_t               m_FET_Knee_Temperature;
int16_t               m_FET_Final_Current;
}T_Fast_OverCurrent_Protection;

#define D_Fast_Cell_Over_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Over_Current
#define D_Fast_Cell_Delay_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Delay_Time
#define D_Fast_Cell_Recovery_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Recovery_Time
#define D_Fast_Cell_Alarm_Hold_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Alarm_Hold_Time
#define D_Fast_Cell_Alarm_Delta_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Alarm_Delta_Current
#define D_Fast_Cell_Alarm_Recovery_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Alarm_Recovery_Current
#define D_Fast_Cell_Alarm_Delay_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Alarm_Delay_Time
#define D_Fast_Cell_Alarm_Recovery_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Alarm_Recovery_Time
#define D_Fast_Cell_Knee_Temperature               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Knee_Temperature
#define D_Fast_Cell_Final_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_Cell_Final_Current
#define D_Fast_FET_Over_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Over_Current
#define D_Fast_FET_Delay_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Delay_Time
#define D_Fast_FET_Recovery_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Recovery_Time
#define D_Fast_FET_Alarm_Hold_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Alarm_Hold_Time
#define D_Fast_FET_Alarm_Delta_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Alarm_Delta_Current
#define D_Fast_FET_Alarm_Recovery_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Alarm_Recovery_Current
#define D_Fast_FET_Alarm_Delay_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Alarm_Delay_Time
#define D_Fast_FET_Alarm_Recovery_Time               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Alarm_Recovery_Time
#define D_Fast_FET_Knee_Temperature               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Knee_Temperature
#define D_Fast_FET_Final_Current               flashdata.t_Lenovo_Data.t_Fast_OverCurrent_Protection.m_FET_Final_Current

typedef struct{
uint16_t               m_Total_Charged;
uint16_t               m_Total_Time;
uint16_t               m_HiVolt_Time;
uint16_t               m_HiTemp_Time;
uint16_t               m_HiTempVolt_Time;
int16_t               m_Storage_High_Temp;
int16_t               m_Storage_High_Volt;
}T_Lifetime_Storage_Data;

#define D_Lifetime_Total_Charged               flashdata.t_Lenovo_Data.t_Lifetime_Storage_Data.m_Total_Charged
#define D_Lifetime_Total_Time               flashdata.t_Lenovo_Data.t_Lifetime_Storage_Data.m_Total_Time
#define D_Lifetime_HiVolt_Time               flashdata.t_Lenovo_Data.t_Lifetime_Storage_Data.m_HiVolt_Time
#define D_Lifetime_HiTemp_Time               flashdata.t_Lenovo_Data.t_Lifetime_Storage_Data.m_HiTemp_Time
#define D_Lifetime_HiTempVolt_Time               flashdata.t_Lenovo_Data.t_Lifetime_Storage_Data.m_HiTempVolt_Time
#define D_Lifetime_Storage_High_Temp               flashdata.t_Lenovo_Data.t_Lifetime_Storage_Data.m_Storage_High_Temp
#define D_Lifetime_Storage_High_Volt               flashdata.t_Lenovo_Data.t_Lifetime_Storage_Data.m_Storage_High_Volt

typedef struct{
uint8_t               m_Dual_mode_Status;
uint16_t               m_LS1_Start_Cycle_Count;
uint16_t               m_LS1_Start_Time;
uint16_t               m_LS1_Delta_Time;
int16_t               m_LS1_First_Volt_Drop;
int16_t               m_LS2_Second_Volt_Drop;
uint16_t               m_LS2_Start_Cycle_Count;
uint16_t               m_LS2_Start_Hi_Volt_Storage_Time;
uint16_t               m_Age_Per_Month;
int16_t               m_LS2_Second_Drop_FCC_Max;
uint16_t               m_LS1_Delta_Cycle_Count_2;
uint16_t               m_LS1_Delta_Cycle_Count_3;
uint16_t               m_LS1_Delta_Cycle_Count_4;
uint16_t               m_LS1_Delta_Cycle_Count_5;
}T_Dual_Mode;

#define D_Dual_mode_Status               flashdata.t_Lenovo_Data.t_Dual_Mode.m_Dual_mode_Status
#define D_Dual_LS1_Start_Cycle_Count               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_Start_Cycle_Count
#define D_Dual_LS1_Start_Time               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_Start_Time
#define D_Dual_LS1_Delta_Time               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_Delta_Time
#define D_Dual_LS1_First_Volt_Drop               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_First_Volt_Drop
#define D_Dual_LS2_Second_Volt_Drop               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS2_Second_Volt_Drop
#define D_Dual_LS2_Start_Cycle_Count               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS2_Start_Cycle_Count
#define D_Dual_LS2_Start_Hi_Volt_Storage_Time               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS2_Start_Hi_Volt_Storage_Time
#define D_Dual_Age_Per_Month               flashdata.t_Lenovo_Data.t_Dual_Mode.m_Age_Per_Month
#define D_Dual_LS2_Second_Drop_FCC_Max               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS2_Second_Drop_FCC_Max
#define D_Dual_LS1_Delta_Cycle_Count_2               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_Delta_Cycle_Count_2
#define D_Dual_LS1_Delta_Cycle_Count_3               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_Delta_Cycle_Count_3
#define D_Dual_LS1_Delta_Cycle_Count_4               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_Delta_Cycle_Count_4
#define D_Dual_LS1_Delta_Cycle_Count_5               flashdata.t_Lenovo_Data.t_Dual_Mode.m_LS1_Delta_Cycle_Count_5

typedef struct{
uint8_t               m_Cycle_Count;
}T_Set_FCC_Design_Capacity;

#define D_Set_Cycle_Count               flashdata.t_Lenovo_Data.t_Set_FCC_Design_Capacity.m_Cycle_Count

typedef struct{
uint16_t               m_HiVolt_Time_Threshold;
}T_FCC_Report_DesCap_Threshold;

#define D_FCC_HiVolt_Time_Threshold               flashdata.t_Lenovo_Data.t_FCC_Report_DesCap_Threshold.m_HiVolt_Time_Threshold

typedef struct{
uint8_t               m_TSF_Min;
uint16_t               m_TSF_Max;
}T_Dual_Mode_TempVolt_Modifier;

#define D_Dual_TSF_Min               flashdata.t_Lenovo_Data.t_Dual_Mode_TempVolt_Modifier.m_TSF_Min
#define D_Dual_TSF_Max               flashdata.t_Lenovo_Data.t_Dual_Mode_TempVolt_Modifier.m_TSF_Max

typedef struct{
uint16_t               m_Time_Spent_in_RT;
uint16_t               m_Time_Spent_In_LS1_1;
uint16_t               m_Time_Spent_In_LS1_2;
uint16_t               m_Time_Spent_In_LS1_3;
uint16_t               m_Time_Spent_In_LS1_4;
uint16_t               m_Time_Spent_In_LS1_5;
uint16_t               m_Time_Spent_in_LS2;
uint16_t               m_Adjusted_HiVolt_Time;
}T_Lifetime_Timers;

#define D_Lifetime_Time_Spent_in_RT               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Time_Spent_in_RT
#define D_Lifetime_Time_Spent_In_LS1_1               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Time_Spent_In_LS1_1
#define D_Lifetime_Time_Spent_In_LS1_2               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Time_Spent_In_LS1_2
#define D_Lifetime_Time_Spent_In_LS1_3               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Time_Spent_In_LS1_3
#define D_Lifetime_Time_Spent_In_LS1_4               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Time_Spent_In_LS1_4
#define D_Lifetime_Time_Spent_In_LS1_5               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Time_Spent_In_LS1_5
#define D_Lifetime_Time_Spent_in_LS2               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Time_Spent_in_LS2
#define D_Lifetime_Adjusted_HiVolt_Time               flashdata.t_Lenovo_Data.t_Lifetime_Timers.m_Adjusted_HiVolt_Time

typedef struct{
uint8_t               m_VSF_High;
uint8_t               m_VSF_Med;
uint8_t               m_VSF_Low;
uint8_t               m_VSF_Default;
}T_LifeSpan_Volt_Modifier;

#define D_LifeSpan_VSF_High               flashdata.t_Lenovo_Data.t_LifeSpan_Volt_Modifier.m_VSF_High
#define D_LifeSpan_VSF_Med               flashdata.t_Lenovo_Data.t_LifeSpan_Volt_Modifier.m_VSF_Med
#define D_LifeSpan_VSF_Low               flashdata.t_Lenovo_Data.t_LifeSpan_Volt_Modifier.m_VSF_Low
#define D_LifeSpan_VSF_Default               flashdata.t_Lenovo_Data.t_LifeSpan_Volt_Modifier.m_VSF_Default

typedef struct{
uint8_t               m_ManufacturerInfo[32];
}T_Manufacturer_Data;

#define D_Manufacturer_ManufacturerInfo               flashdata.t_System_Data.t_Manufacturer_Data.m_ManufacturerInfo

typedef struct{
uint8_t               m_Manufacturer_Info_B_Length;
uint8_t               m_Manufacturer_Info_B01;
uint8_t               m_Manufacturer_Info_B02;
uint8_t               m_Manufacturer_Info_B03;
uint8_t               m_Manufacturer_Info_B04;
uint8_t               m_Manufacturer_Info_B05;
uint8_t               m_Manufacturer_Info_B06;
uint8_t               m_Manufacturer_Info_B07;
uint8_t               m_Manufacturer_Info_B08;
uint8_t               m_Manufacturer_Info_B09;
uint8_t               m_Manufacturer_Info_B10;
uint8_t               m_Manufacturer_Info_B11;
uint8_t               m_Manufacturer_Info_B12;
uint8_t               m_Manufacturer_Info_B13;
uint8_t               m_Manufacturer_Info_B14;
uint8_t               m_Manufacturer_Info_B15;
uint8_t               m_Manufacturer_Info_B16;
uint8_t               m_Manufacturer_Info_B17;
uint8_t               m_Manufacturer_Info_B18;
uint8_t               m_Manufacturer_Info_B19;
uint8_t               m_Manufacturer_Info_B20;
uint8_t               m_Manufacturer_Info_B21;
uint8_t               m_Manufacturer_Info_B22;
uint8_t               m_Manufacturer_Info_B23;
uint8_t               m_Manufacturer_Info_B24;
uint8_t               m_Manufacturer_Info_B25;
uint8_t               m_Manufacturer_Info_B26;
uint8_t               m_Manufacturer_Info_B27;
uint8_t               m_Manufacturer_Info_B28;
uint8_t               m_Manufacturer_Info_B29;
uint8_t               m_Manufacturer_Info_B30;
uint8_t               m_Manufacturer_Info_B31;
uint8_t               m_Manufacturer_Info_B32;
}T_Manufacturer_Info_B;

#define D_Manufacturer_Info_B_Length               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B_Length
#define D_Manufacturer_Info_B01               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B01
#define D_Manufacturer_Info_B02               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B02
#define D_Manufacturer_Info_B03               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B03
#define D_Manufacturer_Info_B04               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B04
#define D_Manufacturer_Info_B05               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B05
#define D_Manufacturer_Info_B06               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B06
#define D_Manufacturer_Info_B07               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B07
#define D_Manufacturer_Info_B08               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B08
#define D_Manufacturer_Info_B09               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B09
#define D_Manufacturer_Info_B10               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B10
#define D_Manufacturer_Info_B11               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B11
#define D_Manufacturer_Info_B12               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B12
#define D_Manufacturer_Info_B13               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B13
#define D_Manufacturer_Info_B14               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B14
#define D_Manufacturer_Info_B15               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B15
#define D_Manufacturer_Info_B16               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B16
#define D_Manufacturer_Info_B17               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B17
#define D_Manufacturer_Info_B18               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B18
#define D_Manufacturer_Info_B19               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B19
#define D_Manufacturer_Info_B20               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B20
#define D_Manufacturer_Info_B21               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B21
#define D_Manufacturer_Info_B22               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B22
#define D_Manufacturer_Info_B23               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B23
#define D_Manufacturer_Info_B24               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B24
#define D_Manufacturer_Info_B25               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B25
#define D_Manufacturer_Info_B26               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B26
#define D_Manufacturer_Info_B27               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B27
#define D_Manufacturer_Info_B28               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B28
#define D_Manufacturer_Info_B29               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B29
#define D_Manufacturer_Info_B30               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B30
#define D_Manufacturer_Info_B31               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B31
#define D_Manufacturer_Info_B32               flashdata.t_System_Data.t_Manufacturer_Info_B.m_Manufacturer_Info_B32

typedef struct{
uint8_t               m_Manufacturer_Info_C_Length;
uint8_t               m_Manufacturer_Info_C01;
uint8_t               m_Manufacturer_Info_C02;
uint8_t               m_Manufacturer_Info_C03;
uint8_t               m_Manufacturer_Info_C04;
uint8_t               m_Manufacturer_Info_C05;
uint8_t               m_Manufacturer_Info_C06;
uint8_t               m_Manufacturer_Info_C07;
uint8_t               m_Manufacturer_Info_C08;
uint8_t               m_Manufacturer_Info_C09;
uint8_t               m_Manufacturer_Info_C10;
uint8_t               m_Manufacturer_Info_C11;
uint8_t               m_Manufacturer_Info_C12;
uint8_t               m_Manufacturer_Info_C13;
uint8_t               m_Manufacturer_Info_C14;
uint8_t               m_Manufacturer_Info_C15;
uint8_t               m_Manufacturer_Info_C16;
uint8_t               m_Manufacturer_Info_C17;
uint8_t               m_Manufacturer_Info_C18;
uint8_t               m_Manufacturer_Info_C19;
uint8_t               m_Manufacturer_Info_C20;
uint8_t               m_Manufacturer_Info_C21;
uint8_t               m_Manufacturer_Info_C22;
uint8_t               m_Manufacturer_Info_C23;
uint8_t               m_Manufacturer_Info_C24;
uint8_t               m_Manufacturer_Info_C25;
uint8_t               m_Manufacturer_Info_C26;
uint8_t               m_Manufacturer_Info_C27;
uint8_t               m_Manufacturer_Info_C28;
uint8_t               m_Manufacturer_Info_C29;
uint8_t               m_Manufacturer_Info_C30;
uint8_t               m_Manufacturer_Info_C31;
uint8_t               m_Manufacturer_Info_C32;
}T_Manufacturer_Info_C;

#define D_Manufacturer_Info_C_Length               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C_Length
#define D_Manufacturer_Info_C01               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C01
#define D_Manufacturer_Info_C02               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C02
#define D_Manufacturer_Info_C03               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C03
#define D_Manufacturer_Info_C04               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C04
#define D_Manufacturer_Info_C05               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C05
#define D_Manufacturer_Info_C06               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C06
#define D_Manufacturer_Info_C07               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C07
#define D_Manufacturer_Info_C08               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C08
#define D_Manufacturer_Info_C09               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C09
#define D_Manufacturer_Info_C10               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C10
#define D_Manufacturer_Info_C11               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C11
#define D_Manufacturer_Info_C12               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C12
#define D_Manufacturer_Info_C13               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C13
#define D_Manufacturer_Info_C14               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C14
#define D_Manufacturer_Info_C15               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C15
#define D_Manufacturer_Info_C16               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C16
#define D_Manufacturer_Info_C17               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C17
#define D_Manufacturer_Info_C18               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C18
#define D_Manufacturer_Info_C19               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C19
#define D_Manufacturer_Info_C20               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C20
#define D_Manufacturer_Info_C21               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C21
#define D_Manufacturer_Info_C22               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C22
#define D_Manufacturer_Info_C23               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C23
#define D_Manufacturer_Info_C24               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C24
#define D_Manufacturer_Info_C25               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C25
#define D_Manufacturer_Info_C26               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C26
#define D_Manufacturer_Info_C27               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C27
#define D_Manufacturer_Info_C28               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C28
#define D_Manufacturer_Info_C29               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C29
#define D_Manufacturer_Info_C30               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C30
#define D_Manufacturer_Info_C31               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C31
#define D_Manufacturer_Info_C32               flashdata.t_System_Data.t_Manufacturer_Info_C.m_Manufacturer_Info_C32

typedef struct{
uint16_t               m_Static_DF_Signature;
uint16_t               m_Static_Chem_DF_Signature;
uint16_t               m_All_DF_Signature;
}T_Integrity;

#define D_Integrity_Static_DF_Signature               flashdata.t_System_Data.t_Integrity.m_Static_DF_Signature
#define D_Integrity_Static_Chem_DF_Signature               flashdata.t_System_Data.t_Integrity.m_Static_Chem_DF_Signature
#define D_Integrity_All_DF_Signature               flashdata.t_System_Data.t_Integrity.m_All_DF_Signature

typedef struct{
uint8_t               m_US_KEY1;
uint8_t               m_US_KEY2;
uint8_t               m_US_KEY3;
uint8_t               m_US_KEY4;
}T_US;

#define D_US_KEY1               flashdata.t_UNSeal.t_US.m_US_KEY1
#define D_US_KEY2               flashdata.t_UNSeal.t_US.m_US_KEY2
#define D_US_KEY3               flashdata.t_UNSeal.t_US.m_US_KEY3
#define D_US_KEY4               flashdata.t_UNSeal.t_US.m_US_KEY4

typedef struct{
uint8_t               m_FA_KEY1;
uint8_t               m_FA_KEY2;
uint8_t               m_FA_KEY3;
uint8_t               m_FA_KEY4;
}T_FA;

#define D_FA_KEY1               flashdata.t_UNSeal.t_FA.m_FA_KEY1
#define D_FA_KEY2               flashdata.t_UNSeal.t_FA.m_FA_KEY2
#define D_FA_KEY3               flashdata.t_UNSeal.t_FA.m_FA_KEY3
#define D_FA_KEY4               flashdata.t_UNSeal.t_FA.m_FA_KEY4

typedef struct{
U_Control_flag_1               u_Control_flag_1;
}T_Control_flag;


typedef struct{
uint16_t               m_FCC_max_limit;
uint16_t               m_FCC_min_limit;
}T_FCC_Limit;

#define D_FCC_max_limit               flashdata.t_Algorithm_LIMIT.t_FCC_Limit.m_FCC_max_limit
#define D_FCC_min_limit               flashdata.t_Algorithm_LIMIT.t_FCC_Limit.m_FCC_min_limit

typedef struct{
uint16_t               m_5_10CLimit;
uint16_t               m_5CLimt;
}T_Voltage_Limit;

#define D_Voltage_5_10CLimit               flashdata.t_Algorithm_LIMIT.t_Voltage_Limit.m_5_10CLimit
#define D_Voltage_5CLimt               flashdata.t_Algorithm_LIMIT.t_Voltage_Limit.m_5CLimt

typedef struct{
uint8_t               m_TEMPER_LIMIT_T1;
uint8_t               m_TEMPER_LIMIT_T2;
uint16_t               m_TEMPER_LIMIT_CAP1;
uint16_t               m_TEMPER_LIMIT_CAP2;
}T_Temper_Cap_limit;

#define D_Temper_TEMPER_LIMIT_T1               flashdata.t_Algorithm_LIMIT.t_Temper_Cap_limit.m_TEMPER_LIMIT_T1
#define D_Temper_TEMPER_LIMIT_T2               flashdata.t_Algorithm_LIMIT.t_Temper_Cap_limit.m_TEMPER_LIMIT_T2
#define D_Temper_TEMPER_LIMIT_CAP1               flashdata.t_Algorithm_LIMIT.t_Temper_Cap_limit.m_TEMPER_LIMIT_CAP1
#define D_Temper_TEMPER_LIMIT_CAP2               flashdata.t_Algorithm_LIMIT.t_Temper_Cap_limit.m_TEMPER_LIMIT_CAP2

typedef struct{
uint16_t               m_Chg_smooth_Voltage_thresh;
uint16_t               m_Chg_smooth_current_low;
uint16_t               m_Chg_smooth_current_high;
uint16_t               m_Chg_smooth_Cap_Low;
uint16_t               m_Chg_smooth_Cap_Heigh;
}T_COV_Chg_Smooth;

#define D_COV_Chg_smooth_Voltage_thresh               flashdata.t_SMOOTH.t_COV_Chg_Smooth.m_Chg_smooth_Voltage_thresh
#define D_COV_Chg_smooth_current_low               flashdata.t_SMOOTH.t_COV_Chg_Smooth.m_Chg_smooth_current_low
#define D_COV_Chg_smooth_current_high               flashdata.t_SMOOTH.t_COV_Chg_Smooth.m_Chg_smooth_current_high
#define D_COV_Chg_smooth_Cap_Low               flashdata.t_SMOOTH.t_COV_Chg_Smooth.m_Chg_smooth_Cap_Low
#define D_COV_Chg_smooth_Cap_Heigh               flashdata.t_SMOOTH.t_COV_Chg_Smooth.m_Chg_smooth_Cap_Heigh

typedef struct{
uint16_t               m_Chg_smooth_Voltage_thresh;
uint16_t               m_Chg_smooth_current_low;
uint16_t               m_Chg_smooth_current_high;
uint16_t               m_Chg_smooth_current_time;
uint16_t               m_Chg_smooth_current_range;
uint16_t               m_Chg_smooth_cap_time;
}T_VCT_Chg_Smooth;

#define D_VCT_Chg_smooth_Voltage_thresh               flashdata.t_SMOOTH.t_VCT_Chg_Smooth.m_Chg_smooth_Voltage_thresh
#define D_VCT_Chg_smooth_current_low               flashdata.t_SMOOTH.t_VCT_Chg_Smooth.m_Chg_smooth_current_low
#define D_VCT_Chg_smooth_current_high               flashdata.t_SMOOTH.t_VCT_Chg_Smooth.m_Chg_smooth_current_high
#define D_VCT_Chg_smooth_current_time               flashdata.t_SMOOTH.t_VCT_Chg_Smooth.m_Chg_smooth_current_time
#define D_VCT_Chg_smooth_current_range               flashdata.t_SMOOTH.t_VCT_Chg_Smooth.m_Chg_smooth_current_range
#define D_VCT_Chg_smooth_cap_time               flashdata.t_SMOOTH.t_VCT_Chg_Smooth.m_Chg_smooth_cap_time

typedef struct{
uint16_t               m_Dsg_smooth_mul;
uint16_t               m_Dsg_smooth_div;
}T_Dsg_Smooth;

#define D_Dsg_smooth_mul               flashdata.t_SMOOTH.t_Dsg_Smooth.m_Dsg_smooth_mul
#define D_Dsg_smooth_div               flashdata.t_SMOOTH.t_Dsg_Smooth.m_Dsg_smooth_div

typedef struct{
<<<<<<< HEAD
uint16_t               m_Charge_COV_Term_Current;
}T_Charge_COV_FULL_Para;

#define D_Charge_COV_Term_Current               flashdata.t_Charge_COV_FULL.t_Charge_COV_FULL_Para.m_Charge_COV_Term_Current
=======
uint8_t               m_K_UPDATE_FAC;
}T_DSG_UPD_CPL_TEM_FAC;

#define D_DSG_K_UPDATE_FAC               flashdata.t_DSG_UPD_CPL_TEM.t_DSG_UPD_CPL_TEM_FAC.m_K_UPDATE_FAC
>>>>>>> bff363fb8fc99b4a686864b311eee1856fd5ed4f

typedef struct{
T_Calibdata               t_Calibdata;
}T_Calib;


typedef struct{
T_OCV_table               t_OCV_table;
}T_OCV_SOC_table;


typedef struct{
T_RA1               t_RA1;
T_RA2               t_RA2;
}T_SOC_RA;


typedef struct{
T_CP_Para               t_CP_Para;
T_CP_Para_table               t_CP_Para_table;
T_RA_Para_table               t_RA_Para_table;
T_CPL_Table               t_CPL_Table;
T_QCap_Table               t_QCap_Table;
T_Si_Loss_Para               t_Si_Loss_Para;
}T_CP_Correction;


typedef struct{
T_CEDV_Cycle_Compensate               t_CEDV_Cycle_Compensate;
T_FCC               t_FCC;
T_Qmax               t_Qmax;
T_Discharge_termination               t_Discharge_termination;
T_Cell_Balances               t_Cell_Balances;
T_Current_Thresholds               t_Current_Thresholds;
T_Design               t_Design;
T_Cycle               t_Cycle;
T_FD               t_FD;
T_FC               t_FC;
T_TD               t_TD;
T_TC               t_TC;
T_State               t_State;
T_Version               t_Version;
T_DBPT               t_DBPT;
T_PI_Mode               t_PI_Mode;
}T_Gas_Gauging;


typedef struct{
T_Configuration               t_Configuration;
T_Fuse               t_Fuse;
T_Protection               t_Protection;
T_Permanent_Failure               t_Permanent_Failure;
T_AFE               t_AFE;
T_Accumulated_Charge_Measurement               t_Accumulated_Charge_Measurement;
T_Lifetime_Setting               t_Lifetime_Setting;
}T_Setting;


typedef struct{
T_Voltage_Range               t_Voltage_Range;
T_Temp_ranges               t_Temp_ranges;
T_Low_temp               t_Low_temp;
T_Standard_Low_temp               t_Standard_Low_temp;
T_Standard_High_temp               t_Standard_High_temp;
T_High_temp               t_High_temp;
T_Rec_Temp_Charging               t_Rec_Temp_Charging;
T_Poly               t_Poly;
T_Smart_charge               t_Smart_charge;
T_Termination_Config               t_Termination_Config;
T_PreCharging               t_PreCharging;
T_Maintenance_Charging               t_Maintenance_Charging;
T_Charge_Inhibit               t_Charge_Inhibit;
T_Elevated_Degrade               t_Elevated_Degrade;
T_FFC               t_FFC;
}T_Charging_algorithm;


typedef struct{
T_Shutdown               t_Shutdown;
T_Sleep               t_Sleep;
T_Ship_Mode               t_Ship_Mode;
}T_Power;


typedef struct{
T_CUV_Cell_Undervoltage               t_CUV_Cell_Undervoltage;
T_CUVC               t_CUVC;
T_COV_Cell_Overvoltage               t_COV_Cell_Overvoltage;
T_OCC1_Overcurrent_In_Charge_1               t_OCC1_Overcurrent_In_Charge_1;
T_OCC2_Overcurrent_In_Charge_2               t_OCC2_Overcurrent_In_Charge_2;
T_OCC_Overcurrent_In_Charge_Recovery               t_OCC_Overcurrent_In_Charge_Recovery;
T_OCD1_Overcurrent_In_Discharge_1               t_OCD1_Overcurrent_In_Discharge_1;
T_OCD2_Overcurrent_In_Discharge_2               t_OCD2_Overcurrent_In_Discharge_2;
T_OCD_Overcurrent_In_Discharge               t_OCD_Overcurrent_In_Discharge;
T_OCD_Overcurrent_In_Discharge_Latch               t_OCD_Overcurrent_In_Discharge_Latch;
T_AOLD_Overload_in_Discharge               t_AOLD_Overload_in_Discharge;
T_ASCC_Short_Circuit_In_Charge               t_ASCC_Short_Circuit_In_Charge;
T_ASCD_Short_Circuit_in_Discharge               t_ASCD_Short_Circuit_in_Discharge;
T_OTC_Overtemperature_in_Charge               t_OTC_Overtemperature_in_Charge;
T_OTD_Overtemperature_in_Discharge               t_OTD_Overtemperature_in_Discharge;
T_OTF_Overtemperature_FET               t_OTF_Overtemperature_FET;
T_UTC_Undertemperature_in_Charge               t_UTC_Undertemperature_in_Charge;
T_UTD_Undertemperature_in_Discharge               t_UTD_Undertemperature_in_Discharge;
T_HWD_Host_Watchdog               t_HWD_Host_Watchdog;
T_PTO_PRECHARGE_Mode_Time_Out               t_PTO_PRECHARGE_Mode_Time_Out;
T_CTO_Fast_Charge_Mode_Time_Out               t_CTO_Fast_Charge_Mode_Time_Out;
T_OC_Overcharge               t_OC_Overcharge;
T_CHGV_ChargingVoltage               t_CHGV_ChargingVoltage;
T_CHGC_ChargingCurrent               t_CHGC_ChargingCurrent;
T_PCHGC_Pre_ChargingCurrent               t_PCHGC_Pre_ChargingCurrent;
}T_Protections;


typedef struct{
T_SUV_Safety_Cell_Undervoltage               t_SUV_Safety_Cell_Undervoltage;
T_SOV_Safety_Cell_Overvoltage               t_SOV_Safety_Cell_Overvoltage;
T_SOCC_Safety_Overcurrent_in_Charge               t_SOCC_Safety_Overcurrent_in_Charge;
T_SOCD_Safety_Overcurrent_in_Discharge               t_SOCD_Safety_Overcurrent_in_Discharge;
T_SOT_Overtemperature_Cell               t_SOT_Overtemperature_Cell;
T_SOTF_Overtemperature_FET               t_SOTF_Overtemperature_FET;
T_VIMR_Voltage_Imbalance_At_Rest               t_VIMR_Voltage_Imbalance_At_Rest;
T_VIMA_Voltage_Imbalance_Active               t_VIMA_Voltage_Imbalance_Active;
T_CFET_CHG_FET_Failure               t_CFET_CHG_FET_Failure;
T_DFET_DFET_Failure               t_DFET_DFET_Failure;
T_FUSE_FUSE_Failure               t_FUSE_FUSE_Failure;
T_2LVL_2nd_Level_OV               t_2LVL_2nd_Level_OV;
T_TCO               t_TCO;
}T_Permanent_Fail;


typedef struct{
T_Data               t_Data;
}T_SBS_Configuration;


typedef struct{
T_ConfigurationEx               t_ConfigurationEx;
T_Normal_Charging               t_Normal_Charging;
T_CCCV_Charging               t_CCCV_Charging;
T_FCC_Degrade_Chg_Current               t_FCC_Degrade_Chg_Current;
T_CCV_Step_Down_Charging               t_CCV_Step_Down_Charging;
T_Smart_Charge               t_Smart_Charge;
T_Fast_OverCurrent_Protection               t_Fast_OverCurrent_Protection;
T_Lifetime_Storage_Data               t_Lifetime_Storage_Data;
T_Dual_Mode               t_Dual_Mode;
T_Set_FCC_Design_Capacity               t_Set_FCC_Design_Capacity;
T_FCC_Report_DesCap_Threshold               t_FCC_Report_DesCap_Threshold;
T_Dual_Mode_TempVolt_Modifier               t_Dual_Mode_TempVolt_Modifier;
T_Lifetime_Timers               t_Lifetime_Timers;
T_LifeSpan_Volt_Modifier               t_LifeSpan_Volt_Modifier;
}T_Lenovo_Data;


typedef struct{
T_Manufacturer_Data               t_Manufacturer_Data;
T_Manufacturer_Info_B               t_Manufacturer_Info_B;
T_Manufacturer_Info_C               t_Manufacturer_Info_C;
T_Integrity               t_Integrity;
}T_System_Data;


typedef struct{
T_US               t_US;
T_FA               t_FA;
}T_UNSeal;


typedef struct{
T_Control_flag               t_Control_flag;
}T_Control;


typedef struct{
T_FCC_Limit               t_FCC_Limit;
T_Voltage_Limit               t_Voltage_Limit;
T_Temper_Cap_limit               t_Temper_Cap_limit;
}T_Algorithm_LIMIT;


typedef struct{
T_COV_Chg_Smooth               t_COV_Chg_Smooth;
T_VCT_Chg_Smooth               t_VCT_Chg_Smooth;
T_Dsg_Smooth               t_Dsg_Smooth;
}T_SMOOTH;


typedef struct{
<<<<<<< HEAD
T_Charge_COV_FULL_Para               t_Charge_COV_FULL_Para;
}T_Charge_COV_FULL;
=======
T_DSG_UPD_CPL_TEM_FAC               t_DSG_UPD_CPL_TEM_FAC;
}T_DSG_UPD_CPL_TEM;
>>>>>>> bff363fb8fc99b4a686864b311eee1856fd5ed4f



typedef struct{
T_Calib               t_Calib;
T_OCV_SOC_table               t_OCV_SOC_table;
T_SOC_RA               t_SOC_RA;
T_CP_Correction               t_CP_Correction;
T_Gas_Gauging               t_Gas_Gauging;
T_Setting               t_Setting;
T_Charging_algorithm               t_Charging_algorithm;
T_Power               t_Power;
T_Protections               t_Protections;
T_Permanent_Fail               t_Permanent_Fail;
T_SBS_Configuration               t_SBS_Configuration;
T_Lenovo_Data               t_Lenovo_Data;
T_System_Data               t_System_Data;
T_UNSeal               t_UNSeal;
T_Control               t_Control;
T_Algorithm_LIMIT               t_Algorithm_LIMIT;
T_SMOOTH               t_SMOOTH;
<<<<<<< HEAD
T_Charge_COV_FULL               t_Charge_COV_FULL;
=======
T_DSG_UPD_CPL_TEM               t_DSG_UPD_CPL_TEM;
>>>>>>> bff363fb8fc99b4a686864b311eee1856fd5ed4f
}FlashData;


typedef struct{
uint32_t               m_FlashWriteTimes;
uint16_t               m_MaxLoadCurrent;
uint16_t               m_MaxLoadTimeToEmpty;
uint16_t               m_RSOC;
uint16_t               m_ASOC;
uint16_t               m_Remainingcapacity;
uint16_t               m_FullChargeCapacity;
uint16_t               m_SOH;
uint16_t               m_CycleCount;
uint16_t               m_QmaxUpdateCycle;
uint16_t               m_Qmax;
uint16_t               m_QmaxCell1;
uint16_t               m_QmaxCell2;
uint16_t               m_QmaxCell3;
uint16_t               m_QmaxCell4;
uint16_t               m_ChargingVoltage;
uint16_t               m_ChargingCurrent;
uint16_t               m_ChargeToFullTimes;
uint16_t               m_MaxError;
uint16_t               m_BatteryMode;
uint16_t               m_BatteryStatus;
uint32_t               m_ChargingStatus;
uint32_t               m_GaugingStatus;
uint32_t               m_OperationStatus;
uint32_t               m_SafetyStatus;
uint32_t               m_PFStatus;
uint16_t               m_TempRange;
uint16_t               m_ManufacturingStatus;
uint16_t               m_BalanceStatus;
uint16_t               m_SleepTime;
uint16_t               m_ResetTimes;
int32_t               m_lrc_w;
uint16_t               m_tcc_cnt;
uint16_t               m_trek_cnt;
int32_t               m_Del_lrc;
int32_t               m_Ilrc_w;
uint16_t               m_IdealFCC;
uint16_t               m_IdealRC;
uint16_t               m_IRsoc;
uint16_t               m_Chargefactor;
uint16_t               m_Dischargefactor;
uint16_t               m_Seal_count;
uint16_t               m_ShutDown_Mode;
}Record;

#define Record_FlashWriteTimes               t_record.m_FlashWriteTimes
#define Record_MaxLoadCurrent               t_record.m_MaxLoadCurrent
#define Record_MaxLoadTimeToEmpty               t_record.m_MaxLoadTimeToEmpty
#define Record_RSOC               t_record.m_RSOC
#define Record_ASOC               t_record.m_ASOC
#define Record_Remainingcapacity               t_record.m_Remainingcapacity
#define Record_FullChargeCapacity               t_record.m_FullChargeCapacity
#define Record_SOH               t_record.m_SOH
#define Record_CycleCount               t_record.m_CycleCount
#define Record_QmaxUpdateCycle               t_record.m_QmaxUpdateCycle
#define Record_Qmax               t_record.m_Qmax
#define Record_QmaxCell1               t_record.m_QmaxCell1
#define Record_QmaxCell2               t_record.m_QmaxCell2
#define Record_QmaxCell3               t_record.m_QmaxCell3
#define Record_QmaxCell4               t_record.m_QmaxCell4
#define Record_ChargingVoltage               t_record.m_ChargingVoltage
#define Record_ChargingCurrent               t_record.m_ChargingCurrent
#define Record_ChargeToFullTimes               t_record.m_ChargeToFullTimes
#define Record_MaxError               t_record.m_MaxError
#define Record_BatteryMode               t_record.m_BatteryMode
#define Record_BatteryStatus               t_record.m_BatteryStatus
#define Record_ChargingStatus               t_record.m_ChargingStatus
#define Record_GaugingStatus               t_record.m_GaugingStatus
#define Record_OperationStatus               t_record.m_OperationStatus
#define Record_SafetyStatus               t_record.m_SafetyStatus
#define Record_PFStatus               t_record.m_PFStatus
#define Record_TempRange               t_record.m_TempRange
#define Record_ManufacturingStatus               t_record.m_ManufacturingStatus
#define Record_BalanceStatus               t_record.m_BalanceStatus
#define Record_SleepTime               t_record.m_SleepTime
#define Record_ResetTimes               t_record.m_ResetTimes
#define Record_lrc_w               t_record.m_lrc_w
#define Record_tcc_cnt               t_record.m_tcc_cnt
#define Record_trek_cnt               t_record.m_trek_cnt
#define Record_Del_lrc               t_record.m_Del_lrc
#define Record_Ilrc_w               t_record.m_Ilrc_w
#define Record_IdealFCC               t_record.m_IdealFCC
#define Record_IdealRC               t_record.m_IdealRC
#define Record_IRsoc               t_record.m_IRsoc
#define Record_Chargefactor               t_record.m_Chargefactor
#define Record_Dischargefactor               t_record.m_Dischargefactor
#define Record_Seal_count               t_record.m_Seal_count
#define Record_ShutDown_Mode               t_record.m_ShutDown_Mode

typedef struct{
uint16_t               m_Cell_1_Max_Voltage;
uint16_t               m_Cell_2_Max_Voltage;
uint16_t               m_Cell_3_Max_Voltage;
uint16_t               m_Cell_4_Max_Voltage;
uint16_t               m_Cell_1_Min_Voltage;
uint16_t               m_Cell_2_Min_Voltage;
uint16_t               m_Cell_3_Min_Voltage;
uint16_t               m_Cell_4_Min_Voltage;
uint16_t               m_Max_Delta_Cell_Voltage;
int16_t               m_Max_Charge_Current;
int16_t               m_Max_Discharge_Current;
int16_t               m_Max_Avg_Dsg_Current;
int16_t               m_Max_Avg_Dsg_Power;
int8_t               m_Max_Temp_Cell;
int8_t               m_Min_Temp_Cell;
int8_t               m_Max_Temp_MOS;
int8_t               m_Min_Temp_MOS;
int8_t               m_Max_Delta_Cell_Temp;
int8_t               m_Max_Temp_Int_Sensor;
int8_t               m_Min_Temp_Int_Sensor;
int8_t               m_Max_Temp_Fet;
uint16_t               m_No_Of_COV_Events;
uint16_t               m_Last_COV_Event;
uint16_t               m_No_Of_CUV_Events;
uint16_t               m_Last_CUV_Event;
uint16_t               m_No_Of_OCD1_Events;
uint16_t               m_Last_OCD1_Event;
uint16_t               m_No_Of_OCD2_Events;
uint16_t               m_Last_OCD2_Event;
uint16_t               m_No_Of_OCC1_Events;
uint16_t               m_Last_OCC1_Event;
uint16_t               m_No_Of_OCC2_Events;
uint16_t               m_Last_OCC2_Event;
uint16_t               m_No_Of_AOLD_Events;
uint16_t               m_Last_AOLD_Event;
uint16_t               m_No_Of_ASCD_Events;
uint16_t               m_Last_ASCD_Event;
uint16_t               m_No_Of_ASCC_Events;
uint16_t               m_Last_ASCC_Event;
uint16_t               m_No_Of_OTC_Events;
uint16_t               m_Last_OTC_Event;
uint16_t               m_No_Of_OTD_Events;
uint16_t               m_Last_OTD_Event;
uint16_t               m_No_Of_OTF_Events;
uint16_t               m_Last_OTF_Event;
uint16_t               m_No_Valid_Charge_Term;
uint16_t               m_Last_Valid_Charge_Term;
uint16_t               m_No_Of_Qmax_Updates;
uint16_t               m_Last_Qmax_Update;
uint16_t               m_No_Of_Ra_Updates;
uint16_t               m_Last_Ra_Update;
uint16_t               m_No_Of_Ra_Disable;
uint16_t               m_Last_Ra_Disable;
uint8_t               m_No_of_Shutdowns;
uint32_t               m_CB_Time_Cell_1;
uint32_t               m_CB_Time_Cell_2;
uint32_t               m_CB_Time_Cell_3;
uint32_t               m_CB_Time_Cell_4;
uint32_t               m_Total_Firmware_Runtime;
uint32_t               m_Time_Spent_in_UT_RSOC_A;
uint32_t               m_Time_Spent_in_UT_RSOC_B;
uint32_t               m_Time_Spent_in_UT_RSOC_C;
uint32_t               m_Time_Spent_in_UT_RSOC_D;
uint32_t               m_Time_Spent_in_UT_RSOC_E;
uint32_t               m_Time_Spent_in_UT_RSOC_F;
uint32_t               m_Time_Spent_in_UT_RSOC_G;
uint32_t               m_Time_Spent_in_LT_RSOC_A;
uint32_t               m_Time_Spent_in_LT_RSOC_B;
uint32_t               m_Time_Spent_in_LT_RSOC_C;
uint32_t               m_Time_Spent_in_LT_RSOC_D;
uint32_t               m_Time_Spent_in_LT_RSOC_E;
uint32_t               m_Time_Spent_in_LT_RSOC_F;
uint32_t               m_Time_Spent_in_LT_RSOC_G;
uint32_t               m_Time_Spent_in_STL_RSOC_A;
uint32_t               m_Time_Spent_in_STL_RSOC_B;
uint32_t               m_Time_Spent_in_STL_RSOC_C;
uint32_t               m_Time_Spent_in_STL_RSOC_D;
uint32_t               m_Time_Spent_in_STL_RSOC_E;
uint32_t               m_Time_Spent_in_STL_RSOC_F;
uint32_t               m_Time_Spent_in_STL_RSOC_G;
uint32_t               m_Time_Spent_in_RT_RSOC_A;
uint32_t               m_Time_Spent_in_RT_RSOC_B;
uint32_t               m_Time_Spent_in_RT_RSOC_C;
uint32_t               m_Time_Spent_in_RT_RSOC_D;
uint32_t               m_Time_Spent_in_RT_RSOC_E;
uint32_t               m_Time_Spent_in_RT_RSOC_F;
uint32_t               m_Time_Spent_in_RT_RSOC_G;
uint32_t               m_Time_Spent_in_STH_RSOC_A;
uint32_t               m_Time_Spent_in_STH_RSOC_B;
uint32_t               m_Time_Spent_in_STH_RSOC_C;
uint32_t               m_Time_Spent_in_STH_RSOC_D;
uint32_t               m_Time_Spent_in_STH_RSOC_E;
uint32_t               m_Time_Spent_in_STH_RSOC_F;
uint32_t               m_Time_Spent_in_STH_RSOC_G;
uint32_t               m_Time_Spent_in_HT_RSOC_A;
uint32_t               m_Time_Spent_in_HT_RSOC_B;
uint32_t               m_Time_Spent_in_HT_RSOC_C;
uint32_t               m_Time_Spent_in_HT_RSOC_D;
uint32_t               m_Time_Spent_in_HT_RSOC_E;
uint32_t               m_Time_Spent_in_HT_RSOC_F;
uint32_t               m_Time_Spent_in_HT_RSOC_G;
uint32_t               m_Time_Spent_in_OT_RSOC_A;
uint32_t               m_Time_Spent_in_OT_RSOC_B;
uint32_t               m_Time_Spent_in_OT_RSOC_C;
uint32_t               m_Time_Spent_in_OT_RSOC_D;
uint32_t               m_Time_Spent_in_OT_RSOC_E;
uint32_t               m_Time_Spent_in_OT_RSOC_F;
uint32_t               m_Time_Spent_in_OT_RSOC_G;
uint8_t               m_Safety_Alert_A;
uint8_t               m_Safety_Status_A;
uint8_t               m_Safety_Alert_B;
uint8_t               m_Safety_Status_B;
uint8_t               m_Safety_Alert_C;
uint8_t               m_Safety_Status_C;
uint8_t               m_Safety_Alert_D;
uint8_t               m_Safety_Status_D;
uint8_t               m_PF_Alert_A;
uint8_t               m_PF_Status_A;
uint8_t               m_PF_Alert_B;
uint8_t               m_PF_Status_B;
uint8_t               m_PF_Alert_C;
uint8_t               m_PF_Status_C;
uint8_t               m_PF_Alert_D;
uint8_t               m_PF_Status_D;
uint16_t               m_Operation_Status_A;
uint16_t               m_Operation_Status_B;
uint8_t               m_Temp_Range;
uint8_t               m_Charging_Status_A;
uint8_t               m_Charging_Status_B;
uint8_t               m_Gauging_Status;
uint16_t               m_IT_Status;
uint16_t               m_Cell_1_Voltage;
uint16_t               m_Cell_2_Voltage;
uint16_t               m_Cell_3_Voltage;
uint16_t               m_Cell_4_Voltage;
uint16_t               m_Battery_Direct_Voltage;
uint16_t               m_Pack_Voltage;
uint16_t               m_Current;
uint16_t               m_Internal_Temperature;
uint16_t               m_External_1_Temperature;
uint16_t               m_External_2_Temperature;
uint16_t               m_External_3_Temperature;
uint16_t               m_External_4_Temperature;
uint8_t               m_1st_Status_Status_A;
uint8_t               m_1st_Status_Status_B;
uint8_t               m_1st_Status_Status_C;
uint8_t               m_1st_Status_Status_D;
uint32_t               m_1st_Time_to_Next_Event;
uint8_t               m_2st_Status_Status_A;
uint8_t               m_2st_Status_Status_B;
uint8_t               m_2st_Status_Status_C;
uint8_t               m_2st_Status_Status_D;
uint32_t               m_2st_Time_to_Next_Event;
uint8_t               m_3st_Status_Status_A;
uint8_t               m_3st_Status_Status_B;
uint8_t               m_3st_Status_Status_C;
uint8_t               m_3st_Status_Status_D;
uint32_t               m_3st_Time_to_Next_Event;
uint8_t               m_1st_PF_Status_A;
uint8_t               m_1st_PF_Status_B;
uint8_t               m_1st_PF_Status_C;
uint8_t               m_1st_PF_Status_D;
uint8_t               m_2st_PF_Status_A;
uint8_t               m_2st_PF_Status_B;
uint8_t               m_2st_PF_Status_C;
uint8_t               m_2st_PF_Status_D;
uint8_t               m_3st_PF_Status_A;
uint8_t               m_3st_PF_Status_B;
uint8_t               m_3st_PF_Status_C;
uint8_t               m_3st_PF_Status_D;
uint16_t               m_Pi_Mode_Count;
}LifeTimes;

#define LifeTimes_Cell_1_Max_Voltage               t_lifetimes.m_Cell_1_Max_Voltage
#define LifeTimes_Cell_2_Max_Voltage               t_lifetimes.m_Cell_2_Max_Voltage
#define LifeTimes_Cell_3_Max_Voltage               t_lifetimes.m_Cell_3_Max_Voltage
#define LifeTimes_Cell_4_Max_Voltage               t_lifetimes.m_Cell_4_Max_Voltage
#define LifeTimes_Cell_1_Min_Voltage               t_lifetimes.m_Cell_1_Min_Voltage
#define LifeTimes_Cell_2_Min_Voltage               t_lifetimes.m_Cell_2_Min_Voltage
#define LifeTimes_Cell_3_Min_Voltage               t_lifetimes.m_Cell_3_Min_Voltage
#define LifeTimes_Cell_4_Min_Voltage               t_lifetimes.m_Cell_4_Min_Voltage
#define LifeTimes_Max_Delta_Cell_Voltage               t_lifetimes.m_Max_Delta_Cell_Voltage
#define LifeTimes_Max_Charge_Current               t_lifetimes.m_Max_Charge_Current
#define LifeTimes_Max_Discharge_Current               t_lifetimes.m_Max_Discharge_Current
#define LifeTimes_Max_Avg_Dsg_Current               t_lifetimes.m_Max_Avg_Dsg_Current
#define LifeTimes_Max_Avg_Dsg_Power               t_lifetimes.m_Max_Avg_Dsg_Power
#define LifeTimes_Max_Temp_Cell               t_lifetimes.m_Max_Temp_Cell
#define LifeTimes_Min_Temp_Cell               t_lifetimes.m_Min_Temp_Cell
#define LifeTimes_Max_Temp_MOS               t_lifetimes.m_Max_Temp_MOS
#define LifeTimes_Min_Temp_MOS               t_lifetimes.m_Min_Temp_MOS
#define LifeTimes_Max_Delta_Cell_Temp               t_lifetimes.m_Max_Delta_Cell_Temp
#define LifeTimes_Max_Temp_Int_Sensor               t_lifetimes.m_Max_Temp_Int_Sensor
#define LifeTimes_Min_Temp_Int_Sensor               t_lifetimes.m_Min_Temp_Int_Sensor
#define LifeTimes_Max_Temp_Fet               t_lifetimes.m_Max_Temp_Fet
#define LifeTimes_No_Of_COV_Events               t_lifetimes.m_No_Of_COV_Events
#define LifeTimes_Last_COV_Event               t_lifetimes.m_Last_COV_Event
#define LifeTimes_No_Of_CUV_Events               t_lifetimes.m_No_Of_CUV_Events
#define LifeTimes_Last_CUV_Event               t_lifetimes.m_Last_CUV_Event
#define LifeTimes_No_Of_OCD1_Events               t_lifetimes.m_No_Of_OCD1_Events
#define LifeTimes_Last_OCD1_Event               t_lifetimes.m_Last_OCD1_Event
#define LifeTimes_No_Of_OCD2_Events               t_lifetimes.m_No_Of_OCD2_Events
#define LifeTimes_Last_OCD2_Event               t_lifetimes.m_Last_OCD2_Event
#define LifeTimes_No_Of_OCC1_Events               t_lifetimes.m_No_Of_OCC1_Events
#define LifeTimes_Last_OCC1_Event               t_lifetimes.m_Last_OCC1_Event
#define LifeTimes_No_Of_OCC2_Events               t_lifetimes.m_No_Of_OCC2_Events
#define LifeTimes_Last_OCC2_Event               t_lifetimes.m_Last_OCC2_Event
#define LifeTimes_No_Of_AOLD_Events               t_lifetimes.m_No_Of_AOLD_Events
#define LifeTimes_Last_AOLD_Event               t_lifetimes.m_Last_AOLD_Event
#define LifeTimes_No_Of_ASCD_Events               t_lifetimes.m_No_Of_ASCD_Events
#define LifeTimes_Last_ASCD_Event               t_lifetimes.m_Last_ASCD_Event
#define LifeTimes_No_Of_ASCC_Events               t_lifetimes.m_No_Of_ASCC_Events
#define LifeTimes_Last_ASCC_Event               t_lifetimes.m_Last_ASCC_Event
#define LifeTimes_No_Of_OTC_Events               t_lifetimes.m_No_Of_OTC_Events
#define LifeTimes_Last_OTC_Event               t_lifetimes.m_Last_OTC_Event
#define LifeTimes_No_Of_OTD_Events               t_lifetimes.m_No_Of_OTD_Events
#define LifeTimes_Last_OTD_Event               t_lifetimes.m_Last_OTD_Event
#define LifeTimes_No_Of_OTF_Events               t_lifetimes.m_No_Of_OTF_Events
#define LifeTimes_Last_OTF_Event               t_lifetimes.m_Last_OTF_Event
#define LifeTimes_No_Valid_Charge_Term               t_lifetimes.m_No_Valid_Charge_Term
#define LifeTimes_Last_Valid_Charge_Term               t_lifetimes.m_Last_Valid_Charge_Term
#define LifeTimes_No_Of_Qmax_Updates               t_lifetimes.m_No_Of_Qmax_Updates
#define LifeTimes_Last_Qmax_Update               t_lifetimes.m_Last_Qmax_Update
#define LifeTimes_No_Of_Ra_Updates               t_lifetimes.m_No_Of_Ra_Updates
#define LifeTimes_Last_Ra_Update               t_lifetimes.m_Last_Ra_Update
#define LifeTimes_No_Of_Ra_Disable               t_lifetimes.m_No_Of_Ra_Disable
#define LifeTimes_Last_Ra_Disable               t_lifetimes.m_Last_Ra_Disable
#define LifeTimes_No_of_Shutdowns               t_lifetimes.m_No_of_Shutdowns
#define LifeTimes_CB_Time_Cell_1               t_lifetimes.m_CB_Time_Cell_1
#define LifeTimes_CB_Time_Cell_2               t_lifetimes.m_CB_Time_Cell_2
#define LifeTimes_CB_Time_Cell_3               t_lifetimes.m_CB_Time_Cell_3
#define LifeTimes_CB_Time_Cell_4               t_lifetimes.m_CB_Time_Cell_4
#define LifeTimes_Total_Firmware_Runtime               t_lifetimes.m_Total_Firmware_Runtime
#define LifeTimes_Time_Spent_in_UT_RSOC_A               t_lifetimes.m_Time_Spent_in_UT_RSOC_A
#define LifeTimes_Time_Spent_in_UT_RSOC_B               t_lifetimes.m_Time_Spent_in_UT_RSOC_B
#define LifeTimes_Time_Spent_in_UT_RSOC_C               t_lifetimes.m_Time_Spent_in_UT_RSOC_C
#define LifeTimes_Time_Spent_in_UT_RSOC_D               t_lifetimes.m_Time_Spent_in_UT_RSOC_D
#define LifeTimes_Time_Spent_in_UT_RSOC_E               t_lifetimes.m_Time_Spent_in_UT_RSOC_E
#define LifeTimes_Time_Spent_in_UT_RSOC_F               t_lifetimes.m_Time_Spent_in_UT_RSOC_F
#define LifeTimes_Time_Spent_in_UT_RSOC_G               t_lifetimes.m_Time_Spent_in_UT_RSOC_G
#define LifeTimes_Time_Spent_in_LT_RSOC_A               t_lifetimes.m_Time_Spent_in_LT_RSOC_A
#define LifeTimes_Time_Spent_in_LT_RSOC_B               t_lifetimes.m_Time_Spent_in_LT_RSOC_B
#define LifeTimes_Time_Spent_in_LT_RSOC_C               t_lifetimes.m_Time_Spent_in_LT_RSOC_C
#define LifeTimes_Time_Spent_in_LT_RSOC_D               t_lifetimes.m_Time_Spent_in_LT_RSOC_D
#define LifeTimes_Time_Spent_in_LT_RSOC_E               t_lifetimes.m_Time_Spent_in_LT_RSOC_E
#define LifeTimes_Time_Spent_in_LT_RSOC_F               t_lifetimes.m_Time_Spent_in_LT_RSOC_F
#define LifeTimes_Time_Spent_in_LT_RSOC_G               t_lifetimes.m_Time_Spent_in_LT_RSOC_G
#define LifeTimes_Time_Spent_in_STL_RSOC_A               t_lifetimes.m_Time_Spent_in_STL_RSOC_A
#define LifeTimes_Time_Spent_in_STL_RSOC_B               t_lifetimes.m_Time_Spent_in_STL_RSOC_B
#define LifeTimes_Time_Spent_in_STL_RSOC_C               t_lifetimes.m_Time_Spent_in_STL_RSOC_C
#define LifeTimes_Time_Spent_in_STL_RSOC_D               t_lifetimes.m_Time_Spent_in_STL_RSOC_D
#define LifeTimes_Time_Spent_in_STL_RSOC_E               t_lifetimes.m_Time_Spent_in_STL_RSOC_E
#define LifeTimes_Time_Spent_in_STL_RSOC_F               t_lifetimes.m_Time_Spent_in_STL_RSOC_F
#define LifeTimes_Time_Spent_in_STL_RSOC_G               t_lifetimes.m_Time_Spent_in_STL_RSOC_G
#define LifeTimes_Time_Spent_in_RT_RSOC_A               t_lifetimes.m_Time_Spent_in_RT_RSOC_A
#define LifeTimes_Time_Spent_in_RT_RSOC_B               t_lifetimes.m_Time_Spent_in_RT_RSOC_B
#define LifeTimes_Time_Spent_in_RT_RSOC_C               t_lifetimes.m_Time_Spent_in_RT_RSOC_C
#define LifeTimes_Time_Spent_in_RT_RSOC_D               t_lifetimes.m_Time_Spent_in_RT_RSOC_D
#define LifeTimes_Time_Spent_in_RT_RSOC_E               t_lifetimes.m_Time_Spent_in_RT_RSOC_E
#define LifeTimes_Time_Spent_in_RT_RSOC_F               t_lifetimes.m_Time_Spent_in_RT_RSOC_F
#define LifeTimes_Time_Spent_in_RT_RSOC_G               t_lifetimes.m_Time_Spent_in_RT_RSOC_G
#define LifeTimes_Time_Spent_in_STH_RSOC_A               t_lifetimes.m_Time_Spent_in_STH_RSOC_A
#define LifeTimes_Time_Spent_in_STH_RSOC_B               t_lifetimes.m_Time_Spent_in_STH_RSOC_B
#define LifeTimes_Time_Spent_in_STH_RSOC_C               t_lifetimes.m_Time_Spent_in_STH_RSOC_C
#define LifeTimes_Time_Spent_in_STH_RSOC_D               t_lifetimes.m_Time_Spent_in_STH_RSOC_D
#define LifeTimes_Time_Spent_in_STH_RSOC_E               t_lifetimes.m_Time_Spent_in_STH_RSOC_E
#define LifeTimes_Time_Spent_in_STH_RSOC_F               t_lifetimes.m_Time_Spent_in_STH_RSOC_F
#define LifeTimes_Time_Spent_in_STH_RSOC_G               t_lifetimes.m_Time_Spent_in_STH_RSOC_G
#define LifeTimes_Time_Spent_in_HT_RSOC_A               t_lifetimes.m_Time_Spent_in_HT_RSOC_A
#define LifeTimes_Time_Spent_in_HT_RSOC_B               t_lifetimes.m_Time_Spent_in_HT_RSOC_B
#define LifeTimes_Time_Spent_in_HT_RSOC_C               t_lifetimes.m_Time_Spent_in_HT_RSOC_C
#define LifeTimes_Time_Spent_in_HT_RSOC_D               t_lifetimes.m_Time_Spent_in_HT_RSOC_D
#define LifeTimes_Time_Spent_in_HT_RSOC_E               t_lifetimes.m_Time_Spent_in_HT_RSOC_E
#define LifeTimes_Time_Spent_in_HT_RSOC_F               t_lifetimes.m_Time_Spent_in_HT_RSOC_F
#define LifeTimes_Time_Spent_in_HT_RSOC_G               t_lifetimes.m_Time_Spent_in_HT_RSOC_G
#define LifeTimes_Time_Spent_in_OT_RSOC_A               t_lifetimes.m_Time_Spent_in_OT_RSOC_A
#define LifeTimes_Time_Spent_in_OT_RSOC_B               t_lifetimes.m_Time_Spent_in_OT_RSOC_B
#define LifeTimes_Time_Spent_in_OT_RSOC_C               t_lifetimes.m_Time_Spent_in_OT_RSOC_C
#define LifeTimes_Time_Spent_in_OT_RSOC_D               t_lifetimes.m_Time_Spent_in_OT_RSOC_D
#define LifeTimes_Time_Spent_in_OT_RSOC_E               t_lifetimes.m_Time_Spent_in_OT_RSOC_E
#define LifeTimes_Time_Spent_in_OT_RSOC_F               t_lifetimes.m_Time_Spent_in_OT_RSOC_F
#define LifeTimes_Time_Spent_in_OT_RSOC_G               t_lifetimes.m_Time_Spent_in_OT_RSOC_G
#define LifeTimes_Safety_Alert_A               t_lifetimes.m_Safety_Alert_A
#define LifeTimes_Safety_Status_A               t_lifetimes.m_Safety_Status_A
#define LifeTimes_Safety_Alert_B               t_lifetimes.m_Safety_Alert_B
#define LifeTimes_Safety_Status_B               t_lifetimes.m_Safety_Status_B
#define LifeTimes_Safety_Alert_C               t_lifetimes.m_Safety_Alert_C
#define LifeTimes_Safety_Status_C               t_lifetimes.m_Safety_Status_C
#define LifeTimes_Safety_Alert_D               t_lifetimes.m_Safety_Alert_D
#define LifeTimes_Safety_Status_D               t_lifetimes.m_Safety_Status_D
#define LifeTimes_PF_Alert_A               t_lifetimes.m_PF_Alert_A
#define LifeTimes_PF_Status_A               t_lifetimes.m_PF_Status_A
#define LifeTimes_PF_Alert_B               t_lifetimes.m_PF_Alert_B
#define LifeTimes_PF_Status_B               t_lifetimes.m_PF_Status_B
#define LifeTimes_PF_Alert_C               t_lifetimes.m_PF_Alert_C
#define LifeTimes_PF_Status_C               t_lifetimes.m_PF_Status_C
#define LifeTimes_PF_Alert_D               t_lifetimes.m_PF_Alert_D
#define LifeTimes_PF_Status_D               t_lifetimes.m_PF_Status_D
#define LifeTimes_Operation_Status_A               t_lifetimes.m_Operation_Status_A
#define LifeTimes_Operation_Status_B               t_lifetimes.m_Operation_Status_B
#define LifeTimes_Temp_Range               t_lifetimes.m_Temp_Range
#define LifeTimes_Charging_Status_A               t_lifetimes.m_Charging_Status_A
#define LifeTimes_Charging_Status_B               t_lifetimes.m_Charging_Status_B
#define LifeTimes_Gauging_Status               t_lifetimes.m_Gauging_Status
#define LifeTimes_IT_Status               t_lifetimes.m_IT_Status
#define LifeTimes_Cell_1_Voltage               t_lifetimes.m_Cell_1_Voltage
#define LifeTimes_Cell_2_Voltage               t_lifetimes.m_Cell_2_Voltage
#define LifeTimes_Cell_3_Voltage               t_lifetimes.m_Cell_3_Voltage
#define LifeTimes_Cell_4_Voltage               t_lifetimes.m_Cell_4_Voltage
#define LifeTimes_Battery_Direct_Voltage               t_lifetimes.m_Battery_Direct_Voltage
#define LifeTimes_Pack_Voltage               t_lifetimes.m_Pack_Voltage
#define LifeTimes_Current               t_lifetimes.m_Current
#define LifeTimes_Internal_Temperature               t_lifetimes.m_Internal_Temperature
#define LifeTimes_External_1_Temperature               t_lifetimes.m_External_1_Temperature
#define LifeTimes_External_2_Temperature               t_lifetimes.m_External_2_Temperature
#define LifeTimes_External_3_Temperature               t_lifetimes.m_External_3_Temperature
#define LifeTimes_External_4_Temperature               t_lifetimes.m_External_4_Temperature
#define LifeTimes_1st_Status_Status_A               t_lifetimes.m_1st_Status_Status_A
#define LifeTimes_1st_Status_Status_B               t_lifetimes.m_1st_Status_Status_B
#define LifeTimes_1st_Status_Status_C               t_lifetimes.m_1st_Status_Status_C
#define LifeTimes_1st_Status_Status_D               t_lifetimes.m_1st_Status_Status_D
#define LifeTimes_1st_Time_to_Next_Event               t_lifetimes.m_1st_Time_to_Next_Event
#define LifeTimes_2st_Status_Status_A               t_lifetimes.m_2st_Status_Status_A
#define LifeTimes_2st_Status_Status_B               t_lifetimes.m_2st_Status_Status_B
#define LifeTimes_2st_Status_Status_C               t_lifetimes.m_2st_Status_Status_C
#define LifeTimes_2st_Status_Status_D               t_lifetimes.m_2st_Status_Status_D
#define LifeTimes_2st_Time_to_Next_Event               t_lifetimes.m_2st_Time_to_Next_Event
#define LifeTimes_3st_Status_Status_A               t_lifetimes.m_3st_Status_Status_A
#define LifeTimes_3st_Status_Status_B               t_lifetimes.m_3st_Status_Status_B
#define LifeTimes_3st_Status_Status_C               t_lifetimes.m_3st_Status_Status_C
#define LifeTimes_3st_Status_Status_D               t_lifetimes.m_3st_Status_Status_D
#define LifeTimes_3st_Time_to_Next_Event               t_lifetimes.m_3st_Time_to_Next_Event
#define LifeTimes_1st_PF_Status_A               t_lifetimes.m_1st_PF_Status_A
#define LifeTimes_1st_PF_Status_B               t_lifetimes.m_1st_PF_Status_B
#define LifeTimes_1st_PF_Status_C               t_lifetimes.m_1st_PF_Status_C
#define LifeTimes_1st_PF_Status_D               t_lifetimes.m_1st_PF_Status_D
#define LifeTimes_2st_PF_Status_A               t_lifetimes.m_2st_PF_Status_A
#define LifeTimes_2st_PF_Status_B               t_lifetimes.m_2st_PF_Status_B
#define LifeTimes_2st_PF_Status_C               t_lifetimes.m_2st_PF_Status_C
#define LifeTimes_2st_PF_Status_D               t_lifetimes.m_2st_PF_Status_D
#define LifeTimes_3st_PF_Status_A               t_lifetimes.m_3st_PF_Status_A
#define LifeTimes_3st_PF_Status_B               t_lifetimes.m_3st_PF_Status_B
#define LifeTimes_3st_PF_Status_C               t_lifetimes.m_3st_PF_Status_C
#define LifeTimes_3st_PF_Status_D               t_lifetimes.m_3st_PF_Status_D
#define LifeTimes_Pi_Mode_Count               t_lifetimes.m_Pi_Mode_Count



extern const volatile FlashData flashdata;
extern volatile Record t_record;
extern volatile LifeTimes t_lifetimes;


#pragma pack(pop)

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __DATA_FLASH_VALUE_H__
