/*
 * main.c
 *
 *  Created on: Feb 27, 2025
 *      Author: User
 */
#include"stdTypes.h"
#include"errorState.h"
#include"ADC.h"
#include"ADC_int.h"
#include"MCAL/DIO_int.h"
int main(){
	DIO_enuInit();
	DIO_enuSetpindir(DIO_u8PORTA,DIO_u8PIN0, DIO_u8INPUT);
	DIO_enuSetpindir(DIO_u8PORTD,DIO_u8PIN0, DIO_u8OUTPUT);
	ADC_int(AVCC,ADC_SCALER_64);

	while(1){
		u16 data;
		u16 temp;
		data=ADC_read(CH_0);
		temp=(data*0.0048828 )/0.01;
		while(temp==50){
			DIO_enuSetpinval(DIO_u8PORTD,DIO_u8PIN0,DIO_u8HIGH);
			data=ADC_read(CH_0);
		}
		DIO_enuSetpinval(DIO_u8PORTD,DIO_u8PIN0,DIO_u8LOW);
	}
	return 1;
}
