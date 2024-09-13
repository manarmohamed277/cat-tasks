/*
 * main.c
 *
 *  Created on: Sep 12, 2024
 *      Author: User
 */
#include"stdio.h"
#include<util/delay.h>

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)    //read only register

typedef unsigned char u8;
int main(void){
//pin A4 is output
	DDRA|=(1<<0);
	while(1){
		//pin a4 is high
	PORTA |=(1<<0);

	_delay_ms(500);
	   //pin A4 is low
	PORTA &=~(1<<0);
	_delay_ms(500);
	}
	return 0;
}

