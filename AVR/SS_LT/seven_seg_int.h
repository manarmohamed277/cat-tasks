/*
 * seven_seg_int.h
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */

#ifndef SEVEN_SEG_INT_H_
#define SEVEN_SEG_INT_H_

ES_ERROR seven_seg_enuInit(SEG_t * copy_pstrSegConfig);

ES_ERROR seven_seg_enuDispNum(u8 copy_u8segID ,u8 copy_u8num);

ES_ERROR seven_seg_enableCommon(u8 copy_u8segID);

ES_ERROR seven_seg_disableCommon(u8 copy_u8segID);

ES_ERROR seven_seg_enableDot(u8 copy_u8segID);

ES_ERROR seven_seg_disableDot(u8 copy_u8segID);

ES_ERROR seven_seg_clearDisplay(u8 copy_u8segID);

#endif /* SEVEN_SEG_INT_H_ */
