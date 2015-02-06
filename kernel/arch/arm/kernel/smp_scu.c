/*
 *  linux/arch/arm/kernel/smp_scu.c
 *
 *  Copyright (C) 2002 ARM Ltd.
 *  All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/init.h>
#include <linux/io.h>

#include <asm/smp_scu.h>
#include <asm/cacheflush.h>

#define SCU_CTRL		0x00
#define SCU_CONFIG		0x04
#define SCU_CPU_STATUS		0x08
#define SCU_INVALIDATE		0x0c
#define SCU_FPGA_REVISION	0x10

/*
 * Get the number of CPU cores from the SCU configuration
 */
unsigned int __init scu_get_core_count(void __iomem *scu_base)
{
	unsigned int ncores = __raw_readl(scu_base + SCU_CONFIG);
	return (ncores & 0x03) + 1;
}

#if 1 //wschen 2011-07-06
#define SCU_EN          (1 << 0)
#define SCU_STANDBY_EN  (1 << 5)
#define IC_STANDBY_EN   (1 << 6)
#endif

/*
 * Enable the SCU
 */
void __init scu_enable(void __iomem *scu_base)
{
	u32 scu_ctrl;

	scu_ctrl = __raw_readl(scu_base + SCU_CTRL);
	/* already enabled? */
	if (scu_ctrl & 1)
		return;

        /* invalidate the SCU tag RAMs */
	__raw_writel(0x0000FFFF, scu_base + SCU_INVALIDATE);

#if 0 //wschen 2011-07-06
	scu_ctrl |= 1;
#else
	scu_ctrl |= (SCU_EN | SCU_STANDBY_EN | IC_STANDBY_EN);
#endif
	__raw_writel(scu_ctrl, scu_base + SCU_CTRL);

	/*
	 * Ensure that the data accessed by CPU0 before the SCU was
	 * initialised is visible to the other CPUs.
	 */
	flush_cache_all();
}
