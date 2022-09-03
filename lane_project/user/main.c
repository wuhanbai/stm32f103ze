#include "stm32f103.h"
#include "led.h"
int main(void)
{
	led_init();
	while(1)
	{
		;
	}
}

void SystemInit(void)
{
	
}
