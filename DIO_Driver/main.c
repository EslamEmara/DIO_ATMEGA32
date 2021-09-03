/*
 * main.c
 *
 * Created: 9/3/2021 3:41:21 PM
 *  Author: Eslam Emara
 */ 

#include ".\ECUAL\BUTTON\Button.h"
#include ".\ECUAL\LED\Led.h"

int main ()
{
	ST_BUTTON_config_t buttonConfig = {PORTA,PIN4,INTERNAL_PULLUP};
	ST_LED_CONFIG_t ledConfig = {PORTD,PIN0,ACTIVE_HIGH};
	Button_init(buttonConfig);
	LED_init(ledConfig);
	
	while (1)
	{
		if (Button_getState(buttonConfig) == HIGH)		//If button is pressed
			LED_TOGGLE(ledConfig);
	}
}