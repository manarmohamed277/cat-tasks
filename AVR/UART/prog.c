/*
 * prog.c

 *
 *  Created on: Mar 7, 2025
 *      Author: User
 */
#include "stdTypes.h"
#include"priv.h"
#include "int.h"
#include <util/delay.h>
#include "BIT_SET.h"


void UART_init(){

	//boad rate 9600 1x
	UCSRC_UBRRH=0;
	UBRRL=51;
// u1x speed
	RESET_BIT(UCSRA,U2X);
//asyn mode
	RESET_BIT(UCSRC_UBRRH,UMSEL);
	//
	//PArity mode disabled by default

	//number of bits
	SET_BIT(UCSRC_UBRRH,CSBIT1);
	SET_BIT(UCSRC_UBRRH,CSBIT2);
	//enable
	SET_BIT(UCSRB,RXEN);
	SET_BIT(UCSRB,TXEN);
}

void UART_u8transmit_data(u8 data){
	while(!GET_BIT(UCSRA,UDRE)); //polling
	UDR=data;
}
u8 UART_u8receive_data(){
	//check
	while(!GET_BIT(UCSRA,RXC));
	return UDR;
}

