/*
 * main.c
 *
 *  Created on: Mar 7, 2025
 *      Author: User
 */

#include"stdTypes.h"
#include <util/delay.h>
#include"MCAL/DIO/interface.h"
#include"HAL/LCD/LCD_config.h"
#include"HAL/LCD/LCD.h"
#include "int.h"

int main(){
	u8 x;
	     UART_init();
	     pin_config RWpin ={DIO_PIN0,DIO_PORTA};
		 pin_config RSpin ={DIO_PIN1,DIO_PORTA};
		 pin_config ENpin ={DIO_PIN2,DIO_PORTA};

		 pin_config dataPins[4]={{DIO_PIN3,DIO_PORTA},{DIO_PIN4,DIO_PORTA},{DIO_PIN5,DIO_PORTA},{DIO_PIN6,DIO_PORTA}};

		 LCD_cofig lcd={RSpin,RWpin,ENpin,{dataPins[0], dataPins[1], dataPins[2], dataPins[3]}};
		 LCD_voidInit(&lcd);

		 LCD_sendString(&lcd,"manar");


		/* UART_u8transmit_data('t');
		 UART_u8transmit_data('h');
		 UART_u8transmit_data('u');*/

		 x=UART_u8receive_data();

					// LCD_sendChar(&lcd,x);
		 LCD_sendNumber(&lcd,(u32)x);
		/* while(1){

			 x=UART_u8receive_data();
             _delay_ms(100);
			 if(x>40){
     LCD_sendString(&lcd,"TEMP>40");
			return 1;}

		 }*/


	return 1;
}
