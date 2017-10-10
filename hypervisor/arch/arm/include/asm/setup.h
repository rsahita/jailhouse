/*
 * Jailhouse, a Linux-based partitioning hypervisor
 *
 * Copyright (c) ARM Limited, 2014
 *
 * Authors:
 *  Jean-Philippe Brucker <jean-philippe.brucker@arm.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2.  See
 * the COPYING file in the top-level directory.
 */

#ifndef _JAILHOUSE_ASM_SETUP_H
#define _JAILHOUSE_ASM_SETUP_H

#include <asm/percpu.h>

#ifndef __ASSEMBLY__

int switch_exception_level(struct per_cpu *cpu_data);

#endif /* !__ASSEMBLY__ */
#endif /* !_JAILHOUSE_ASM_SETUP_H */
