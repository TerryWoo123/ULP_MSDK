/**
 * @file    tmr_regs.h
 * @brief   Registers, Bit Masks and Bit Positions for the TMR Peripheral Module.
 * @note    This file is @generated.
 * @ingroup tmr_registers
 */

/******************************************************************************
 *
 * Copyright (C) 2022-2023 Maxim Integrated Products, Inc. (now owned by 
 * Analog Devices, Inc.),
 * Copyright (C) 2023-2024 Analog Devices, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#ifndef LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32650_INCLUDE_TMR_REGS_H_
#define LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32650_INCLUDE_TMR_REGS_H_

/* **** Includes **** */
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined (__ICCARM__)
  #pragma system_include
#endif

#if defined (__CC_ARM)
  #pragma anon_unions
#endif
/// @cond
/*
    If types are not defined elsewhere (CMSIS) define them here
*/
#ifndef __IO
#define __IO volatile
#endif
#ifndef __I
#ifdef __cplusplus
#define __I volatile
#else
#define __I volatile const
#endif
#endif
#ifndef __O
#define __O  volatile
#endif
#ifndef __R
#define __R  volatile const
#endif
/// @endcond

/* **** Definitions **** */

/**
 * @ingroup     tmr
 * @defgroup    tmr_registers TMR_Registers
 * @brief       Registers, Bit Masks and Bit Positions for the TMR Peripheral Module.
 * @details     32-bit reloadable timer that can be used for timing and event counting.
 */

/**
 * @ingroup tmr_registers
 * Structure type to access the TMR Registers.
 */
typedef struct {
    __IO uint32_t cnt;                  /**< <tt>\b 0x00:</tt> TMR CNT Register */
    __IO uint32_t cmp;                  /**< <tt>\b 0x04:</tt> TMR CMP Register */
    __IO uint32_t pwm;                  /**< <tt>\b 0x08:</tt> TMR PWM Register */
    __IO uint32_t intr;                 /**< <tt>\b 0x0C:</tt> TMR INTR Register */
    __IO uint32_t cn;                   /**< <tt>\b 0x10:</tt> TMR CN Register */
    __IO uint32_t nolcmp;               /**< <tt>\b 0x14:</tt> TMR NOLCMP Register */
} mxc_tmr_regs_t;

/* Register offsets for module TMR */
/**
 * @ingroup    tmr_registers
 * @defgroup   TMR_Register_Offsets Register Offsets
 * @brief      TMR Peripheral Register Offsets from the TMR Base Peripheral Address.
 * @{
 */
#define MXC_R_TMR_CNT                      ((uint32_t)0x00000000UL) /**< Offset from TMR Base Address: <tt> 0x0000</tt> */
#define MXC_R_TMR_CMP                      ((uint32_t)0x00000004UL) /**< Offset from TMR Base Address: <tt> 0x0004</tt> */
#define MXC_R_TMR_PWM                      ((uint32_t)0x00000008UL) /**< Offset from TMR Base Address: <tt> 0x0008</tt> */
#define MXC_R_TMR_INTR                     ((uint32_t)0x0000000CUL) /**< Offset from TMR Base Address: <tt> 0x000C</tt> */
#define MXC_R_TMR_CN                       ((uint32_t)0x00000010UL) /**< Offset from TMR Base Address: <tt> 0x0010</tt> */
#define MXC_R_TMR_NOLCMP                   ((uint32_t)0x00000014UL) /**< Offset from TMR Base Address: <tt> 0x0014</tt> */
/**@} end of group tmr_registers */

/**
 * @ingroup  tmr_registers
 * @defgroup TMR_CNT TMR_CNT
 * @brief    Count.  This register stores the current timer count.
 * @{
 */
#define MXC_F_TMR_CNT_COUNT_POS                        0 /**< CNT_COUNT Position */
#define MXC_F_TMR_CNT_COUNT                            ((uint32_t)(0xFFFFFFFFUL << MXC_F_TMR_CNT_COUNT_POS)) /**< CNT_COUNT Mask */

/**@} end of group TMR_CNT_Register */

/**
 * @ingroup  tmr_registers
 * @defgroup TMR_CMP TMR_CMP
 * @brief    Compare.  This register stores the compare value, which is used to set the
 *           maximum count value to initiate a reload of the timer to 0x0001.
 * @{
 */
