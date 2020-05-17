/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'CPU' in SOPC Builder design 'traffic_light'
 * SOPC Builder design path: ../../traffic_light.sopcinfo
 *
 * Generated: Wed May 13 10:42:24 BRT 2020
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CODE_MEMORY configuration
 *
 */

#define ALT_MODULE_CLASS_CODE_MEMORY altera_avalon_onchip_memory2
#define CODE_MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define CODE_MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define CODE_MEMORY_BASE 0x20000
#define CODE_MEMORY_CONTENTS_INFO ""
#define CODE_MEMORY_DUAL_PORT 0
#define CODE_MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define CODE_MEMORY_INIT_CONTENTS_FILE "traffic_light_CODE_MEMORY"
#define CODE_MEMORY_INIT_MEM_CONTENT 1
#define CODE_MEMORY_INSTANCE_ID "NONE"
#define CODE_MEMORY_IRQ -1
#define CODE_MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CODE_MEMORY_NAME "/dev/CODE_MEMORY"
#define CODE_MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define CODE_MEMORY_RAM_BLOCK_TYPE "AUTO"
#define CODE_MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define CODE_MEMORY_SINGLE_CLOCK_OP 0
#define CODE_MEMORY_SIZE_MULTIPLE 1
#define CODE_MEMORY_SIZE_VALUE 80000
#define CODE_MEMORY_SPAN 80000
#define CODE_MEMORY_TYPE "altera_avalon_onchip_memory2"
#define CODE_MEMORY_WRITABLE 1


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00040820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x13
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00020020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "CPU"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00020000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00040820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x13
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00020020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00020000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2


