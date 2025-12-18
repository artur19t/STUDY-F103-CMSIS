#ifndef _HW_INIT
#define _HW_INIT

#include "main.h"

void GPIO_USART_UsrInit (void);
void GPIO_LED_UsrInit (void);
void USART1_UsrInit (void);
void DMA1_UsrInit (void);
void DMA1RX_UsrConfig(volatile uint16_t *srcAddr, uint8_t *destAddr, uint16_t dSize);
void DMA1_USART1TX_UsrConfig(uint8_t *srcAddr, uint16_t dSize);
#endif