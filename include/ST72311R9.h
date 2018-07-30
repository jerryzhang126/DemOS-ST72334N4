/* ST72311R9.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72311R9__
#define __ST72311R9__

/* ST72311R9 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72311R9 1
		#if (MCU_NAME != ST72311R9)
		#error "wrong include file ST72311R9.h for chosen MCU!"
		#endif
	#endif

	#define STVD7_EXTERN
	#ifdef __HIWARE__
	/* Required to avoid errors at link time, as the Metrowerks compiler   */
	/* prohibits multiple definitions of the same variable.                */
	/* In order to define once the registers, add                          */
	/* "#define __DEFINE_REGISTERS_STVD7_INCLUDE__"                        */
	/* before including this file in one of your application files.        */
		#ifndef __DEFINE_REGISTERS_STVD7_INCLUDE__
		#undef STVD7_EXTERN
		#define STVD7_EXTERN extern
		#endif
	#endif

	#ifdef __CSMC__
		#define DEF_8BIT_REG_AT(NAME,ADDRESS) volatile unsigned char NAME @ADDRESS
		#define DEF_16BIT_REG_AT(NAME,ADDRESS) volatile unsigned int NAME @ADDRESS
	#endif

	#ifdef __HIWARE__
		#define DEF_8BIT_REG_AT(NAME,ADDRESS) STVD7_EXTERN volatile unsigned char NAME @ADDRESS
		#define DEF_16BIT_REG_AT(NAME,ADDRESS) STVD7_EXTERN volatile unsigned int NAME @ADDRESS
	#endif

	#ifdef __RAISONANCE__
		#define DEF_8BIT_REG_AT(NAME,ADDRESS) at ADDRESS hreg NAME
		#define DEF_16BIT_REG_AT(NAME,ADDRESS) at ADDRESS hreg16 NAME
	#endif

/* Port A */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PADR,0x00);

/* Data Direction Register */
DEF_8BIT_REG_AT(PADDR,0x01);

/* Option Register */
DEF_8BIT_REG_AT(PAOR,0x02);

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x04);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x05);

/* Option Register */
DEF_8BIT_REG_AT(PCOR,0x06);

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x08);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x09);

/* Option Register */
DEF_8BIT_REG_AT(PBOR,0x0a);

/* Port E */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PEDR,0x0c);

/* Data Direction Register */
DEF_8BIT_REG_AT(PEDDR,0x0d);

/* Option Register */
DEF_8BIT_REG_AT(PEOR,0x0e);

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x10);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x11);

/* Option Register */
DEF_8BIT_REG_AT(PDOR,0x12);

/* Port F */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PFDR,0x14);

/* Data Direction Register */
DEF_8BIT_REG_AT(PFDDR,0x15);

/* Option Register */
DEF_8BIT_REG_AT(PFOR,0x16);

/* Miscellaneous 1 */
/*****************************************************************/

/* Miscellaneous Register 1 */
DEF_8BIT_REG_AT(MISCR1,0x20);
#define MISCR1_SMS	0		/* Slow Mode Select */
#define MISCR1_SMS_OR	(1 << MISCR1_SMS)
#define MISCR1_CP0	1		/* CPU Clock Prescaler */
#define MISCR1_CP0_OR	(1 << MISCR1_CP0)
#define MISCR1_CP1	2		/* CPU Clock Prescaler */
#define MISCR1_CP1_OR	(1 << MISCR1_CP1)
#define MISCR1_CP_OR	((1 << MISCR1_CP0)|(1 << MISCR1_CP1))
#define MISCR1_IS20	3		/* EI0/EI1 Sensibility */
#define MISCR1_IS20_OR	(1 << MISCR1_IS20)
#define MISCR1_IS21	4		/* EI0/EI1 Sensibility */
#define MISCR1_IS21_OR	(1 << MISCR1_IS21)
#define MISCR1_IS2_OR	((1 << MISCR1_IS20)|(1 << MISCR1_IS21))
#define MISCR1_MCO	5		/* Main Clock Out */
#define MISCR1_MCO_OR	(1 << MISCR1_MCO)
#define MISCR1_IS10	6		/* EI2/EI3 Sensibility */
#define MISCR1_IS10_OR	(1 << MISCR1_IS10)
#define MISCR1_IS11	7		/* EI2/EI3 Sensibility */
#define MISCR1_IS11_OR	(1 << MISCR1_IS11)
#define MISCR1_IS1_OR	((1 << MISCR1_IS10)|(1 << MISCR1_IS11))

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* SPI Data I/O Register */
DEF_8BIT_REG_AT(SPIDR,0x21);

