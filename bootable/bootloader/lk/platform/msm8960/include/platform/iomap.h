/* Copyright (c) 2008, Google Inc.
 * All rights reserved.
 *
 * Copyright (c) 2009-2011, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of Google, Inc. nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _PLATFORM_MSM8960_IOMAP_H_
#define _PLATFORM_MSM8960_IOMAP_H_

#define MSM_SHARED_IMEM_BASE 0x2A03F000
#define RESTART_REASON_ADDR  (MSM_SHARED_IMEM_BASE + 0x65C)

#define MSM_TCSR_BASE       0x1A400000
#define MSM_GIC_DIST_BASE   0x02000000
#define MSM_TMR_BASE        0x0200A000
#define MSM_GIC_CPU_BASE    0x02002000
#define MSM_VIC_BASE        0x02080000
#define MSM_USB_BASE        0x12500000
#define MSM_UART3_BASE      0xA9C00000
#define TLMM_BASE_ADDR      0x00800000

#define MSM_GPT_BASE        (MSM_TMR_BASE + 0x04)
#define MSM_CSR_BASE        0x02081000
#define MSM_GCC_BASE        0x02082000
#define MSM_ACC0_BASE       0x02041000
#define MSM_ACC1_BASE       0x02051000

#define TCSR_WDOG_CFG       0x30
#define MSM_WDT0_RST        (MSM_TMR_BASE + 0x38)
#define MSM_WDT0_EN         (MSM_TMR_BASE + 0x40)
#define MSM_WDT0_BT         (MSM_TMR_BASE + 0x4C)
#define MSM_PSHOLD_CTL_SU   (TLMM_BASE_ADDR + 0x820)

#define MSM_SDC1_BASE       0x12400000
#define MSM_SDC2_BASE       0x12140000
#define MSM_SDC3_BASE       0x12180000
#define MSM_SDC4_BASE       0x121C0000

#define MSM_SHARED_BASE     0x80000000

#define GPIO_CFG133_ADDR    0x00801850
#define GPIO_CFG135_ADDR    0x00801870
#define GPIO_CFG136_ADDR    0x00801880
#define GPIO_CFG137_ADDR    0x00801890
#define GPIO_CFG138_ADDR    0x008018A0
#define GPIO_CFG139_ADDR    0x008018B0
#define GPIO_CFG140_ADDR    0x008018C0
#define GPIO_CFG141_ADDR    0x008018D0
#define GPIO_CFG142_ADDR    0x008018E0
#define GPIO_CFG143_ADDR    0x008018F0
#define GPIO_CFG144_ADDR    0x00801900
#define GPIO_CFG145_ADDR    0x00801910
#define GPIO_CFG146_ADDR    0x00801920
#define GPIO_CFG147_ADDR    0x00801930
#define GPIO_CFG148_ADDR    0x00801940
#define GPIO_CFG149_ADDR    0x00801950
#define GPIO_CFG150_ADDR    0x00801960
#define GPIO_CFG151_ADDR    0x00801970
#define GPIO_CFG152_ADDR    0x00801980
#define GPIO_CFG153_ADDR    0x00801990
#define GPIO_CFG154_ADDR    0x008019A0
#define GPIO_CFG155_ADDR    0x008019B0
#define GPIO_CFG156_ADDR    0x008019C0
#define GPIO_CFG157_ADDR    0x008019D0
#define GPIO_CFG158_ADDR    0x008019E0

#define GSBI1_BASE          0x16000000
#define GSBI2_BASE          0x16100000
#define GSBI3_BASE          0x16200000
#define GSBI4_BASE          0x16300000
#define GSBI5_BASE          0x16400000
#define GSBI6_BASE          0x16500000
#define GSBI7_BASE          0x16600000
#define GSBI8_BASE          0x19800000
#define GSBI9_BASE          0x19900000
#define GSBI10_BASE         0x19A00000
#define GSBI11_BASE         0x19B00000
#define GSBI12_BASE         0x19C00000

#define GSBI1_QUP_BASE      (GSBI1_BASE  + 0x80000)
#define GSBI2_QUP_BASE      (GSBI2_BASE  + 0x80000)
#define GSBI3_QUP_BASE      (GSBI3_BASE  + 0x80000)
#define GSBI4_QUP_BASE      (GSBI4_BASE  + 0x80000)
#define GSBI5_QUP_BASE      (GSBI5_BASE  + 0x80000)
#define GSBI6_QUP_BASE      (GSBI6_BASE  + 0x80000)
#define GSBI7_QUP_BASE      (GSBI7_BASE  + 0x80000)
#define GSBI8_QUP_BASE      (GSBI8_BASE  + 0x80000)
#define GSBI9_QUP_BASE      (GSBI9_BASE  + 0x80000)
#define GSBI10_QUP_BASE     (GSBI10_BASE + 0x80000)
#define GSBI11_QUP_BASE     (GSBI11_BASE + 0x80000)
#define GSBI12_QUP_BASE     (GSBI12_BASE + 0x80000)

#define GSBI_CTL_PROTOCOL_CODE_I2C (0x20)

#define EBI2_CHIP_SELECT_CFG0   0x1A100000
#define EBI2_XMEM_CS3_CFG1      0x1A110034

#define CLK_CTL_BASE             0x00900000
#define SDC_MD(n)               (CLK_CTL_BASE + 0x2828 + (32 * ((n) - 1)))
#define SDC_NS(n)               (CLK_CTL_BASE + 0x282C + (32 * ((n) - 1)))
#define USB_HS1_HCLK_CTL        (CLK_CTL_BASE + 0x2900)
#define USB_HS1_XCVR_FS_CLK_MD  (CLK_CTL_BASE + 0x2908)
#define USB_HS1_XCVR_FS_CLK_NS  (CLK_CTL_BASE + 0x290C)
#define GSBIn_HCLK_CTL(n)       (CLK_CTL_BASE + 0x29C0 + (32 * ((n) - 1)))
#define GSBIn_HCLK_FS(n)        (CLK_CTL_BASE + 0x29C4 + (32 * ((n) - 1)))
#define GSBIn_QUP_APPS_MD(n)    (CLK_CTL_BASE + 0x29D0 + (32 * ((n) - 1)))
#define GSBIn_QUP_APPS_NS(n)    (CLK_CTL_BASE + 0x29D4 + (32 * ((n) - 1)))
#define MSM_BOOT_PLL8_STATUS    (CLK_CTL_BASE + 0x3158)
#define MSM_BOOT_PLL_ENABLE_SC0 (CLK_CTL_BASE + 0x34C0)

#endif
