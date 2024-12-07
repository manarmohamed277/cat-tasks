/*
 * LCD_int.h
 *
 *  Created on: Nov 24, 2024
 *      Author: User
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_

ES_ERROR LCD_enuinit(void);

ES_ERROR LCD_enuDisplayChar(u8 copy_u8data);

ES_ERROR LCD_enuSendCommand(u8 copy_u8command);

ES_ERROR LCD_enuDisplayString(u8 copy_u8string);

#endif /* LCD_INT_H_ */
