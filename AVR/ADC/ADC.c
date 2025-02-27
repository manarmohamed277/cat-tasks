/*
 * ADC.c
 *
 *  Created on: Feb 27, 2025
 *      Author: User
 */
#include "stdTypes.h"
#include"ADC.h"
#include"ADC_int.h"
#include"BIT_SET.h"




void ADC_int(vREF_type vref,SCALER_TYPE scale){

	switch(vref){
	case AREF:
         RESET_BIT(ADMUX,vREF_0);
         RESET_BIT(ADMUX,vREF_1);
		break;
	case AVCC:
       SET_BIT(ADMUX,vREF_0);
       RESET_BIT(ADMUX,vREF_1);
		break;
	case _256:
		SET_BIT(ADMUX,vREF_0);
		SET_BIT(ADMUX,vREF_1);
		break;
	}

	//scaller
	ADCSRA&=0xf8;
	ADCSRA|=scale;
	//enable ADC  pin7
	SET_BIT(ADCSRA,ADC_ENABLE);

	}


u16 ADC_read(CHANNEL_TYPE channel){
	//SELECT CHANNEL
	ADMUX&=0XE0;
	ADMUX|=channel;
	//START CONVERSION
	SET_BIT(ADCSRA,ADC_SRART_CON);
	while(GET_BIT(ADCSRA,ADC_SRART_CON));
	return ADC_DATA_RE;
}

