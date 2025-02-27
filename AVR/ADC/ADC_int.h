/*
 * ADC_int.h
 *
 *  Created on: Feb 27, 2025
 *      Author: User
 */

#ifndef ADC_INT_H_
#define ADC_INT_H_
#include "stdTypes.h"
typedef enum{
	AREF, //5 INTERNAL VOLT
	AVCC, //5 EXTERNAL VOLT
	_256 // 2.5 INTERNAL
}vREF_type;

typedef enum{
	ADC_SCALER_2=0,
	ADC_SCALER_4=2,
	ADC_SCALER_8,
	ADC_SCALER_16,
	ADC_SCALER_32,
	ADC_SCALER_64,
	ADC_SCALER_128,
}SCALER_TYPE;

typedef enum{
	CH_0,
	CH_1,
	CH_2,
	CH_3,
	CH_4,
	CH_5,
	CH_6,
	CH_7
}CHANNEL_TYPE;


void ADC_int(vREF_type vref,SCALER_TYPE scale);
u16 ADC_read(CHANNEL_TYPE channel);







#endif /* ADC_INT_H_ */
