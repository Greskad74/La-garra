
#include "stm32f1xx.h"
#include "timers.h"
#include "garra.h"

void secuencia1(){

timer2_pwm();
timer3_pwm();


TIM2 -> CCR1 = 1800; // 0
for ( int i =64285 ; i > 1; i--);
TIM2 -> CCR1 = 38571; //90
for ( int i = 0; i < 64285; i++);
TIM2 -> CCR1 = 59143; // 180
//servo motor 2
for ( int i = 64285; i > 1; i--);

TIM3 -> CCR1 = 1800;
for ( int i = 0; i < 64285; i++);
TIM3 -> CCR1 = 38571;
for ( int i = 64285; i > 1; i--);
TIM3 -> CCR1 = 59143;   
        }


void secuencia2 () {
       
        timer2_pwm();
timer3_pwm();


TIM2 -> CCR1 = 59143; // 180
for ( int i =64285 ; i > 1; i--);
TIM2 -> CCR1 = 38571; //90
for ( int i = 0; i < 64285; i++);
TIM2 -> CCR1 = 1800; // 0
//servo motor 2
for ( int i = 64285; i > 1; i--);
TIM3 -> CCR1 = 59143;
for ( int i = 0; i < 64285; i++);
TIM3 -> CCR1 = 38571;
for ( int i = 64285; i > 1; i--);
TIM3 -> CCR1 = 1800;   
        }



