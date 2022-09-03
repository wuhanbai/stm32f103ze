#include "led.h"

void led_init(void)
{
    //RCC->APB2ENR &= ~(1 << 3);
    RCC->APB2ENR |= 1 << 3;

    GPIOB->CRL &= 0xFF0FFFFF;
    GPIOB->CRL |= 0X00300000;

    //GPIOB->BSRR |= 1 << 5;
    GPIOB->BRR |= 1 << 5;
	//GPIOB->ODR &= ~(1<<5);
}
