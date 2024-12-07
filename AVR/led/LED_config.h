/*
 * LED_config.h
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */

#ifndef LED_CONFIG_H_
#define LED_CONFIG_H_


#define LED_NUM 3

typedef struct LED_t{
	u8 LED_portID;
	u8 LED_pinID;
	u8 LED_connection;
	u8 LED_initialstate;

} LED_t;

#endif /* LED_CONFIG_H_ */
