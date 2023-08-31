/*
#include "address_map_nios2.h"
#include <stdio.h>

volatile int *TIMER_ptr2=(int *)TIMER_2_BASE;


extern int delay_time;
//extern int timer2_run;

void timer2_ISR()
{
	*TIMER_ptr2 = 0;
	
	//if (timer2_run==1)
    if(delay_time) delay_time--;
	
	return;
}
*/