/*
 * switch_config.c
 *
 *  Created on: Nov 7, 2024
 *      Author: User
 */
#include "stdTypes.h"
#include "errorState.h"
#include "switch_priv.h"
#include "switch_config.h"
#include "DIO_int.h"


 SW_t Switch_AstrSwitchState [SW_NUM] =
{
		{DIO_u8PORTA , DIO_u8PIN4 , DIO_u8FLOAT},
		{DIO_u8PORTD , DIO_u8PIN3 , DIO_u8PULLUP},
		{DIO_u8PORTC , DIO_u8PIN5 , DIO_u8PULLUP}
};
