/*
 * main.c
 *
 *  Created on: Sep 17, 2024
 *      Author: User
 */
#include<util/delay.h>
#include"stdio.h"
#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((u8*)0x39)

typedef unsigned char u8;

int main(void){

	DDRA&=~(1<<3);  //pin 3A is input
	PORTA|=(1<<3);  //pull up resistor is activated

	DDRA|=(1<<5);  //pin 5a is output
	PORTA&=~(1<<5); //start with led off
	DDRA|=(1<<7);
	PORTA&=~(1<<7);

	while (1){
		//if(PINA&(1<<3)==0)  //signal is 0 ,, switch closed
		if(((PINA>>3)&1)==0){
			PORTA|=(1<<7);
		PORTA &=~(1<<5);}
		else  {                // SIGNAL is 1 ,, switch off
			PORTA&=~(1<<7);
		    PORTA|=(1<<5);
		}
	}

	return 0;
}

