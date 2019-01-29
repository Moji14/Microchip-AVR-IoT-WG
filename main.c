#include <atmel_start.h>
#include <util/delay.h>
int pos;
int main(void)
{	/* Initializes MCU, drivers and middleware */
	atmel_start_init();
	pos = 1;
	/* Replace with your application code */
	while (1) {
		/* Check the status of SW1 User Button */
		/* 0: Pressed */
		if (SW1_get_level()==0 && pos>1) {
			/* reduce counter */
			pos=pos-1;
			_delay_ms(200);
			} else {
			/* Check the satus of SW0 User Button*/
			if (SW0_get_level()==0 && pos<4){
				/*INCREASE COUNTER*/
				pos=pos+1;
				_delay_ms(200);
			}
			}
			switch (pos){
				case 1:
					BLUE_LED_set_level(false);
					GREEN_LED_set_level(true);
					YELLO_LED_set_level(true);
					RED_LED_set_level(true);
					//_delay_ms(1000);
					break;
				case 2:
					BLUE_LED_set_level(true);
					GREEN_LED_set_level(false);
					YELLO_LED_set_level(true);
					RED_LED_set_level(true);
					break;
					//_delay_ms(1000);				
				case 3:
					BLUE_LED_set_level(true);
					GREEN_LED_set_level(true);
					YELLO_LED_set_level(false);
					RED_LED_set_level(true);
					break;
					//_delay_ms(1000);
				case 4:
					BLUE_LED_set_level(true);
					GREEN_LED_set_level(true);
					YELLO_LED_set_level(true);
					RED_LED_set_level(false);
					break;
					//_delay_ms(1000);
			}	
		}	
}
