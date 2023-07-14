#ifndef __AW_CONFIG_H__
#define __AW_CONFIG_H__

#define AW869X_BSTCFG_PEAKCUR_LIMIT	0x07
#define AW8695_DEFAULT_PEAKCUR		AW869X_BIT_BSTCFG_PEAKCUR_2A
#define AW8697_DEFAULT_PEAKCUR		AW869X_BIT_BSTCFG_PEAKCUR_3P5A
#define AW869X_CONT_PLAYBACK_MODE	AW869X_BIT_CONT_CTRL_CLOSE_PLAYBACK

#define AW86907_BSTCFG_PEAKCUR_LIMIT	0x0e
#define AW86907_DEFAULT_PEAKCUR		AW86907_BIT_BSTCFG1_PEAKCUR_4A

#define AW86927_BSTCFG_PEAKCUR_LIMIT	0x90
#define AW86927_DEFAULT_PEAKCUR		AW86927_BIT_ANACFG13_PEAKCUR_3P45A
/*#define CONFIG_DEBUG_FS*/

/*#ifdef INPUT_DEV*/
#if 1
/* haptics module register definitions */
#define REG_HAP_STATUS1			0x0A
#define HAP_SC_DET_BIT			BIT(3)
#define HAP_BUSY_BIT			BIT(1)

#define REG_HAP_EN_CTL1			0x46
#define HAP_EN_BIT			BIT(7)

#define REG_HAP_EN_CTL2			0x48
#define HAP_AUTO_STANDBY_EN_BIT		BIT(1)
#define HAP_BRAKE_EN_BIT		BIT(0)

#define REG_HAP_EN_CTL3			0x4A
#define HAP_HBRIDGE_EN_BIT		BIT(7)
#define HAP_PWM_SIGNAL_EN_BIT		BIT(6)
#define HAP_ILIM_EN_BIT			BIT(5)
#define HAP_ILIM_CC_EN_BIT		BIT(4)
#define HAP_AUTO_RES_RBIAS_EN_BIT	BIT(3)
#define HAP_DAC_EN_BIT			BIT(2)
#define HAP_ZX_HYST_EN_BIT		BIT(1)
#define HAP_PWM_CTL_EN_BIT		BIT(0)

#define REG_HAP_AUTO_RES_CTRL		0x4B
#define HAP_AUTO_RES_EN_BIT		BIT(7)
#define HAP_SEL_AUTO_RES_PERIOD		BIT(6)
#define HAP_AUTO_RES_CNT_ERR_DELTA_MASK	GENMASK(5, 4)
#define HAP_AUTO_RES_CNT_ERR_DELTA_SHIFT	4
#define HAP_AUTO_RES_ERR_RECOVERY_BIT	BIT(3)
#define HAP_AUTO_RES_EN_DLY_MASK	GENMASK(2, 0)
#define AUTO_RES_CNT_ERR_DELTA(x)	(x << HAP_AUTO_RES_CNT_ERR_DELTA_SHIFT)
#define AUTO_RES_EN_DLY(x)		x

#define REG_HAP_CFG1			0x4C
#define REG_HAP_CFG2			0x4D
#define HAP_LRA_RES_TYPE_BIT		BIT(0)

#define REG_HAP_SEL			0x4E
#define HAP_WF_SOURCE_MASK		GENMASK(5, 4)
#define HAP_WF_SOURCE_SHIFT		4
#define HAP_WF_TRIGGER_BIT		BIT(0)
#define HAP_WF_SOURCE_VMAX		(0 << HAP_WF_SOURCE_SHIFT)
#define HAP_WF_SOURCE_BUFFER		(1 << HAP_WF_SOURCE_SHIFT)
#define HAP_WF_SOURCE_AUDIO		(2 << HAP_WF_SOURCE_SHIFT)
#define HAP_WF_SOURCE_PWM		(3 << HAP_WF_SOURCE_SHIFT)

#define REG_HAP_AUTO_RES_CFG		0x4F
#define HAP_AUTO_RES_MODE_BIT		BIT(7)
#define HAP_AUTO_RES_MODE_SHIFT		7
#define HAP_AUTO_RES_CAL_DURATON_MASK	GENMASK(6, 5)
#define HAP_CAL_EOP_EN_BIT		BIT(3)
#define HAP_CAL_PERIOD_MASK		GENMASK(2, 0)
#define HAP_CAL_OPT3_EVERY_8_PERIOD	2

#define REG_HAP_SLEW_CFG		0x50
#define REG_HAP_VMAX_CFG		0x51
#define HAP_VMAX_SIGN_BIT		BIT(7)
#define HAP_VMAX_OVD_BIT		BIT(6)
#define HAP_VMAX_MV_MASK		GENMASK(5, 1)
#define HAP_VMAX_MV_SHIFT		1
#define HAP_VMAX_MV_LSB			116

#define REG_HAP_ILIM_CFG		0x52
#define HAP_ILIM_SEL_1000MA		BIT(1)
#define HAP_ILIM_DEFAULT_SEL		HAP_ILIM_SEL_1000MA
#define REG_HAP_SC_DEB_CFG		0x53
#define REG_HAP_RATE_CFG1		0x54
#define REG_HAP_RATE_CFG2		0x55
#define REG_HAP_INTERNAL_PWM		0x56
#define REG_HAP_EXTERNAL_PWM		0x57
#define REG_HAP_PWM			0x58

#define REG_HAP_SC_CLR			0x59
#define HAP_SC_CLR_BIT			BIT(0)

#define REG_HAP_ZX_CFG			0x5A
#define HAP_ZX_DET_DEB_MASK		GENMASK(2, 0)
#define ZX_DET_DEB_10US			0
#define ZX_DET_DEB_20US			1
#define ZX_DET_DEB_40US			2
#define ZX_DET_DEB_80US			3

#define REG_HAP_BRAKE			0x5C
#define HAP_BRAKE_PATTERN_MASK		0x3
#define HAP_BRAKE_PATTERN_SHIFT		2

#define REG_HAP_WF_REPEAT		0x5E
#define HAP_WF_REPEAT_MASK		GENMASK(6, 4)
#define HAP_WF_REPEAT_SHIFT		4
#define HAP_WF_S_REPEAT_MASK		GENMASK(1, 0)

#define REG_HAP_WF_S1			0x60
#define HAP_WF_SIGN_BIT			BIT(7)
#define HAP_WF_OVD_BIT			BIT(6)
#define HAP_WF_AMP_BIT			GENMASK(5, 1)
#define HAP_WF_AMP_SHIFT		1

#define REG_HAP_PLAY			0x70
#define HAP_PLAY_BIT			BIT(7)

#define REG_HAP_SEC_ACCESS		0xD0

static int wf_repeat[8] = { 1, 2, 4, 8, 16, 32, 64, 128 };
static int wf_s_repeat[4] = { 1, 2, 4, 8 };
#endif
#endif
