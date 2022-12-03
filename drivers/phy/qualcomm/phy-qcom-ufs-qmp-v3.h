/*
 * Copyright (c) 2013-2020, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef UFS_QCOM_PHY_QMP_V3_H_
#define UFS_QCOM_PHY_QMP_V3_H_

#include "phy-qcom-ufs-i.h"

/* QCOM UFS PHY control registers */
#define COM_BASE	0x000
#define COM_SIZE	0x18C
#define PHY_BASE	0xC00
#define PHY_SIZE	0x1DC
#define TX_BASE(n)	(0x400 + (0x400 * n))
#define TX_SIZE		0x128
#define RX_BASE(n)	(0x600 + (0x400 * n))
#define RX_SIZE		0x1FC
#define COM_OFF(x)	(COM_BASE + x)
#define PHY_OFF(x)	(PHY_BASE + x)
#define TX_OFF(n, x)	(TX_BASE(n) + x)
#define RX_OFF(n, x)	(RX_BASE(n) + x)

/* UFS PHY QSERDES COM registers */
#define QSERDES_COM_ATB_SEL1			COM_OFF(0x00)
#define QSERDES_COM_ATB_SEL2			COM_OFF(0x04)
#define QSERDES_COM_FREQ_UPDATE			COM_OFF(0x08)
#define QSERDES_COM_BG_TIMER			COM_OFF(0x0C)
#define QSERDES_COM_SSC_EN_CENTER		COM_OFF(0x10)
#define QSERDES_COM_SSC_ADJ_PER1		COM_OFF(0x14)
#define QSERDES_COM_SSC_ADJ_PER2		COM_OFF(0x18)
#define QSERDES_COM_SSC_PER1			COM_OFF(0x1C)
#define QSERDES_COM_SSC_PER2			COM_OFF(0x20)
#define QSERDES_COM_SSC_STEP_SIZE1		COM_OFF(0x24)
#define QSERDES_COM_SSC_STEP_SIZE2		COM_OFF(0x28)
#define QSERDES_COM_POST_DIV			COM_OFF(0x2C)
#define QSERDES_COM_POST_DIV_MUX		COM_OFF(0x30)
#define QSERDES_COM_BIAS_EN_CLKBUFLR_EN		COM_OFF(0x34)
#define QSERDES_COM_CLK_ENABLE1			COM_OFF(0x38)
#define QSERDES_COM_SYS_CLK_CTRL		COM_OFF(0x3C)
#define QSERDES_COM_SYSCLK_BUF_ENABLE		COM_OFF(0x40)
#define QSERDES_COM_PLL_EN			COM_OFF(0x44)
#define QSERDES_COM_PLL_IVCO			COM_OFF(0x48)

