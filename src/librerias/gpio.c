#include "stm32f1xx.h"
#include "gpio.h"

void init_gpio(void){
	//init portA
	RCC->APB2ENR |= 1 << 2; //enable clk
	

	/***********pwm***************/
	//PA0 mode 2MHz.
	GPIOA->CRL |= (1 << 5);
	GPIOA->CRL &= ~(1 << 4);
	// PA6

	//PA alternate function pushpull
	GPIOA->CRL |= (1 << 7);
	GPIOA->CRL &= ~(1 << 6);
// Timer 3
	GPIOA -> CRL |= (1 << 27);
	GPIOA -> CRL &= ~(1 << 26);
	GPIOA -> CRL |= (1 << 25); 
	GPIOA -> CRL &=  ~( 1 << 24);
}