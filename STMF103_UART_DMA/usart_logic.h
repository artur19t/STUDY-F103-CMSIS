#ifndef _USART_LOGIC
#define _USART_LOGIC

#include "main.h"
extern uint8_t MainBuf[];
void USART_UsrLogic(uint8_t *bufAddr, uint16_t dSize);
void prepare(uint8_t *bufAddr, uint16_t dSize);
void process_command(void);
void USART_UstTranslate(uint8_t *tx_buf, uint16_t dSize);

void cmd_led_on(void);
void cmd_led_off(void);
void cmd_retranslate(void);
#endif
