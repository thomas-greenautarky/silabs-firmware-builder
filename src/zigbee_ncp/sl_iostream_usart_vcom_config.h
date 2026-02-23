/*
 * Shim header for legacy_ncp_ash compatibility when using EUSART.
 *
 * ash-ncp.c includes this file to read SL_IOSTREAM_USART_VCOM_PERIPHERAL_NO.
 * When the project uses iostream_eusart instead of iostream_usart, the real
 * header is not generated. This shim redirects to the EUSART config and maps
 * the expected define.
 */

#ifndef SL_IOSTREAM_USART_VCOM_CONFIG_H
#define SL_IOSTREAM_USART_VCOM_CONFIG_H

#if __has_include("sl_iostream_eusart_vcom_config.h")
#include "sl_iostream_eusart_vcom_config.h"
#ifndef SL_IOSTREAM_USART_VCOM_PERIPHERAL_NO
#define SL_IOSTREAM_USART_VCOM_PERIPHERAL_NO SL_IOSTREAM_EUSART_VCOM_PERIPHERAL_NO
#endif
#endif

#endif /* SL_IOSTREAM_USART_VCOM_CONFIG_H */
