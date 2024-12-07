/*
 * seven_seg_cofig.c
 *
 *  Created on: Nov 24, 2024
 *      Author: User
 */
#include"stdTypes.h"

#include"DIO_int.h"
#include"errorState.h"

#include "seven_seg_config.h"

#include "seven_seg_priv.h"

SEG_t SEVSEG_AstrSegConfig[SEG_NUM]={

		{        DIO_u8PORTA , DIO_u8PIN3 , //pin a
				 DIO_u8PORTB , DIO_u8PIN5 , //pin b
				 DIO_u8PORTC , DIO_u8PIN2 , //pin c
				 DIO_u8PORTA , DIO_u8PIN7 , //pin d
				 DIO_u8PORTC , DIO_u8PIN5 , //pin e
				 DIO_u8PORTD , DIO_u8PIN3 , //pin f
				 DIO_u8PORTA , DIO_u8PIN0 , //pin g
				 NOT_CONNECTED , NOT_CONNECTED , //pin cmn
				 NOT_CONNECTED , NOT_CONNECTED , //pin dot
				 COMMON_CATHOD //type
				} , //seg 0



};