#define MXC_F_TMR_CMP_COMPARE_POS                      0 /**< CMP_COMPARE Position */
#define MXC_F_TMR_CMP_COMPARE                          ((uint32_t)(0xFFFFFFFFUL << MXC_F_TMR_CMP_COMPARE_POS)) /**< CMP_COMPARE Mask */

/**@} end of group TMR_CMP_Register */

/**
 * @ingroup  tmr_registers
 * @defgroup TMR_PWM TMR_PWM
 * @brief    PWM.  This register stores the value that is compared to the current timer
 *           count.
 * @{
 */
#define MXC_F_TMR_PWM_PWM_POS                          0 /**< PWM_PWM Position */
#define MXC_F_TMR_PWM_PWM                              ((uint32_t)(0xFFFFFFFFUL << MXC_F_TMR_PWM_PWM_POS)) /**< PWM_PWM Mask */

/**@} end of group TMR_PWM_Register */

/**
 * @ingroup  tmr_registers
 * @defgroup TMR_INTR TMR_INTR
 * @brief    Clear Interrupt. Writing a value (0 or 1) to a bit in this register clears the
 *           associated interrupt.
 * @{
 */
#define MXC_F_TMR_INTR_IRQ_POS                         0 /**< INTR_IRQ Position */
#define MXC_F_TMR_INTR_IRQ                             ((uint32_t)(0x1UL << MXC_F_TMR_INTR_IRQ_POS)) /**< INTR_IRQ Mask */

/**@} end of group TMR_INTR_Register */

/**
 * @ingroup  tmr_registers
 * @defgroup TMR_CN TMR_CN
 * @brief    Timer Control Register.
 * @{
 */
#define MXC_F_TMR_CN_TMODE_POS                         0 /**< CN_TMODE Position */
#define MXC_F_TMR_CN_TMODE                             ((uint32_t)(0x7UL << MXC_F_TMR_CN_TMODE_POS)) /**< CN_TMODE Mask */
#define MXC_V_TMR_CN_TMODE_ONESHOT                     ((uint32_t)0x0UL) /**< CN_TMODE_ONESHOT Value */
#define MXC_S_TMR_CN_TMODE_ONESHOT                     (MXC_V_TMR_CN_TMODE_ONESHOT << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_ONESHOT Setting */
#define MXC_V_TMR_CN_TMODE_CONTINUOUS                  ((uint32_t)0x1UL) /**< CN_TMODE_CONTINUOUS Value */
#define MXC_S_TMR_CN_TMODE_CONTINUOUS                  (MXC_V_TMR_CN_TMODE_CONTINUOUS << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_CONTINUOUS Setting */
#define MXC_V_TMR_CN_TMODE_COUNTER                     ((uint32_t)0x2UL) /**< CN_TMODE_COUNTER Value */
#define MXC_S_TMR_CN_TMODE_COUNTER                     (MXC_V_TMR_CN_TMODE_COUNTER << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_COUNTER Setting */
#define MXC_V_TMR_CN_TMODE_PWM                         ((uint32_t)0x3UL) /**< CN_TMODE_PWM Value */
#define MXC_S_TMR_CN_TMODE_PWM                         (MXC_V_TMR_CN_TMODE_PWM << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_PWM Setting */
#define MXC_V_TMR_CN_TMODE_CAPTURE                     ((uint32_t)0x4UL) /**< CN_TMODE_CAPTURE Value */
#define MXC_S_TMR_CN_TMODE_CAPTURE                     (MXC_V_TMR_CN_TMODE_CAPTURE << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_CAPTURE Setting */
#define MXC_V_TMR_CN_TMODE_COMPARE                     ((uint32_t)0x5UL) /**< CN_TMODE_COMPARE Value */
#define MXC_S_TMR_CN_TMODE_COMPARE                     (MXC_V_TMR_CN_TMODE_COMPARE << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_COMPARE Setting */
#define MXC_V_TMR_CN_TMODE_GATED                       ((uint32_t)0x6UL) /**< CN_TMODE_GATED Value */
#define MXC_S_TMR_CN_TMODE_GATED                       (MXC_V_TMR_CN_TMODE_GATED << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_GATED Setting */
#define MXC_V_TMR_CN_TMODE_CAPTURECOMPARE              ((uint32_t)0x7UL) /**< CN_TMODE_CAPTURECOMPARE Value */
#define MXC_S_TMR_CN_TMODE_CAPTURECOMPARE              (MXC_V_TMR_CN_TMODE_CAPTURECOMPARE << MXC_F_TMR_CN_TMODE_POS) /**< CN_TMODE_CAPTURECOMPARE Setting */

