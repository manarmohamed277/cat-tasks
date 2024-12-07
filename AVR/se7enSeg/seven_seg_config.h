/*
 * seven_seg_config.h
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */

#ifndef SEVEN_SEG_CONFIG_H_
#define SEVEN_SEG_CONFIG_H_

#define SEG_APORT   DIO_u8PIN0
#define SEG_APIN     DIO_u8PORTD

#define SEG_BPORT     DIO_u8PIN5
#define SEG_BPIN       DIO_u8PORTA

#define SEG_CPORT     DIO_u8PIN3
#define SEG_CPIN       DIO_u8PORTA

#define SEG_DPORT       DIO_u8PIN5
#define SEG_DPIN         DIO_u8PORTB

#define SEG_EPORT       DIO_u8PIN1
#define SEG_EPIN         DIO_u8PORTB

#define SEG_FPORT       DIO_u8PIN1
#define SEG_FPIN         DIO_u8PORTC

#define SEG_GPORT       DIO_u8PIN6
#define SEG_GPIN         DIO_u8PORTC

#define SEG_CMN_PIN     NOT_CONNECTED
#define SEG_CMN_PORT    NOT_CONNECTED

#define SEG_DOT_PIN      NOT_CONNECTED
#define SEG_DOT_PORT     NOT_CONNECTED

#define SEG_TYPE         COMMON_ANODE



#endif /* SEVEN_SEG_CONFIG_H_ */
