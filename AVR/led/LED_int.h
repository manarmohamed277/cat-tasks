/*
 * LED_int.h
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */

#ifndef LED_INT_H_
#define LED_INT_H_


ES_ERROR enuLED_init(LED_t * copy_pstrLedConfig);
ES_ERROR enuLED_turnON(LED_t * copy_pstrLedID);
ES_ERROR enuLED_turnOFF(LED_t *copy_pstrLedID);





#endif /* LED_INT_H_ */
