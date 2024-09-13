/*
 * main.c
 *
 *  Created on: Sep 13, 2024
 *      Author: User
 */

#include<util/delay.h>
#include"stdio.h"
#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((u8*)0x39)

typedef unsigned char u8;

int main(void){

	DDRA=0xFF;
	int i=0;
	while(1){
		while(i<=8){
		PORTA|=(1<<i);
		i++;
		_delay_ms(500);
	}

	i=0;
	while(i<=8){
		_delay_ms(500);
		PORTA&=~(1<<i);
		i++;
	}
	i=0;
	}

	return 1;
}