#define MXC_F_TMR_CN_PRES_POS                          3 /**< CN_PRES Position */
#define MXC_F_TMR_CN_PRES                              ((uint32_t)(0x7UL << MXC_F_TMR_CN_PRES_POS)) /**< CN_PRES Mask */
#define MXC_V_TMR_CN_PRES_DIV1                         ((uint32_t)0x0UL) /**< CN_PRES_DIV1 Value */
#define MXC_S_TMR_CN_PRES_DIV1                         (MXC_V_TMR_CN_PRES_DIV1 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV1 Setting */
#define MXC_V_TMR_CN_PRES_DIV2                         ((uint32_t)0x1UL) /**< CN_PRES_DIV2 Value */
#define MXC_S_TMR_CN_PRES_DIV2                         (MXC_V_TMR_CN_PRES_DIV2 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV2 Setting */
#define MXC_V_TMR_CN_PRES_DIV4                         ((uint32_t)0x2UL) /**< CN_PRES_DIV4 Value */
#define MXC_S_TMR_CN_PRES_DIV4                         (MXC_V_TMR_CN_PRES_DIV4 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV4 Setting */
#define MXC_V_TMR_CN_PRES_DIV8                         ((uint32_t)0x3UL) /**< CN_PRES_DIV8 Value */
#define MXC_S_TMR_CN_PRES_DIV8                         (MXC_V_TMR_CN_PRES_DIV8 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV8 Setting */
#define MXC_V_TMR_CN_PRES_DIV16                        ((uint32_t)0x4UL) /**< CN_PRES_DIV16 Value */
#define MXC_S_TMR_CN_PRES_DIV16                        (MXC_V_TMR_CN_PRES_DIV16 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV16 Setting */
#define MXC_V_TMR_CN_PRES_DIV32                        ((uint32_t)0x5UL) /**< CN_PRES_DIV32 Value */
#define MXC_S_TMR_CN_PRES_DIV32                        (MXC_V_TMR_CN_PRES_DIV32 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV32 Setting */
#define MXC_V_TMR_CN_PRES_DIV64                        ((uint32_t)0x6UL) /**< CN_PRES_DIV64 Value */
#define MXC_S_TMR_CN_PRES_DIV64                        (MXC_V_TMR_CN_PRES_DIV64 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV64 Setting */
#define MXC_V_TMR_CN_PRES_DIV128                       ((uint32_t)0x7UL) /**< CN_PRES_DIV128 Value */
#define MXC_S_TMR_CN_PRES_DIV128                       (MXC_V_TMR_CN_PRES_DIV128 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV128 Setting */
#define MXC_V_TMR_CN_PRES_DIV256                       ((uint32_t)0x0UL) /**< CN_PRES_DIV256 Value */
#define MXC_S_TMR_CN_PRES_DIV256                       (MXC_V_TMR_CN_PRES_DIV256 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV256 Setting */
#define MXC_V_TMR_CN_PRES_DIV512                       ((uint32_t)0x2UL) /**< CN_PRES_DIV512 Value */
#define MXC_S_TMR_CN_PRES_DIV512                       (MXC_V_TMR_CN_PRES_DIV512 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV512 Setting */
#define MXC_V_TMR_CN_PRES_DIV1024                      ((uint32_t)0x3UL) /**< CN_PRES_DIV1024 Value */
#define MXC_S_TMR_CN_PRES_DIV1024                      (MXC_V_TMR_CN_PRES_DIV1024 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV1024 Setting */
#define MXC_V_TMR_CN_PRES_DIV2048                      ((uint32_t)0x4UL) /**< CN_PRES_DIV2048 Value */
#define MXC_S_TMR_CN_PRES_DIV2048                      (MXC_V_TMR_CN_PRES_DIV2048 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV2048 Setting */
#define MXC_V_TMR_CN_PRES_DIV4096                      ((uint32_t)0x5UL) /**< CN_PRES_DIV4096 Value */
#define MXC_S_TMR_CN_PRES_DIV4096                      (MXC_V_TMR_CN_PRES_DIV4096 << MXC_F_TMR_CN_PRES_POS) /**< CN_PRES_DIV4096 Setting */

