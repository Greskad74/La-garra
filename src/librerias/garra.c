
#include "stm32f1xx.h"
#include "timers.h"
#include "garra.h"

void secuencia1(){

timer2_pwm();
timer3_pwm();

/*
Frecuencia determinada por ARR
CCRX -> SALIDA = (TIEMPO DE TRABAJO * (ARR + 1))

*/

TIM2 -> CCR1 = 1800; // 0
for ( int i =64285 ; i > 1; i--);
TIM2 -> CCR1 = 3857; //90
for ( int i = 0; i < 64285; i++);
TIM2 -> CCR1 = 5914; // 180
//servo motor 2
for ( int i = 64285; i > 1; i--);

TIM3 -> CCR1 = 1800;
for ( int i = 0; i < 64285; i++);
TIM3 -> CCR1 = 3857;
for ( int i = 64285; i > 1; i--);
TIM3 -> CCR1 = 5914;   
        }


void secuencia2 () {
       
        timer2_pwm();
timer3_pwm();


TIM2 -> CCR1 = 5914; // 180
for ( int i =64285 ; i > 1; i--);
TIM2 -> CCR1 = 3857; //90
for ( int i = 0; i < 64285; i++);
TIM2 -> CCR1 = 1800; // 0
//servo motor 2
for ( int i = 64285; i > 1; i--);
TIM3 -> CCR1 = 5914;
for ( int i = 0; i < 64285; i++);
TIM3 -> CCR1 = 3857;
for ( int i = 64285; i > 1; i--);
TIM3 -> CCR1 = 1800;   
        }