/* UFS PHY registers */
#define UFS_PHY_PHY_START			PHY_OFF(0x00)
#define UFS_PHY_POWER_DOWN_CONTROL		PHY_OFF(0x04)
#define UFS_PHY_TIMER_20US_CORECLK_STEPS_MSB	PHY_OFF(0x08)
#define UFS_PHY_TIMER_20US_CORECLK_STEPS_LSB	PHY_OFF(0x0C)
#define UFS_PHY_TX_LARGE_AMP_DRV_LVL		PHY_OFF(0x2C)
#define UFS_PHY_TX_LARGE_AMP_POST_EMP_LVL	PHY_OFF(0x30)
#define UFS_PHY_TX_SMALL_AMP_DRV_LVL		PHY_OFF(0x34)
#define UFS_PHY_TX_SMALL_AMP_POST_EMP_LVL	PHY_OFF(0x38)
#define UFS_PHY_LINECFG_DISABLE			PHY_OFF(0x130)
#define UFS_PHY_RX_SYM_RESYNC_CTRL		PHY_OFF(0x134)
#define UFS_PHY_RX_MIN_HIBERN8_TIME		PHY_OFF(0x138)
#define UFS_PHY_RX_SIGDET_CTRL1			PHY_OFF(0x13C)
#define UFS_PHY_RX_SIGDET_CTRL2			PHY_OFF(0x140)
#define UFS_PHY_RX_PWM_GEAR_BAND		PHY_OFF(0x14C)
#define UFS_PHY_PCS_READY_STATUS		PHY_OFF(0x160)
#define UFS_PHY_TX_MID_TERM_CTRL1		PHY_OFF(0x1BC)
#define UFS_PHY_MULTI_LANE_CTRL1		PHY_OFF(0x1C4)
#define QSERDES_COM_CMN_IETRIM			COM_OFF(0x4C)
#define QSERDES_COM_CMN_IPTRIM			COM_OFF(0x50)
#define QSERDES_COM_EP_CLOCK_DETECT_CTR		COM_OFF(0x54)
#define QSERDES_COM_SYSCLK_DET_COMP_STATUS	COM_OFF(0x58)
#define QSERDES_COM_CLK_EP_DIV			COM_OFF(0x5C)
#define QSERDES_COM_CP_CTRL_MODE0		COM_OFF(0x60)
#define QSERDES_COM_CP_CTRL_MODE1		COM_OFF(0x64)
#define QSERDES_COM_PLL_RCTRL_MODE0		COM_OFF(0x68)
#define QSERDES_COM_PLL_RCTRL_MODE1		COM_OFF(0x6C)
#define QSERDES_COM_PLL_CCTRL_MODE0		COM_OFF(0x70)
#define QSERDES_COM_PLL_CCTRL_MODE1		COM_OFF(0x74)
#define QSERDES_COM_PLL_CNTRL			COM_OFF(0x78)
#define SERDES_COM_BIAS_EN_CTRL_BY_PSM		COM_OFF(0x7C)
#define QSERDES_COM_SYSCLK_EN_SEL		COM_OFF(0x80)
#define QSERDES_COM_CML_SYSCLK_SEL		COM_OFF(0x84)
#define QSERDES_COM_RESETSM_CNTRL		COM_OFF(0x88)
#define QSERDES_COM_RESETSM_CNTRL2		COM_OFF(0x8C)
#define QSERDES_COM_LOCK_CMP_EN			COM_OFF(0x90)
#define QSERDES_COM_LOCK_CMP_CFG		COM_OFF(0x94)
#define QSERDES_COM_LOCK_CMP1_MODE0		COM_OFF(0x98)
#define QSERDES_COM_LOCK_CMP2_MODE0		COM_OFF(0x9C)
#define QSERDES_COM_LOCK_CMP3_MODE0		COM_OFF(0xA0)
#define QSERDES_COM_LOCK_CMP1_MODE1		COM_OFF(0xA4)
#define QSERDES_COM_LOCK_CMP2_MODE1		COM_OFF(0xA8)
#define QSERDES_COM_LOCK_CMP3_MODE1		COM_OFF(0xAC)
#define QSERDES_COM_DEC_START_MODE0		COM_OFF(0xB0)
#define QSERDES_COM_DEC_START_MODE1		COM_OFF(0xB4)
#define QSERDES_COM_DIV_FRAC_START1_MODE0	COM_OFF(0xB8)
#define QSERDES_COM_DIV_FRAC_START2_MODE0	COM_OFF(0xBC)
#define QSERDES_COM_DIV_FRAC_START3_MODE0	COM_OFF(0xC0)
#define QSERDES_COM_DIV_FRAC_START1_MODE1	COM_OFF(0xC4)
#define QSERDES_COM_DIV_FRAC_START2_MODE1	COM_OFF(0xC8)
#define QSERDES_COM_DIV_FRAC_START3_MODE1	COM_OFF(0xCC)
#define QSERDES_COM_INTEGLOOP_INITVAL		COM_OFF(0xD0)
#define QSERDES_COM_INTEGLOOP_EN		COM_OFF(0xD4)
#define QSERDES_COM_INTEGLOOP_GAIN0_MODE0	COM_OFF(0xD8)
#define QSERDES_COM_INTEGLOOP_GAIN1_MODE0	COM_OFF(0xDC)
#define QSERDES_COM_INTEGLOOP_GAIN0_MODE1	COM_OFF(0xE0)
#define QSERDES_COM_INTEGLOOP_GAIN1_MODE1	COM_OFF(0xE4)
#define QSERDES_COM_VCOCAL_DEADMAN_CTRL		COM_OFF(0xE8)
#define QSERDES_COM_VCO_TUNE_CTRL		COM_OFF(0xEC)
#define QSERDES_COM_VCO_TUNE_MAP		COM_OFF(0xF0)
#define QSERDES_COM_VCO_TUNE1_MODE0		COM_OFF(0xF4)
#define QSERDES_COM_VCO_TUNE2_MODE0		COM_OFF(0xF8)
#define QSERDES_COM_VCO_TUNE1_MODE1		COM_OFF(0xFC)
#define QSERDES_COM_VCO_TUNE2_MODE1		COM_OFF(0x100)
#define QSERDES_COM_VCO_TUNE_INITVAL1		COM_OFF(0x104)
#define QSERDES_COM_VCO_TUNE_INITVAL2		COM_OFF(0x108)
#define QSERDES_COM_VCO_TUNE_MINVAL1		COM_OFF(0x10C)
#define QSERDES_COM_VCO_TUNE_MINVAL2		COM_OFF(0x110)
#define QSERDES_COM_VCO_TUNE_MAXVAL1		COM_OFF(0x114)
#define QSERDES_COM_VCO_TUNE_MAXVAL2		COM_OFF(0x118)
#define QSERDES_COM_VCO_TUNE_TIMER1		COM_OFF(0x11C)
#define QSERDES_COM_VCO_TUNE_TIMER2		COM_OFF(0x120)
#define QSERDES_COM_CMN_STATUS			COM_OFF(0x124)
#define QSERDES_COM_RESET_SM_STATUS		COM_OFF(0x128)
#define QSERDES_COM_RESTRIM_CODE_STATUS		COM_OFF(0x12C)
#define QSERDES_COM_PLLCAL_CODE1_STATUS		COM_OFF(0x130)
#define QSERDES_COM_PLLCAL_CODE2_STATUS		COM_OFF(0x134)
#define QSERDES_COM_CLK_SELECT			COM_OFF(0x138)
#define QSERDES_COM_HSCLK_SEL			COM_OFF(0x13C)
#define QSERDES_COM_INTEGLOOP_BINCODE_STATUS	COM_OFF(0x140)
#define QSERDES_COM_PLL_ANALOG			COM_OFF(0x144)
#define QSERDES_COM_CORECLK_DIV_MODE0		COM_OFF(0x148)
#define QSERDES_COM_CORECLK_DIV_MODE1		COM_OFF(0x14C)
#define QSERDES_COM_SW_RESET			COM_OFF(0x150)
#define QSERDES_COM_CORE_CLK_EN			COM_OFF(0x154)
#define QSERDES_COM_C_READY_STATUS		COM_OFF(0x158)
#define QSERDES_COM_CMN_CONFIG			COM_OFF(0x15C)
#define QSERDES_COM_CMN_RATE_OVERRIDE		COM_OFF(0x160)
#define QSERDES_COM_SVS_MODE_CLK_SEL		COM_OFF(0x164)
#define QSERDES_COM_DEBUG_BUS0			COM_OFF(0x168)
#define QSERDES_COM_DEBUG_BUS1			COM_OFF(0x16C)
#define QSERDES_COM_DEBUG_BUS2			COM_OFF(0x170)
#define QSERDES_COM_DEBUG_BUS3			COM_OFF(0x174)
#define QSERDES_COM_DEBUG_BUS_SEL		COM_OFF(0x178)
#define QSERDES_COM_CMN_MISC1			COM_OFF(0x17C)
#define QSERDES_COM_CMN_MISC2			COM_OFF(0x180)
#define QSERDES_COM_CMN_MODE			COM_OFF(0x184)
#define QSERDES_COM_CMN_VREG_SEL		COM_OFF(0x188)