#define MXC_F_TMR_CN_TPOL_POS                          6 /**< CN_TPOL Position */
#define MXC_F_TMR_CN_TPOL                              ((uint32_t)(0x1UL << MXC_F_TMR_CN_TPOL_POS)) /**< CN_TPOL Mask */
#define MXC_V_TMR_CN_TPOL_ACTIVEHI                     ((uint32_t)0x0UL) /**< CN_TPOL_ACTIVEHI Value */
#define MXC_S_TMR_CN_TPOL_ACTIVEHI                     (MXC_V_TMR_CN_TPOL_ACTIVEHI << MXC_F_TMR_CN_TPOL_POS) /**< CN_TPOL_ACTIVEHI Setting */
#define MXC_V_TMR_CN_TPOL_ACTIVELO                     ((uint32_t)0x1UL) /**< CN_TPOL_ACTIVELO Value */
#define MXC_S_TMR_CN_TPOL_ACTIVELO                     (MXC_V_TMR_CN_TPOL_ACTIVELO << MXC_F_TMR_CN_TPOL_POS) /**< CN_TPOL_ACTIVELO Setting */

#define MXC_F_TMR_CN_TEN_POS                           7 /**< CN_TEN Position */
#define MXC_F_TMR_CN_TEN                               ((uint32_t)(0x1UL << MXC_F_TMR_CN_TEN_POS)) /**< CN_TEN Mask */
#define MXC_V_TMR_CN_TEN_DIS                           ((uint32_t)0x0UL) /**< CN_TEN_DIS Value */
#define MXC_S_TMR_CN_TEN_DIS                           (MXC_V_TMR_CN_TEN_DIS << MXC_F_TMR_CN_TEN_POS) /**< CN_TEN_DIS Setting */
#define MXC_V_TMR_CN_TEN_EN                            ((uint32_t)0x1UL) /**< CN_TEN_EN Value */
#define MXC_S_TMR_CN_TEN_EN                            (MXC_V_TMR_CN_TEN_EN << MXC_F_TMR_CN_TEN_POS) /**< CN_TEN_EN Setting */

