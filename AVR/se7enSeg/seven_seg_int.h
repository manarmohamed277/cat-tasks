/*
 * seven_seg_int.h
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */

#ifndef SEVEN_SEG_INT_H_
#define SEVEN_SEG_INT_H_

ES_ERROR seven_seg_enuInit(void);
ES_ERROR seven_seg_enuDispNum(u8 copy_u8num);
ES_ERROR seven_seg_enableCommon(void);
ES_ERROR seven_seg_disableCommon(void);
ES_ERROR seven_seg_enableDot(void);
ES_ERROR seven_seg_disableDot(void);
ES_ERROR seven_seg_clearDisplay(void);
#endif /* SEVEN_SEG_INT_H_ */