/*
 * HEX_0 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_0 altera_avalon_pio
#define HEX_0_BASE 0x41070
#define HEX_0_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_0_CAPTURE 0
#define HEX_0_DATA_WIDTH 4
#define HEX_0_DO_TEST_BENCH_WIRING 0
#define HEX_0_DRIVEN_SIM_VALUE 0
#define HEX_0_EDGE_TYPE "NONE"
#define HEX_0_FREQ 50000000
#define HEX_0_HAS_IN 0
#define HEX_0_HAS_OUT 1
#define HEX_0_HAS_TRI 0
#define HEX_0_IRQ -1
#define HEX_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_0_IRQ_TYPE "NONE"
#define HEX_0_NAME "/dev/HEX_0"
#define HEX_0_RESET_VALUE 0
#define HEX_0_SPAN 16
#define HEX_0_TYPE "altera_avalon_pio"


/*
 * HEX_1 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_1 altera_avalon_pio
#define HEX_1_BASE 0x41060
#define HEX_1_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_1_CAPTURE 0
#define HEX_1_DATA_WIDTH 4
#define HEX_1_DO_TEST_BENCH_WIRING 0
#define HEX_1_DRIVEN_SIM_VALUE 0
#define HEX_1_EDGE_TYPE "NONE"
#define HEX_1_FREQ 50000000
#define HEX_1_HAS_IN 0
#define HEX_1_HAS_OUT 1
#define HEX_1_HAS_TRI 0
#define HEX_1_IRQ -1
#define HEX_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_1_IRQ_TYPE "NONE"
#define HEX_1_NAME "/dev/HEX_1"
#define HEX_1_RESET_VALUE 0
#define HEX_1_SPAN 16
#define HEX_1_TYPE "altera_avalon_pio"


/*
 * HEX_2 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_2 altera_avalon_pio
#define HEX_2_BASE 0x41050
#define HEX_2_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_2_CAPTURE 0
#define HEX_2_DATA_WIDTH 8
#define HEX_2_DO_TEST_BENCH_WIRING 0
#define HEX_2_DRIVEN_SIM_VALUE 0
#define HEX_2_EDGE_TYPE "NONE"
#define HEX_2_FREQ 50000000
#define HEX_2_HAS_IN 0
#define HEX_2_HAS_OUT 1
#define HEX_2_HAS_TRI 0
#define HEX_2_IRQ -1
#define HEX_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_2_IRQ_TYPE "NONE"
#define HEX_2_NAME "/dev/HEX_2"
#define HEX_2_RESET_VALUE 0
#define HEX_2_SPAN 16
#define HEX_2_TYPE "altera_avalon_pio"


/*
 * HEX_3 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_3 altera_avalon_pio
#define HEX_3_BASE 0x41040
#define HEX_3_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_3_CAPTURE 0
#define HEX_3_DATA_WIDTH 8
#define HEX_3_DO_TEST_BENCH_WIRING 0
#define HEX_3_DRIVEN_SIM_VALUE 0
#define HEX_3_EDGE_TYPE "NONE"
#define HEX_3_FREQ 50000000
#define HEX_3_HAS_IN 0
#define HEX_3_HAS_OUT 1
#define HEX_3_HAS_TRI 0
#define HEX_3_IRQ -1
#define HEX_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_3_IRQ_TYPE "NONE"
#define HEX_3_NAME "/dev/HEX_3"
#define HEX_3_RESET_VALUE 0
#define HEX_3_SPAN 16
#define HEX_3_TYPE "altera_avalon_pio"


/*
 * HEX_4 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_4 altera_avalon_pio
#define HEX_4_BASE 0x41030
#define HEX_4_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_4_CAPTURE 0
#define HEX_4_DATA_WIDTH 8
#define HEX_4_DO_TEST_BENCH_WIRING 0
#define HEX_4_DRIVEN_SIM_VALUE 0
#define HEX_4_EDGE_TYPE "NONE"
#define HEX_4_FREQ 50000000
#define HEX_4_HAS_IN 0
#define HEX_4_HAS_OUT 1
#define HEX_4_HAS_TRI 0
#define HEX_4_IRQ -1
#define HEX_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_4_IRQ_TYPE "NONE"
#define HEX_4_NAME "/dev/HEX_4"
#define HEX_4_RESET_VALUE 0
#define HEX_4_SPAN 16
#define HEX_4_TYPE "altera_avalon_pio"


/*
 * HEX_5 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_5 altera_avalon_pio
#define HEX_5_BASE 0x41020
#define HEX_5_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_5_CAPTURE 0
#define HEX_5_DATA_WIDTH 8
#define HEX_5_DO_TEST_BENCH_WIRING 0
#define HEX_5_DRIVEN_SIM_VALUE 0
#define HEX_5_EDGE_TYPE "NONE"
#define HEX_5_FREQ 50000000
#define HEX_5_HAS_IN 0
#define HEX_5_HAS_OUT 1
#define HEX_5_HAS_TRI 0
#define HEX_5_IRQ -1
#define HEX_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_5_IRQ_TYPE "NONE"
#define HEX_5_NAME "/dev/HEX_5"
#define HEX_5_RESET_VALUE 0
#define HEX_5_SPAN 16
#define HEX_5_TYPE "altera_avalon_pio"


/*
 * LED configuration
 *
 */

#define ALT_MODULE_CLASS_LED altera_avalon_pio
#define LED_BASE 0x0
#define LED_BIT_CLEARING_EDGE_REGISTER 0
#define LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_CAPTURE 0
#define LED_DATA_WIDTH 1
#define LED_DO_TEST_BENCH_WIRING 0
#define LED_DRIVEN_SIM_VALUE 0
#define LED_EDGE_TYPE "NONE"
#define LED_FREQ 50000000
#define LED_HAS_IN 0
#define LED_HAS_OUT 1
#define LED_HAS_TRI 0
#define LED_IRQ -1
#define LED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_IRQ_TYPE "NONE"
#define LED_NAME "/dev/LED"
#define LED_RESET_VALUE 0
#define LED_SPAN 16
#define LED_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x410c8
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x410c8
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x410c8
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "traffic_light"


/*
 * TL_0 configuration
 *
 */