/* SPI Control Register */
DEF_8BIT_REG_AT(SPICR,0x22);
#define SPICR_SPR0	0		/* Baud Rate */
#define SPICR_SPR0_OR	(1 << SPICR_SPR0)
#define SPICR_SPR1	1		/* Baud Rate */
#define SPICR_SPR1_OR	(1 << SPICR_SPR1)
#define SPICR_SPR2	5		/* Baud Rate */
#define SPICR_SPR2_OR	(1 << SPICR_SPR2)
#define SPICR_SPR_OR	((1 << SPICR_SPR0)|(1 << SPICR_SPR1)\
		|(1 << SPICR_SPR2))
#define SPICR_CPHA	2		/* Clock Phase */
#define SPICR_CPHA_OR	(1 << SPICR_CPHA)
#define SPICR_CPOL	3		/* Clock Polarity */
#define SPICR_CPOL_OR	(1 << SPICR_CPOL)
#define SPICR_MSTR	4		/* Master Bit */
#define SPICR_MSTR_OR	(1 << SPICR_MSTR)
#define SPICR_SPE	6		/* Serial Peripheral Output Enable */
#define SPICR_SPE_OR	(1 << SPICR_SPE)
#define SPICR_SPIE	7		/* Serial Peripheral Interrupt Enable */
#define SPICR_SPIE_OR	(1 << SPICR_SPIE)

/* SPI Control Status Register */
DEF_8BIT_REG_AT(SPICSR,0x23);

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x24);
#define ISPR0_I0_0	0		/* External Non Maskable IT Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* External Non Maskable IT Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* MCC IT Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* MCC IT Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* External IT 0 Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* External IT 0 Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* External IT 1 Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* External IT 1 Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x25);
#define ISPR1_I0_4	0		/* External IT 2 Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External IT 2 Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* External IT 3 Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* External IT 3 Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* CAN IT Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* CAN IT Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* SPI IT Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* SPI IT Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x26);
#define ISPR2_I0_8	0		/* Timer A IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* Timer A IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* Timer B IT Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* Timer B IT Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* SCI IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* SCI IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* EEPROM IT Priority Level */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* EEPROM IT Priority Level */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x27);
#define ISPR3_I0_13	2		/* PWM ART IT Priority Level */
#define ISPR3_I0_13_OR	(1 << ISPR3_I0_13)
#define ISPR3_I1_13	3		/* PWM ART IT Priority Level */
#define ISPR3_I1_13_OR	(1 << ISPR3_I1_13)
#define ISPR3_I_13_OR	((1 << ISPR3_I0_13)|(1 << ISPR3_I1_13))