/* UFS PHY TX registers */
#define QSERDES_TX0_RES_CODE_LANE_OFFSET_TX	TX_OFF(0, 0x44)
#define QSERDES_TX0_RES_CODE_LANE_OFFSET_RX	TX_OFF(0, 0x48)
#define QSERDES_TX0_TRANSCEIVER_BIAS_EN		TX_OFF(0, 0x5C)
#define QSERDES_TX0_LANE_MODE_1			TX_OFF(0, 0x8C)
#define QSERDES_TX0_LANE_MODE_2			TX_OFF(0, 0x90)
#define QSERDES_TX0_LANE_MODE_3			TX_OFF(0, 0x94)

#define QSERDES_TX1_RES_CODE_LANE_OFFSET_TX	TX_OFF(1, 0x44)
#define QSERDES_TX1_RES_CODE_LANE_OFFSET_RX	TX_OFF(1, 0x48)
#define QSERDES_TX1_LANE_MODE_1			TX_OFF(1, 0x8C)


/* UFS PHY RX registers */
#define QSERDES_RX0_UCDR_SVS_SO_GAIN_HALF		RX_OFF(0, 0x24)
#define QSERDES_RX0_UCDR_SVS_SO_GAIN_QUARTER		RX_OFF(0, 0x28)
#define QSERDES_RX0_UCDR_SVS_SO_GAIN			RX_OFF(0, 0x2C)
#define QSERDES_RX0_UCDR_FASTLOCK_FO_GAIN		RX_OFF(0, 0x30)
#define QSERDES_RX0_UCDR_SO_SATURATION_AND_ENABLE	RX_OFF(0, 0x34)
#define QSERDES_RX0_UCDR_FASTLOCK_COUNT_LOW		RX_OFF(0, 0x3C)
#define QSERDES_RX0_UCDR_PI_CONTROLS			RX_OFF(0, 0x44)
#define QSERDES_RX0_RX_TERM_BW				RX_OFF(0, 0x7C)
#define QSERDES_RX0_RX_EQ_GAIN2_LSB			RX_OFF(0, 0xC8)
#define QSERDES_RX0_RX_EQ_GAIN2_MSB			RX_OFF(0, 0xCC)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL1		RX_OFF(0, 0xD0)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL2		RX_OFF(0, 0xD4)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL3		RX_OFF(0, 0xD8)
#define QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL4		RX_OFF(0, 0xDC)
#define QSERDES_RX0_SIGDET_CNTRL			RX_OFF(0, 0x104)
#define QSERDES_RX0_SIGDET_LVL				RX_OFF(0, 0x108)
#define QSERDES_RX0_SIGDET_DEGLITCH_CNTRL		RX_OFF(0, 0x10C)
#define QSERDES_RX0_RX_INTERFACE_MODE			RX_OFF(0, 0x11C)
#define QSERDES_RX0_RX_MODE_00				RX_OFF(0, 0x164)
#define QSERDES_RX0_UCDR_FO_GAIN                        RX_OFF(0, 0x08)

