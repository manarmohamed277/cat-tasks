/*
 * LED_config.c
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */
#include "stdTypes.h"
#include"errorState.h"
#include"LED_config.h"
#include "LED_priv.h"
#include "DIO_int.h"

LED_t LED_AstrLedConfig [LED_NUM] ={
	{DIO_u8PORTA,DIO_u8PIN5,LED_SINK, LED_ON},
	{DIO_u8PORTB,DIO_u8PIN2,LED_SOURCE, LED_OFF},
	{DIO_u8PORTC,DIO_u8PIN1,LED_SINK, LED_OFF}
};

