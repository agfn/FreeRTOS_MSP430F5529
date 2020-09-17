#include <msp430.h> 
#include "FreeRTOS.h"
#include "task.h"

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	return 0;
}

void vApplicationSetupTimerInterrupt( void )
{

}

void vApplicationStackOverflowHook( TaskHandle_t xTask, char *pcTaskName )
{

}