#define QSERDES_RX1_UCDR_SVS_SO_GAIN_HALF		RX_OFF(1, 0x24)
#define QSERDES_RX1_UCDR_SVS_SO_GAIN_QUARTER		RX_OFF(1, 0x28)
#define QSERDES_RX1_UCDR_SVS_SO_GAIN			RX_OFF(1, 0x2C)
#define QSERDES_RX1_UCDR_FASTLOCK_FO_GAIN		RX_OFF(1, 0x30)
#define QSERDES_RX1_UCDR_SO_SATURATION_AND_ENABLE	RX_OFF(1, 0x34)
#define QSERDES_RX1_UCDR_FASTLOCK_COUNT_LOW		RX_OFF(1, 0x3C)
#define QSERDES_RX1_UCDR_PI_CONTROLS			RX_OFF(1, 0x44)
#define QSERDES_RX1_RX_TERM_BW				RX_OFF(1, 0x7C)
#define QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL2		RX_OFF(1, 0xD4)
#define QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL3		RX_OFF(1, 0xD8)
#define QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL4		RX_OFF(1, 0xDC)
#define QSERDES_RX1_SIGDET_CNTRL			RX_OFF(1, 0x104)
#define QSERDES_RX1_SIGDET_LVL				RX_OFF(1, 0x108)
#define QSERDES_RX1_SIGDET_DEGLITCH_CNTRL		RX_OFF(1, 0x10C)
#define QSERDES_RX1_RX_INTERFACE_MODE			RX_OFF(1, 0x11C)
#define QSERDES_RX1_RX_MODE_00				RX_OFF(1, 0x164)
#define QSERDES_RX1_UCDR_FO_GAIN			RX_OFF(1, 0x8)
#define UFS_PHY_RX_LINECFG_DISABLE_BIT		BIT(1)