#define MXC_F_TMR_CN_PRES3_POS                         8 /**< CN_PRES3 Position */
#define MXC_F_TMR_CN_PRES3                             ((uint32_t)(0x1UL << MXC_F_TMR_CN_PRES3_POS)) /**< CN_PRES3 Mask */
#define MXC_V_TMR_CN_PRES3_DIV1                        ((uint32_t)0x0UL) /**< CN_PRES3_DIV1 Value */
#define MXC_S_TMR_CN_PRES3_DIV1                        (MXC_V_TMR_CN_PRES3_DIV1 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV1 Setting */
#define MXC_V_TMR_CN_PRES3_DIV2                        ((uint32_t)0x0UL) /**< CN_PRES3_DIV2 Value */
#define MXC_S_TMR_CN_PRES3_DIV2                        (MXC_V_TMR_CN_PRES3_DIV2 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV2 Setting */
#define MXC_V_TMR_CN_PRES3_DIV4                        ((uint32_t)0x0UL) /**< CN_PRES3_DIV4 Value */
#define MXC_S_TMR_CN_PRES3_DIV4                        (MXC_V_TMR_CN_PRES3_DIV4 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV4 Setting */
#define MXC_V_TMR_CN_PRES3_DIV8                        ((uint32_t)0x0UL) /**< CN_PRES3_DIV8 Value */
#define MXC_S_TMR_CN_PRES3_DIV8                        (MXC_V_TMR_CN_PRES3_DIV8 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV8 Setting */
#define MXC_V_TMR_CN_PRES3_DIV16                       ((uint32_t)0x0UL) /**< CN_PRES3_DIV16 Value */
#define MXC_S_TMR_CN_PRES3_DIV16                       (MXC_V_TMR_CN_PRES3_DIV16 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV16 Setting */
#define MXC_V_TMR_CN_PRES3_DIV32                       ((uint32_t)0x0UL) /**< CN_PRES3_DIV32 Value */
#define MXC_S_TMR_CN_PRES3_DIV32                       (MXC_V_TMR_CN_PRES3_DIV32 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV32 Setting */
#define MXC_V_TMR_CN_PRES3_DIV64                       ((uint32_t)0x0UL) /**< CN_PRES3_DIV64 Value */
#define MXC_S_TMR_CN_PRES3_DIV64                       (MXC_V_TMR_CN_PRES3_DIV64 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV64 Setting */
#define MXC_V_TMR_CN_PRES3_DIV128                      ((uint32_t)0x0UL) /**< CN_PRES3_DIV128 Value */
#define MXC_S_TMR_CN_PRES3_DIV128                      (MXC_V_TMR_CN_PRES3_DIV128 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV128 Setting */
#define MXC_V_TMR_CN_PRES3_DIV256                      ((uint32_t)0x1UL) /**< CN_PRES3_DIV256 Value */
#define MXC_S_TMR_CN_PRES3_DIV256                      (MXC_V_TMR_CN_PRES3_DIV256 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV256 Setting */
#define MXC_V_TMR_CN_PRES3_DIV512                      ((uint32_t)0x1UL) /**< CN_PRES3_DIV512 Value */
#define MXC_S_TMR_CN_PRES3_DIV512                      (MXC_V_TMR_CN_PRES3_DIV512 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV512 Setting */
#define MXC_V_TMR_CN_PRES3_DIV1024                     ((uint32_t)0x1UL) /**< CN_PRES3_DIV1024 Value */
#define MXC_S_TMR_CN_PRES3_DIV1024                     (MXC_V_TMR_CN_PRES3_DIV1024 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV1024 Setting */
#define MXC_V_TMR_CN_PRES3_DIV2048                     ((uint32_t)0x1UL) /**< CN_PRES3_DIV2048 Value */
#define MXC_S_TMR_CN_PRES3_DIV2048                     (MXC_V_TMR_CN_PRES3_DIV2048 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV2048 Setting */
#define MXC_V_TMR_CN_PRES3_DIV4096                     ((uint32_t)0x1UL) /**< CN_PRES3_DIV4096 Value */
#define MXC_S_TMR_CN_PRES3_DIV4096                     (MXC_V_TMR_CN_PRES3_DIV4096 << MXC_F_TMR_CN_PRES3_POS) /**< CN_PRES3_DIV4096 Setting */

#define MXC_F_TMR_CN_PWMSYNC_POS                       9 /**< CN_PWMSYNC Position */
#define MXC_F_TMR_CN_PWMSYNC                           ((uint32_t)(0x1UL << MXC_F_TMR_CN_PWMSYNC_POS)) /**< CN_PWMSYNC Mask */
#define MXC_V_TMR_CN_PWMSYNC_DIS                       ((uint32_t)0x0UL) /**< CN_PWMSYNC_DIS Value */
#define MXC_S_TMR_CN_PWMSYNC_DIS                       (MXC_V_TMR_CN_PWMSYNC_DIS << MXC_F_TMR_CN_PWMSYNC_POS) /**< CN_PWMSYNC_DIS Setting */
#define MXC_V_TMR_CN_PWMSYNC_EN                        ((uint32_t)0x1UL) /**< CN_PWMSYNC_EN Value */
#define MXC_S_TMR_CN_PWMSYNC_EN                        (MXC_V_TMR_CN_PWMSYNC_EN << MXC_F_TMR_CN_PWMSYNC_POS) /**< CN_PWMSYNC_EN Setting */

