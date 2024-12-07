/*
 * EXIT_int.h
 *
 *  Created on: Dec 5, 2024
 *      Author: User
 */

#ifndef EXIT_INT_H_
#define EXIT_INT_H_

#define EXTI_LINE0   6
#define EXTI_LINE1   7
#define EXTI_LINE2   5

#define EXTI_FALLING_EDGE  0
#define EXTI_RISING_EDGE   1
#define EXTI_LOW_LEVEL     2
#define EXTI_ON_CHANGE     3



ES_ERROR EXIT_enuInit();
ES_ERROR EXIT_enuEnaleINT(u8 copy_u8Line);
ES_ERROR EXIT_enuDisableINT(u8 copy_u8Line);
ES_ERROR EXIT_enuClearFlag(u8 copy_u8Line);
ES_ERROR EXIT_enuGetFlag(u8 copy_u8Line,u8 *copy_pFval);
ES_ERROR EXIT_enuSetCallBack(void(*copy_pSetCllBack)(void));
ES_ERROR EXIT_enuSetSignalLatch(u8 copy_u8Line,u8 copy_u8senseMode );









#endif /* EXIT_INT_H_ */