/* Main Clock Control/Status Register (MCC) */
/*****************************************************************/

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x29);
#define MCCSR_OIF	0		/* Oscillator Interrupt Flag */
#define MCCSR_OIF_OR	(1 << MCCSR_OIF)
#define MCCSR_OIE	1		/* Oscillator Interrupt */
#define MCCSR_OIE_OR	(1 << MCCSR_OIE)
#define MCCSR_TB0	2		/* Time Base Control */
#define MCCSR_TB0_OR	(1 << MCCSR_TB0)
#define MCCSR_TB1	3		/* Time Base Control */
#define MCCSR_TB1_OR	(1 << MCCSR_TB1)
#define MCCSR_TB_OR	((1 << MCCSR_TB0)|(1 << MCCSR_TB1))

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x2a);
#define WDGCR_WDGA	7		/* Activation Bit */
#define WDGCR_WDGA_OR	(1 << WDGCR_WDGA)
#define WDGCR_T0	0		/* 7-bit Timer */
#define WDGCR_T0_OR	(1 << WDGCR_T0)
#define WDGCR_T1	1		/* 7-bit Timer */
#define WDGCR_T1_OR	(1 << WDGCR_T1)
#define WDGCR_T2	2		/* 7-bit Timer */
#define WDGCR_T2_OR	(1 << WDGCR_T2)
#define WDGCR_T3	3		/* 7-bit Timer */
#define WDGCR_T3_OR	(1 << WDGCR_T3)
#define WDGCR_T4	4		/* 7-bit Timer */
#define WDGCR_T4_OR	(1 << WDGCR_T4)
#define WDGCR_T5	5		/* 7-bit Timer */
#define WDGCR_T5_OR	(1 << WDGCR_T5)
#define WDGCR_T6	6		/* 7-bit Timer */
#define WDGCR_T6_OR	(1 << WDGCR_T6)
#define WDGCR_T_OR	((1 << WDGCR_T0)|(1 << WDGCR_T1)\
		|(1 << WDGCR_T2)|(1 << WDGCR_T3)|(1 << WDGCR_T4)|(1 << WDGCR_T5)\
		|(1 << WDGCR_T6))

/* Status Register */
DEF_8BIT_REG_AT(WDGSR,0x2b);
#define WDGSR_WDOGF	0		/* WDOGF Flag */
#define WDGSR_WDOGF_OR	(1 << WDGSR_WDOGF)

/* 16-Bit Timer A */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(TACR2,0x31);
#define TACR2_EXEDG	0		/* External Clock Edge */
#define TACR2_EXEDG_OR	(1 << TACR2_EXEDG)
#define TACR2_IEDG2	1		/* Input Edge 2 */
#define TACR2_IEDG2_OR	(1 << TACR2_IEDG2)
#define TACR2_CC0	2		/* Clock Control */
#define TACR2_CC0_OR	(1 << TACR2_CC0)
#define TACR2_CC1	3		/* Clock Control */
#define TACR2_CC1_OR	(1 << TACR2_CC1)
#define TACR2_CC_OR	((1 << TACR2_CC0)|(1 << TACR2_CC1))
#define TACR2_PWM	4		/* Pulse Width Modulation */
#define TACR2_PWM_OR	(1 << TACR2_PWM)
#define TACR2_OPM	5		/* One Pulse Mode */
#define TACR2_OPM_OR	(1 << TACR2_OPM)
#define TACR2_OC2E	6		/* Output Compare 2 Output Pin */
#define TACR2_OC2E_OR	(1 << TACR2_OC2E)
#define TACR2_OC1E	7		/* Output Compare 1 Output Pin */
#define TACR2_OC1E_OR	(1 << TACR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(TACR1,0x32);
#define TACR1_OLVL1	0		/* Output Level 1 */
#define TACR1_OLVL1_OR	(1 << TACR1_OLVL1)
#define TACR1_IEDG1	1		/* Input Edge 1 */
#define TACR1_IEDG1_OR	(1 << TACR1_IEDG1)
#define TACR1_OLVL2	2		/* Output Level 2 */
#define TACR1_OLVL2_OR	(1 << TACR1_OLVL2)
#define TACR1_FOLV1	3		/* Forced Output Compare 1 */
#define TACR1_FOLV1_OR	(1 << TACR1_FOLV1)
#define TACR1_FOLV2	4		/* Forced Output Compare 2 */
#define TACR1_FOLV2_OR	(1 << TACR1_FOLV2)
#define TACR1_TOIE	5		/* Timer Overflow Interrupt */
#define TACR1_TOIE_OR	(1 << TACR1_TOIE)
#define TACR1_OCIE	6		/* Output Compare Interrupt */
#define TACR1_OCIE_OR	(1 << TACR1_OCIE)
#define TACR1_ICIE	7		/* Input Capture Interrupt */
#define TACR1_ICIE_OR	(1 << TACR1_ICIE)