#define ALT_MODULE_CLASS_TL_0 altera_avalon_pio
#define TL_0_BASE 0x410a0
#define TL_0_BIT_CLEARING_EDGE_REGISTER 0
#define TL_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TL_0_CAPTURE 0
#define TL_0_DATA_WIDTH 3
#define TL_0_DO_TEST_BENCH_WIRING 0
#define TL_0_DRIVEN_SIM_VALUE 0
#define TL_0_EDGE_TYPE "NONE"
#define TL_0_FREQ 50000000
#define TL_0_HAS_IN 0
#define TL_0_HAS_OUT 1
#define TL_0_HAS_TRI 0
#define TL_0_IRQ -1
#define TL_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TL_0_IRQ_TYPE "NONE"
#define TL_0_NAME "/dev/TL_0"
#define TL_0_RESET_VALUE 0
#define TL_0_SPAN 16
#define TL_0_TYPE "altera_avalon_pio"


/*
 * TL_1 configuration
 *
 */

#define ALT_MODULE_CLASS_TL_1 altera_avalon_pio
#define TL_1_BASE 0x410b0
#define TL_1_BIT_CLEARING_EDGE_REGISTER 0
#define TL_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TL_1_CAPTURE 0
#define TL_1_DATA_WIDTH 3
#define TL_1_DO_TEST_BENCH_WIRING 0
#define TL_1_DRIVEN_SIM_VALUE 0
#define TL_1_EDGE_TYPE "NONE"
#define TL_1_FREQ 50000000
#define TL_1_HAS_IN 0
#define TL_1_HAS_OUT 1
#define TL_1_HAS_TRI 0
#define TL_1_IRQ -1
#define TL_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TL_1_IRQ_TYPE "NONE"
#define TL_1_NAME "/dev/TL_1"
#define TL_1_RESET_VALUE 0
#define TL_1_SPAN 16
#define TL_1_TYPE "altera_avalon_pio"


/*
 * TL_2 configuration
 *
 */

#define ALT_MODULE_CLASS_TL_2 altera_avalon_pio
#define TL_2_BASE 0x41090
#define TL_2_BIT_CLEARING_EDGE_REGISTER 0
#define TL_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TL_2_CAPTURE 0
#define TL_2_DATA_WIDTH 3
#define TL_2_DO_TEST_BENCH_WIRING 0
#define TL_2_DRIVEN_SIM_VALUE 0
#define TL_2_EDGE_TYPE "NONE"
#define TL_2_FREQ 50000000
#define TL_2_HAS_IN 0
#define TL_2_HAS_OUT 1
#define TL_2_HAS_TRI 0
#define TL_2_IRQ -1
#define TL_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TL_2_IRQ_TYPE "NONE"
#define TL_2_NAME "/dev/TL_2"
#define TL_2_RESET_VALUE 0
#define TL_2_SPAN 16
#define TL_2_TYPE "altera_avalon_pio"


/*
 * TL_3 configuration
 *
 */

#define ALT_MODULE_CLASS_TL_3 altera_avalon_pio
#define TL_3_BASE 0x41080
#define TL_3_BIT_CLEARING_EDGE_REGISTER 0
#define TL_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define TL_3_CAPTURE 0
#define TL_3_DATA_WIDTH 3
#define TL_3_DO_TEST_BENCH_WIRING 0
#define TL_3_DRIVEN_SIM_VALUE 0
#define TL_3_EDGE_TYPE "NONE"
#define TL_3_FREQ 50000000
#define TL_3_HAS_IN 0
#define TL_3_HAS_OUT 1
#define TL_3_HAS_TRI 0
#define TL_3_IRQ -1
#define TL_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define TL_3_IRQ_TYPE "NONE"
#define TL_3_NAME "/dev/TL_3"
#define TL_3_RESET_VALUE 0
#define TL_3_SPAN 16
#define TL_3_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x410c8
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x410c0
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1589309397
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_0 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_BASE 0x41000
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_FREQ 50000000
#define TIMER_0_IRQ 1
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_LOAD_VALUE 49999
#define TIMER_0_MULT 0.001
#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_SPAN 32
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
