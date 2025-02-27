/*
 * ADC.h
 *
 *  Created on: Feb 27, 2025
 *      Author: User
 */

#ifndef ADC_H_
#define ADC_H_

#define ADMUX				*((volatile u8*)0x27)
#define ADCSRA				*((volatile u8*)0x26)
#define ADCH				*((volatile u8*)0x25)		//ADC high register
#define ADCL				*((volatile u8*)0x24)		//ADC Low register
#define ADC_DATA_RE 		*((volatile u16*)0x24)		//ADC Low + High

#define vREF_0 6
#define vREF_1 7
#define ADC_ENABLE 7
#define ADC_SRART_CON 6
#define refV=5000;
#define res=1024;

#endif /* ADC_H_ */