/* Status Register */
DEF_8BIT_REG_AT(TASR,0x33);
#define TASR_OCF2	3		/* Output Compare Flag 2 */
#define TASR_OCF2_OR	(1 << TASR_OCF2)
#define TASR_ICF2	4		/* Input Capture Flag 2 */
#define TASR_ICF2_OR	(1 << TASR_ICF2)
#define TASR_TOF	5		/* Timer Overflow */
#define TASR_TOF_OR	(1 << TASR_TOF)
#define TASR_OCF1	6		/* Output Compare Flag 1 */
#define TASR_OCF1_OR	(1 << TASR_OCF1)
#define TASR_ICF1	7		/* Input Capture Flag 1 */
#define TASR_ICF1_OR	(1 << TASR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(TAIC1R,0x34);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(TAIC1HR,0x34);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(TAIC1LR,0x35);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TAOC1R,0x36);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TAOC1HR,0x36);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TAOC1LR,0x37);

/* Counter Register */
DEF_16BIT_REG_AT(TACR,0x38);
/* Counter High Register */
DEF_8BIT_REG_AT(TACHR,0x38);
/* Counter Low Register */
DEF_8BIT_REG_AT(TACLR,0x39);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TAACR,0x3a);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TAACHR,0x3a);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TAACLR,0x3b);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(TAIC2R,0x3c);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(TAIC2HR,0x3c);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(TAIC2LR,0x3d);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TAOC2R,0x3e);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TAOC2HR,0x3e);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TAOC2LR,0x3f);

/* Miscellaneous 2 */
/*****************************************************************/

/* Miscellaneous Register 2 */
DEF_8BIT_REG_AT(MISCR2,0x40);
#define MISCR2_SSI	0		/* Internal Mode */
#define MISCR2_SSI_OR	(1 << MISCR2_SSI)
#define MISCR2_SSM	1		/* Mode Selection */
#define MISCR2_SSM_OR	(1 << MISCR2_SSM)
#define MISCR2_NMIE	2		/* NMI Enable */
#define MISCR2_NMIE_OR	(1 << MISCR2_NMIE)
#define MISCR2_NMIS	3		/* NMI Sensitivity */
#define MISCR2_NMIS_OR	(1 << MISCR2_NMIS)
#define MISCR2_BC0	4		/* Beep Control */
#define MISCR2_BC0_OR	(1 << MISCR2_BC0)
#define MISCR2_BC1	5		/* Beep Control */
#define MISCR2_BC1_OR	(1 << MISCR2_BC1)
#define MISCR2_BC_OR	((1 << MISCR2_BC0)|(1 << MISCR2_BC1))
#define MISCR2_IPB	6		/* Interrupt polarity for port B */
#define MISCR2_IPB_OR	(1 << MISCR2_IPB)
#define MISCR2_IPA	7		/* Interrupt polarity for port A */
#define MISCR2_IPA_OR	(1 << MISCR2_IPA)

/* 16-Bit Timer B */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(TBCR2,0x41);
#define TBCR2_EXEDG	0		/* External Clock Edge */
#define TBCR2_EXEDG_OR	(1 << TBCR2_EXEDG)
#define TBCR2_IEDG2	1		/* Input Edge 2 */
#define TBCR2_IEDG2_OR	(1 << TBCR2_IEDG2)
#define TBCR2_CC0	2		/* Clock Control */
#define TBCR2_CC0_OR	(1 << TBCR2_CC0)
#define TBCR2_CC1	3		/* Clock Control */
#define TBCR2_CC1_OR	(1 << TBCR2_CC1)
#define TBCR2_CC_OR	((1 << TBCR2_CC0)|(1 << TBCR2_CC1))
#define TBCR2_PWM	4		/* Pulse Width Modulation */
#define TBCR2_PWM_OR	(1 << TBCR2_PWM)
#define TBCR2_OPM	5		/* One Pulse Mode */
#define TBCR2_OPM_OR	(1 << TBCR2_OPM)
#define TBCR2_OC2E	6		/* Output Compare 2 Output Pin */
#define TBCR2_OC2E_OR	(1 << TBCR2_OC2E)
#define TBCR2_OC1E	7		/* Output Compare 1 Output Pin */
#define TBCR2_OC1E_OR	(1 << TBCR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(TBCR1,0x42);
#define TBCR1_OLVL1	0		/* Output Level 1 */
#define TBCR1_OLVL1_OR	(1 << TBCR1_OLVL1)
#define TBCR1_IEDG1	1		/* Input Edge 1 */
#define TBCR1_IEDG1_OR	(1 << TBCR1_IEDG1)
#define TBCR1_OLVL2	2		/* Output Level 2 */
#define TBCR1_OLVL2_OR	(1 << TBCR1_OLVL2)
#define TBCR1_FOLV1	3		/* Forced Output Compare 1 */
#define TBCR1_FOLV1_OR	(1 << TBCR1_FOLV1)
#define TBCR1_FOLV2	4		/* Forced Output Compare 2 */
#define TBCR1_FOLV2_OR	(1 << TBCR1_FOLV2)
#define TBCR1_TOIE	5		/* Timer Overflow Interrupt */
#define TBCR1_TOIE_OR	(1 << TBCR1_TOIE)
#define TBCR1_OCIE	6		/* Output Compare Interrupt */
#define TBCR1_OCIE_OR	(1 << TBCR1_OCIE)
#define TBCR1_ICIE	7		/* Input Capture Interrupt */
#define TBCR1_ICIE_OR	(1 << TBCR1_ICIE)

