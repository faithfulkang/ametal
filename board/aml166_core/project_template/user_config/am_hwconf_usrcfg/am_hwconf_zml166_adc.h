/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \brief 调试串口配置文件
 * \file
 *
 * \internal
 * \par Modification history
 * - 1.00 17-11-20  pea, first implementation
 * \endinternal
 */
#ifndef __AM_HWCONF_ZML166_ADC_H
#define __AM_HWCONF_ZML166_ADC_H

#include "am_zml166_adc.h"
#include "ametal.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief CS1239设备实例初始化
 *
 * \param 无
 *
 * \return CS1239 标准服务句柄，若为 NULL，表明初始化失败
 */
am_zml166_adc_handle_t am_zml166_adc_inst_init (void);


/**
 * \brief adc24 实例解初始化
 */
void am_zml166_adc_inst_deinit (am_zml166_adc_handle_t handle);


#ifdef __cplusplus
}
#endif

#endif /* __AM_HWCONF_DEBUG_UART_H */

/* end of file */
