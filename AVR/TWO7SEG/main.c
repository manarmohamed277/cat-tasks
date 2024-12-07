/*
 * main.c
 *
 *  Created on: Sep 19, 2024
 *      Author: User
 */
#include<util/delay.h>
#include"stdio.h"
#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((u8*)0x39)
#define DDRB *((u8*)0x37)
#define PORTB *((u8*)0x38)
#define PINB *((volatile u8*)0x36)

typedef unsigned char u8;

int main(void){
	DDRA=0xff;
	DDRB|=(1<<0);
	DDRB|=(1<<1);
	PORTB|=(1<<0);  //dis a
	PORTB|=(1<<1);  //dis b
	int arr[]={0x3f,0x06,0x5B,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
	while(1){
		PORTB|=(1<<1);  //dis b
		PORTA=arr[2];   //display 3
		PORTB&=~(1<<0); //en a
		_delay_ms(15);
		PORTB|=(1<<0);  //dis a
		PORTA=arr[4];   //display 5
		PORTB&=~(1<<1);  //en b
		_delay_ms(15);
	}

return 1;}