/* Status Register */
DEF_8BIT_REG_AT(TBSR,0x43);
#define TBSR_OCF2	3		/* Output Compare Flag 2 */
#define TBSR_OCF2_OR	(1 << TBSR_OCF2)
#define TBSR_ICF2	4		/* Input Capture Flag 2 */
#define TBSR_ICF2_OR	(1 << TBSR_ICF2)
#define TBSR_TOF	5		/* Timer Overflow */
#define TBSR_TOF_OR	(1 << TBSR_TOF)
#define TBSR_OCF1	6		/* Output Compare Flag 1 */
#define TBSR_OCF1_OR	(1 << TBSR_OCF1)
#define TBSR_ICF1	7		/* Input Capture Flag 1 */
#define TBSR_ICF1_OR	(1 << TBSR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(TBIC1R,0x44);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(TBIC1HR,0x44);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(TBIC1LR,0x45);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TBOC1R,0x46);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TBOC1HR,0x46);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TBOC1LR,0x47);

/* Counter Register */
DEF_16BIT_REG_AT(TBCR,0x48);
/* Counter High Register */
DEF_8BIT_REG_AT(TBCHR,0x48);
/* Counter Low Register */
DEF_8BIT_REG_AT(TBCLR,0x49);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TBACR,0x4a);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TBACHR,0x4a);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TBACLR,0x4b);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(TBIC2R,0x4c);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(TBIC2HR,0x4c);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(TBIC2LR,0x4d);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TBOC2R,0x4e);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TBOC2HR,0x4e);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TBOC2LR,0x4f);

/* Serial Communications Interface (SCI) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCISR,0x50);
#define SCISR_FE	1		/* Framing Error */
#define SCISR_FE_OR	(1 << SCISR_FE)
#define SCISR_NF	2		/* Noise Flag */
#define SCISR_NF_OR	(1 << SCISR_NF)
#define SCISR_OR	3		/* Overrun Error */
#define SCISR_OR_OR	(1 << SCISR_OR)
#define SCISR_IDLE	4		/* Idle line detect */
#define SCISR_IDLE_OR	(1 << SCISR_IDLE)
#define SCISR_RDRF	5		/* Received Data Ready Flag */
#define SCISR_RDRF_OR	(1 << SCISR_RDRF)
#define SCISR_TC	6		/* Transmission Complete */
#define SCISR_TC_OR	(1 << SCISR_TC)
#define SCISR_TDRE	7		/* Transmission Data Register Empty */
#define SCISR_TDRE_OR	(1 << SCISR_TDRE)

