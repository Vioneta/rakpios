/*
 * ALSA SoC TAS2505 codec driver
 *
 * Author: Hieu Tran Dang <dangtranhieu2012@gmail.com>
 *
 * This package is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * THIS PACKAGE IS PROVIDED AS IS AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef _TAS2505_H
#define _TAS2505_H

#define TAS2505_RATES	(SNDRV_PCM_RATE_8000_96000)
#define TAS2505_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | \
	SNDRV_PCM_FMTBIT_S24_LE | \
	SNDRV_PCM_FMTBIT_S32_LE)

#define TAS2505_REG(page, reg)	((page * 128) + reg)

#define TAS2505_PAGECTL			TAS2505_REG(0, 0)
#define TAS2505_RESET			TAS2505_REG(0, 1)
#define TAS2505_CLKMUX			TAS2505_REG(0, 4)
#define TAS2505_PLLPR			TAS2505_REG(0, 5)
#define TAS2505_PLLJ			TAS2505_REG(0, 6)
#define TAS2505_PLLDMSB			TAS2505_REG(0, 7)
#define TAS2505_PLLDLSB			TAS2505_REG(0, 8)
#define TAS2505_NDAC			TAS2505_REG(0, 11)
#define TAS2505_MDAC			TAS2505_REG(0, 12)
#define TAS2505_DOSRMSB			TAS2505_REG(0, 13)
#define TAS2505_DOSRLSB			TAS2505_REG(0, 14)
#define TAS2505_IFACE1			TAS2505_REG(0, 27)
#define TAS2505_IFACE3			TAS2505_REG(0, 29)
#define TAS2505_BCLKNDIV		TAS2505_REG(0, 30)
#define TAS2505_DACFLAG1		TAS2505_REG(0, 37)
#define TAS2505_DACFLAG2		TAS2505_REG(0, 38)
#define TAS2505_STICKYFLAG1		TAS2505_REG(0, 42)
#define TAS2505_INTFLAG1		TAS2505_REG(0, 43)
#define TAS2505_STICKYFLAG2		TAS2505_REG(0, 44)
#define TAS2505_INTFLAG2		TAS2505_REG(0, 46)
#define TAS2505_DACINSTRSET		TAS2505_REG(0, 60)
#define TAS2505_DACSETUP1		TAS2505_REG(0, 63)
#define TAS2505_DACSETUP2		TAS2505_REG(0, 64)
#define TAS2505_DACVOL			TAS2505_REG(0, 65)
#define TAS2505_REF_POR_LDO_BGAP_CTRL	TAS2505_REG(1, 1)
#define TAS2505_LDO_CTRL		TAS2505_REG(1, 2)
#define TAS2505_PLAYBACKCONF1		TAS2505_REG(1, 3)
#define TAS2505_SPKAMPCTRL1		TAS2505_REG(1, 45)
#define TAS2505_SPKVOL1			TAS2505_REG(1, 46)
#define TAS2505_SPKVOL2			TAS2505_REG(1, 48)
#define TAS2505_DACANLGAINFLAG		TAS2505_REG(1, 63)

#define TAS2505_PLLPR_P_MASK				(0x70)
#define TAS2505_PLLPR_R_MASK				(0xf)
#define TAS2505_PLL_DAC_MASK				(0x7f)
#define TAS2505_BCLKNDIV_MASK				(0x7f)
#define TAS2505_IFACE1_DATALEN_MASK			(0x30)
#define TAS2505_IFACE1_WCLKDIR_MASK			(0x4)
#define TAS2505_IFACE1_BCLKDIR_MASK			(0x8)
#define TAS2505_IFACE1_INTERFACE_MASK			(0xc0)
#define TAS2505_IFACE3_BDIVCLKIN_MASK			(0x1)
#define TAS2505_IFACE3_BCLKINV_MASK			(0x8)
#define TAS2505_DACSETUP1_PATH_CTRL_MSK			(0x30)
#define TAS2505_DACSETUP2_MUTE_MASK			(0x8)
#define TAS2505_PM_MASK					(0x80)
#define TAS2505_LDO_PLL_HP_LVL_MASK			(0x8)
#define TAS2505_REF_POR_LDO_BGAP_MASTER_REF_MASK	(0x10)
#define TAS2505_SPKVOL2_MSK				(0x70)
#define TAS2505_CODEC_CLKIN_MSK				(0x3)
#define TAS2505_PLL_INPUT_CLK_MSK			(0xC)
#define TAS2505_SPKAMPCTRL1_SPKDRV_MSK			BIT(1)

#define TAS2505_PLLPR_P_SHIFT			(4)
#define TAS2505_PLL_CLKIN_SHIFT			(2)
#define TAS2505_IFACE1_DATALEN_SHIFT		(4)
#define TAS2505_IFACE1_INTERFACE_SHIFT		(6)
#define TAS2505_IFACE3_BCLKINV_SHIFT		(4)
#define TAS2505_SPKVOL2_6DB_SHIFT		(4)
#define TAS2505_DACSETUP1_PATH_CTRL_SHIFT	(4)

#define TAS2505_WORD_LEN_20BITS			(1)
#define TAS2505_WORD_LEN_24BITS			(2)
#define TAS2505_WORD_LEN_32BITS			(3)

#define TAS2505_DSP_MODE			(1)
#define TAS2505_RJF_MODE			(2)
#define TAS2505_LJF_MODE			(3)

#define TAS2505_PLL_CLKIN_MCLK			(0)
#define TAS2505_PLL_CLKIN_BCLK			(1)
#define TAS2505_PLL_CLKIN_GPIO			(2)
#define TAS2505_PLL_CLKIN_DIN			(3)
#define TAS2505_CODEC_CLKIN_PLL			(3)
#define TAS2505_SPKVOL2_MUTE			(0)
#define TAS2505_SPKVOL2_6DB			(1)
#define TAS2505_DACSETUP1_PATH_CTRL_LRDIV2	(3)
#define TAS2505_SPKAMPCTRL1_SPKDRV_PWD		(0)
#define TAS2505_SPKAMPCTRL1_SPKDRV_PWU		(1)

#endif