#define MXC_F_TMR_CN_NOLHPOL_POS                       10 /**< CN_NOLHPOL Position */
#define MXC_F_TMR_CN_NOLHPOL                           ((uint32_t)(0x1UL << MXC_F_TMR_CN_NOLHPOL_POS)) /**< CN_NOLHPOL Mask */
#define MXC_V_TMR_CN_NOLHPOL_NORMAL                    ((uint32_t)0x0UL) /**< CN_NOLHPOL_NORMAL Value */
#define MXC_S_TMR_CN_NOLHPOL_NORMAL                    (MXC_V_TMR_CN_NOLHPOL_NORMAL << MXC_F_TMR_CN_NOLHPOL_POS) /**< CN_NOLHPOL_NORMAL Setting */
#define MXC_V_TMR_CN_NOLHPOL_INVERT                    ((uint32_t)0x1UL) /**< CN_NOLHPOL_INVERT Value */
#define MXC_S_TMR_CN_NOLHPOL_INVERT                    (MXC_V_TMR_CN_NOLHPOL_INVERT << MXC_F_TMR_CN_NOLHPOL_POS) /**< CN_NOLHPOL_INVERT Setting */

#define MXC_F_TMR_CN_NOLLPOL_POS                       11 /**< CN_NOLLPOL Position */
#define MXC_F_TMR_CN_NOLLPOL                           ((uint32_t)(0x1UL << MXC_F_TMR_CN_NOLLPOL_POS)) /**< CN_NOLLPOL Mask */
#define MXC_V_TMR_CN_NOLLPOL_NORMAL                    ((uint32_t)0x0UL) /**< CN_NOLLPOL_NORMAL Value */
#define MXC_S_TMR_CN_NOLLPOL_NORMAL                    (MXC_V_TMR_CN_NOLLPOL_NORMAL << MXC_F_TMR_CN_NOLLPOL_POS) /**< CN_NOLLPOL_NORMAL Setting */
#define MXC_V_TMR_CN_NOLLPOL_INVERT                    ((uint32_t)0x1UL) /**< CN_NOLLPOL_INVERT Value */
#define MXC_S_TMR_CN_NOLLPOL_INVERT                    (MXC_V_TMR_CN_NOLLPOL_INVERT << MXC_F_TMR_CN_NOLLPOL_POS) /**< CN_NOLLPOL_INVERT Setting */

#define MXC_F_TMR_CN_PWMCKBD_POS                       12 /**< CN_PWMCKBD Position */
#define MXC_F_TMR_CN_PWMCKBD                           ((uint32_t)(0x1UL << MXC_F_TMR_CN_PWMCKBD_POS)) /**< CN_PWMCKBD Mask */
#define MXC_V_TMR_CN_PWMCKBD_DIS                       ((uint32_t)0x1UL) /**< CN_PWMCKBD_DIS Value */
#define MXC_S_TMR_CN_PWMCKBD_DIS                       (MXC_V_TMR_CN_PWMCKBD_DIS << MXC_F_TMR_CN_PWMCKBD_POS) /**< CN_PWMCKBD_DIS Setting */
#define MXC_V_TMR_CN_PWMCKBD_EN                        ((uint32_t)0x0UL) /**< CN_PWMCKBD_EN Value */
#define MXC_S_TMR_CN_PWMCKBD_EN                        (MXC_V_TMR_CN_PWMCKBD_EN << MXC_F_TMR_CN_PWMCKBD_POS) /**< CN_PWMCKBD_EN Setting */

/**@} end of group TMR_CN_Register */

/**
 * @ingroup  tmr_registers
 * @defgroup TMR_NOLCMP TMR_NOLCMP
 * @brief    Timer Non-Overlapping Compare Register.
 * @{
 */
#define MXC_F_TMR_NOLCMP_NOLLCMP_POS                   0 /**< NOLCMP_NOLLCMP Position */
#define MXC_F_TMR_NOLCMP_NOLLCMP                       ((uint32_t)(0xFFUL << MXC_F_TMR_NOLCMP_NOLLCMP_POS)) /**< NOLCMP_NOLLCMP Mask */

#define MXC_F_TMR_NOLCMP_NOLHCMP_POS                   8 /**< NOLCMP_NOLHCMP Position */
#define MXC_F_TMR_NOLCMP_NOLHCMP                       ((uint32_t)(0xFFUL << MXC_F_TMR_NOLCMP_NOLHCMP_POS)) /**< NOLCMP_NOLHCMP Mask */

/**@} end of group TMR_NOLCMP_Register */

#ifdef __cplusplus
}
#endif

#endif // LIBRARIES_CMSIS_DEVICE_MAXIM_MAX32650_INCLUDE_TMR_REGS_H_
