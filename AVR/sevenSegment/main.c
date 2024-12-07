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
#define DDRB *((u8*)0x37)
#define PORTB *((u8*)0x38)
#define PINB *((volatile u8*)0x36)

typedef unsigned char u8;

int main(void){
	DDRA=0xff;
	DDRB=0X7f;  //DDRB=0xff;
	PORTA=0;
	PORTB=0x80;   //PORTB=0;
	int arr[]={0x3f,0x06,0x5B,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
/*	while(1){
	for(int i=0;i<10;i++){
		PORTA=arr[i];
		for(int j=0;j<10;j++){
			PORTB=arr[j];
			_delay_ms(500);
		}

	}
	}*/

    int count=0,f=0;
	////////////press///////////
	while(1){
		if((PINB&(1<<7))==0){
				count++;
			while((PINB&(1<<7))==0);
			}
		f=count/10;
		PORTA=arr[f];
		PORTB=0x80;   //I kept the 1 so 1000000
		PORTB|=arr[count%10];
		_delay_ms(500);
        if(count>99)
        	count=0;
	}
	return 0;
}