/*
 * This structure represents the v3 specific phy.
 * common_cfg MUST remain the first field in this structure
 * in case extra fields are added. This way, when calling
 * get_ufs_qcom_phy() of generic phy, we can extract the
 * common phy structure (struct ufs_qcom_phy) out of it
 * regardless of the relevant specific phy.
 */
struct ufs_qcom_phy_qmp_v3 {
	struct ufs_qcom_phy common_cfg;
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_A[] = {
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_POWER_DOWN_CONTROL, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CMN_CONFIG, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYSCLK_EN_SEL, 0xD5),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_RESETSM_CNTRL, 0x20),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CLK_SELECT, 0x30),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SYS_CLK_CTRL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BIAS_EN_CLKBUFLR_EN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_BG_TIMER, 0x0A),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_HSCLK_SEL, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP_EN, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_CTRL, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CORE_CLK_EN, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_SVS_MODE_CLK_SEL, 0x05),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_IVCO, 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_INITVAL1, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_INITVAL2, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE0, 0x82),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE0, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE0, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE0, 0x36),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE0, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE0, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE1_MODE0, 0xDA),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE0, 0x01),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE0, 0xFF),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE0, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_DEC_START_MODE1, 0x98),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_CP_CTRL_MODE1, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_RCTRL_MODE1, 0x16),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_PLL_CCTRL_MODE1, 0x36),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN0_MODE1, 0x3F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_INTEGLOOP_GAIN1_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE1_MODE1, 0xC1),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE2_MODE1, 0x00),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP1_MODE1, 0x32),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_LOCK_CMP2_MODE1, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_LANE_MODE_1, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_INTERFACE_MODE, 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FASTLOCK_FO_GAIN, 0x0B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_TERM_BW, 0x5B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL2, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL3, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_EQU_ADAPTOR_CNTRL4, 0x1B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SVS_SO_GAIN_HALF, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SVS_SO_GAIN_QUARTER, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SVS_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_SO_SATURATION_AND_ENABLE, 0x5B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_PI_CONTROLS, 0x81),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FASTLOCK_COUNT_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_RES_CODE_LANE_OFFSET_TX, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX0_RES_CODE_LANE_OFFSET_RX, 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_RX_MODE_00, 0x59),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX0_UCDR_FO_GAIN, 0x0C),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL2, 0x6F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_LARGE_AMP_DRV_LVL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_SMALL_AMP_DRV_LVL, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SYM_RESYNC_CTRL, 0x03),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_MID_TERM_CTRL1, 0x43),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_LARGE_AMP_POST_EMP_LVL, 0x12),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_TX_SMALL_AMP_POST_EMP_LVL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_SIGDET_CTRL1, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_RX_MIN_HIBERN8_TIME, 0xFF),/* 13 us */
};

static struct ufs_qcom_phy_calibration phy_cal_table_2nd_lane[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_LANE_MODE_1, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_LVL, 0x24),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_CNTRL, 0x0F),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_SIGDET_DEGLITCH_CNTRL, 0x1E),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_INTERFACE_MODE, 0x40),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FASTLOCK_FO_GAIN, 0x0B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_TERM_BW, 0x5B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL2, 0x06),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL3, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_EQU_ADAPTOR_CNTRL4, 0x1B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SVS_SO_GAIN_HALF, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SVS_SO_GAIN_QUARTER, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SVS_SO_GAIN, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_SO_SATURATION_AND_ENABLE, 0x5B),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_PI_CONTROLS, 0x81),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FASTLOCK_COUNT_LOW, 0x80),
	UFS_QCOM_PHY_CAL_ENTRY(UFS_PHY_MULTI_LANE_CTRL1, 0x02),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_RES_CODE_LANE_OFFSET_TX, 0x04),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_TX1_RES_CODE_LANE_OFFSET_RX, 0x07),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_RX_MODE_00, 0x59),
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_RX1_UCDR_FO_GAIN, 0x0C),
};

static struct ufs_qcom_phy_calibration phy_cal_table_rate_B[] = {
	UFS_QCOM_PHY_CAL_ENTRY(QSERDES_COM_VCO_TUNE_MAP, 0x44),
};

#endif