/* Data Register */
DEF_8BIT_REG_AT(SCIDR,0x51);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCIBRR,0x52);
#define SCIBRR_SCR0	0		/* Receiver Rate Divisor */
#define SCIBRR_SCR0_OR	(1 << SCIBRR_SCR0)
#define SCIBRR_SCR1	1		/* Receiver Rate Divisor */
#define SCIBRR_SCR1_OR	(1 << SCIBRR_SCR1)
#define SCIBRR_SCR2	2		/* Receiver Rate Divisor */
#define SCIBRR_SCR2_OR	(1 << SCIBRR_SCR2)
#define SCIBRR_SCR_OR	((1 << SCIBRR_SCR0)|(1 << SCIBRR_SCR1)\
		|(1 << SCIBRR_SCR2))
#define SCIBRR_SCT0	3		/* Transmitter Rate Divisor */
#define SCIBRR_SCT0_OR	(1 << SCIBRR_SCT0)
#define SCIBRR_SCT1	4		/* Transmitter Rate Divisor */
#define SCIBRR_SCT1_OR	(1 << SCIBRR_SCT1)
#define SCIBRR_SCT2	5		/* Transmitter Rate Divisor */
#define SCIBRR_SCT2_OR	(1 << SCIBRR_SCT2)
#define SCIBRR_SCT_OR	((1 << SCIBRR_SCT0)|(1 << SCIBRR_SCT1)\
		|(1 << SCIBRR_SCT2))
#define SCIBRR_SCP0	6		/* First SCI Prescaler */
#define SCIBRR_SCP0_OR	(1 << SCIBRR_SCP0)
#define SCIBRR_SCP1	7		/* First SCI Prescaler */
#define SCIBRR_SCP1_OR	(1 << SCIBRR_SCP1)
#define SCIBRR_SCP_OR	((1 << SCIBRR_SCP0)|(1 << SCIBRR_SCP1))

/* Control Register 1 */
DEF_8BIT_REG_AT(SCICR1,0x53);
#define SCICR1_WAKE	3		/* Wake-up Method */
#define SCICR1_WAKE_OR	(1 << SCICR1_WAKE)
#define SCICR1_M	4		/* Word Length */
#define SCICR1_M_OR	(1 << SCICR1_M)
#define SCICR1_T8	6		/* Transmit Data Bit 8 */
#define SCICR1_T8_OR	(1 << SCICR1_T8)
#define SCICR1_R8	7		/* Receive Data Bit 8 */
#define SCICR1_R8_OR	(1 << SCICR1_R8)

/* Control Register 2 */
DEF_8BIT_REG_AT(SCICR2,0x54);
#define SCICR2_SBK	0		/* Send Break */
#define SCICR2_SBK_OR	(1 << SCICR2_SBK)
#define SCICR2_RWU	1		/* Receiver Wake-up Mode */
#define SCICR2_RWU_OR	(1 << SCICR2_RWU)
#define SCICR2_RE	2		/* Receiver */
#define SCICR2_RE_OR	(1 << SCICR2_RE)
#define SCICR2_TE	3		/* Transmitter */
#define SCICR2_TE_OR	(1 << SCICR2_TE)
#define SCICR2_ILIE	4		/* Idle Line Interrupt */
#define SCICR2_ILIE_OR	(1 << SCICR2_ILIE)
#define SCICR2_RIE	5		/* Receiver Interrupt */
#define SCICR2_RIE_OR	(1 << SCICR2_RIE)
#define SCICR2_TCIE	6		/* Transmission Complete Interrupt */
#define SCICR2_TCIE_OR	(1 << SCICR2_TCIE)
#define SCICR2_TIE	7		/* Transmitter Interrupt */
#define SCICR2_TIE_OR	(1 << SCICR2_TIE)

/* Ext. Receive Prescaler Reg. */
DEF_8BIT_REG_AT(SCIERPR,0x55);

/* Ext. Transmit Prescaler Reg. */
DEF_8BIT_REG_AT(SCIETPR,0x57);

/* 8-Bit A/D Converter (ADC) */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(ADCDR,0x70);

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x71);
#define ADCCSR_CH0	0		/* Channel Selection */
#define ADCCSR_CH0_OR	(1 << ADCCSR_CH0)
#define ADCCSR_CH1	1		/* Channel Selection */
#define ADCCSR_CH1_OR	(1 << ADCCSR_CH1)
#define ADCCSR_CH2	2		/* Channel Selection */
#define ADCCSR_CH2_OR	(1 << ADCCSR_CH2)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1)\
		|(1 << ADCCSR_CH2))
