/*
 * EXIT_priv.h
 *
 *  Created on: Dec 5, 2024
 *      Author: User
 */

#ifndef EXIT_PRIV_H_
#define EXIT_PRIV_H_





#define MCUCR_REG   *((volatile u8 *)0x55)

#define MCUCSR_REG  *((volatile u8 *)0x54)

#define GICR_REG    *((volatile u8 *)0x5B)

#define GIFR_REG    *((volatile u8 *)0x5A)


#define LINE0   6
#define LINE1   7
#define LINE2   5





#define FALLING_EDGE  0
#define RISING_EDGE   1
#define LOW_LEVEL     2
#define ON_CHANGE     3



#endif /* EXIT_PRIV_H_ */
