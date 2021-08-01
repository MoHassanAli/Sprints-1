/**
 * @file UART_int.h
 * @author Elgharib
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 */


#ifndef UART_INT_H_
#define UART_INT_H_

#include "../../lib/DataTypes.h"
#include "../../lib/BIT_Math.h"
#include "UART_config.h"
#include "UART_private.h"

#include "../../lib/Memmap.h"





EN_ERRORSTATE_t UART_ENInit(void);
EN_ERRORSTATE_t UART_ENSendData(uint8_t Data);
EN_ERRORSTATE_t UART_ENSendNoBlock(uint8_t Data);
uint8_t UART_u8ReceiveData(void);
uint8_t UART_u8ReceiveNoBlock(uint8_t *Data);
void UART_voidTXInterruptEnable(void);
void UART_voidRXInterruptEnable(void);
void UART_voidSendString_Ashync(uint8_t *str);
void UART_voidReceiveString_Ashync(uint8_t *Str);






#endif  /* UART_INT_H_ */