#define ADCCSR_ADON	5		/* A/D Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* 8-bit PWM Auto-Reload Timer (PWM ART) */
/*****************************************************************/

/* Duty Cycle Register 3 */
DEF_8BIT_REG_AT(PWMDCR3,0x72);

/* Duty Cycle Register 2 */
DEF_8BIT_REG_AT(PWMDCR2,0x73);

/* Duty Cycle Register 1 */
DEF_8BIT_REG_AT(PWMDCR1,0x74);

/* Duty Cycle Register 0 */
DEF_8BIT_REG_AT(PWMDCR0,0x75);

/* PWM Control Register */
DEF_8BIT_REG_AT(PWMCR,0x76);
#define PWMCR_OP0	0		/* PWM Output Polarity */
#define PWMCR_OP0_OR	(1 << PWMCR_OP0)
#define PWMCR_OP1	1		/* PWM Output Polarity */
#define PWMCR_OP1_OR	(1 << PWMCR_OP1)
#define PWMCR_OP2	2		/* PWM Output Polarity */
#define PWMCR_OP2_OR	(1 << PWMCR_OP2)
#define PWMCR_OP3	3		/* PWM Output Polarity */
#define PWMCR_OP3_OR	(1 << PWMCR_OP3)
#define PWMCR_OP_OR	((1 << PWMCR_OP0)|(1 << PWMCR_OP1)\
		|(1 << PWMCR_OP2)|(1 << PWMCR_OP3))
#define PWMCR_OE0	4		/* PWM Output Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)
#define PWMCR_OE1	5		/* PWM Output Enable */
#define PWMCR_OE1_OR	(1 << PWMCR_OE1)
#define PWMCR_OE2	6		/* PWM Output Enable */
#define PWMCR_OE2_OR	(1 << PWMCR_OE2)
#define PWMCR_OE3	7		/* PWM Output Enable */
#define PWMCR_OE3_OR	(1 << PWMCR_OE3)
#define PWMCR_OE_OR	((1 << PWMCR_OE0)|(1 << PWMCR_OE1)\
		|(1 << PWMCR_OE2)|(1 << PWMCR_OE3))

/* ART Control/Status Register */
DEF_8BIT_REG_AT(ARTCSR,0x77);
#define ARTCSR_OVF	0		/* Overflow Flag */
#define ARTCSR_OVF_OR	(1 << ARTCSR_OVF)
#define ARTCSR_OIE	1		/* Overflow Interrupt Enable */
#define ARTCSR_OIE_OR	(1 << ARTCSR_OIE)
#define ARTCSR_FCRL	2		/* Force Counter Re-Load */
#define ARTCSR_FCRL_OR	(1 << ARTCSR_FCRL)
#define ARTCSR_TCE	3		/* Timer Counter Enable */
#define ARTCSR_TCE_OR	(1 << ARTCSR_TCE)
#define ARTCSR_CC0	4		/* Counter Clock Control */
#define ARTCSR_CC0_OR	(1 << ARTCSR_CC0)
#define ARTCSR_CC1	5		/* Counter Clock Control */
#define ARTCSR_CC1_OR	(1 << ARTCSR_CC1)
#define ARTCSR_CC2	6		/* Counter Clock Control */
#define ARTCSR_CC2_OR	(1 << ARTCSR_CC2)
#define ARTCSR_CC_OR	((1 << ARTCSR_CC0)|(1 << ARTCSR_CC1)\
		|(1 << ARTCSR_CC2))
#define ARTCSR_EXCL	7		/* External Clock */
#define ARTCSR_EXCL_OR	(1 << ARTCSR_EXCL)

/* ART Counter Access Register */
DEF_8BIT_REG_AT(ARTCAR,0x78);

/* ART Auto-Reload Register */
DEF_8BIT_REG_AT(ARTARR,0x79);

#endif /* __ST72311R9__ */
