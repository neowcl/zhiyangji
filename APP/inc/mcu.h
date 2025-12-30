#ifndef __MCU_H__
#define __MCU_H__

#include "main.h"

#define     PCFET_OFF           0xFB
#define		CFET_OFF			0xFD
#define		DFET_OFF			0xFE
#define     FET_OFF             (CFET_OFF & DFET_OFF)
#define     FET_ON              0xFF

#define f_PCFET     DEF_BIT2(&Fet_Ctrl)
#define f_CFET		DEF_BIT1(&Fet_Ctrl)			// C-FET
#define f_DFET		DEF_BIT0(&Fet_Ctrl)			// D-FET

extern  volatile uint8_t		Fet_Ctrl;					// FET setting

void Set_FET(void);
void McuDrvInit(void);
void FlashDataHandle(void);

void DFDataSave(void);

void LED_1_Control(uint8_t led);

void LED_2_Control(uint8_t led);

void LED_3_Control(uint8_t led);

void LED_4_Control(uint8_t led);

#endif
