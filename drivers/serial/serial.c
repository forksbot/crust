/*
 * Copyright © 2017-2020 The Crust Firmware Authors.
 * SPDX-License-Identifier: BSD-3-Clause OR GPL-2.0-only
 */

#include <mmio.h>
#include <serial.h>
#include <util.h>
#include <platform/devices.h>

enum {
	UART_THR = 0x0000,
	UART_LSR = 0x0014,
};

enum {
	UART_LSR_THRE = BIT(5),
};

void
serial_putc(char c)
{
	if (c == '\n')
		serial_putc('\r');
	mmio_poll_32(DEV_UART0 + UART_LSR, UART_LSR_THRE);
	mmio_write_32(DEV_UART0 + UART_THR, c);
}
