#include "stm32f10x.h"                  // Device header
#include <stddef.h>
#include "hw_gpio.h"
#include "hw_usart.h"

uint8_t temp = 0;
int main (void)
{
  GPIO_LED_Init();
  GPIO_USART1_Init();
  USART1_Init();
  //char data = 0;
  while(1)
  {
  }
}

void USART1_IRQHandler (void)
{
  if(USART1->SR & USART_SR_RXNE)
  {
    temp = USART1->DR;
    if (temp == '1')
    {
      if(!(GPIOB->ODR & GPIO_ODR_ODR2))
      {
        GPIOB->BSRR |= GPIO_BSRR_BS2;
      }else
      {
        GPIOB->BSRR |= GPIO_BSRR_BR2;
      }
    }else
    {
      USART1->DR = 'F';
    }
  }
}