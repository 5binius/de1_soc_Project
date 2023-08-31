#include "address_map_nios2.h"

volatile int *TIMER_ptr=(int *)TIMER_BASE;
extern int count;
extern int run;
extern int total_time;

void timer_ISR()
{
	*TIMER_ptr = 0;
	if (run==1) total_time--;
	if(total_time <= 0){
		total_time = 0;
	}
	return;
}
