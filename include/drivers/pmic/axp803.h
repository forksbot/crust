/*
 * Copyright © 2017-2019 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#ifndef DRIVERS_PMIC_AXP803_H
#define DRIVERS_PMIC_AXP803_H

#include <irq.h>
#include <pmic.h>
#include <rsb.h>

struct axp803_pmic {
	struct device     dev;
	struct rsb_handle bus;
};

extern struct axp803_pmic axp803_pmic;

#endif /* DRIVERS_PMIC_AXP803_H */
