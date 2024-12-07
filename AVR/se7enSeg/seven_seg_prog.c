/*
 * seven_seg_prog.c
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */
#include "stdTypes.h"
#include "errorState.h"

#include "seven_seg_config.h"
#include "seven_seg_priv.h"

#include"DIO_int.h"

ES_ERROR seven_seg_enuInit(void){
	ES_ERROR local_enuErrorState=ES_NOK;

	u32 local_u32check=0;

	local_u32check =DIO_enuSetpindir(SEG_APORT,SEG_APIN,DIO_u8OUTPUT);
	local_u32check|=(DIO_enuSetpindir(SEG_BPORT,SEG_BPIN,DIO_u8OUTPUT)<<3);
    local_u32check|=(DIO_enuSetpindir(SEG_CPORT,SEG_CPIN,DIO_u8OUTPUT)<<6);
    local_u32check|=(DIO_enuSetpindir(SEG_DPORT,SEG_DPIN,DIO_u8OUTPUT)<<9);
    local_u32check|=(DIO_enuSetpindir(SEG_EPORT,SEG_EPIN,DIO_u8OUTPUT)<<12);
    local_u32check|=(DIO_enuSetpindir(SEG_FPORT,SEG_FPIN,DIO_u8OUTPUT)<<15);
    local_u32check|=(DIO_enuSetpindir(SEG_GPORT,SEG_GPIN,DIO_u8OUTPUT)<<18);

#if SEG_CMN_PIN <= DIO_u8PIN7  && SEG_CMN_PORT <= DIO_u8PORTD
	local_enuErrorState=DIO_enuSetpindir(SEG_CMN_PORT,SEG_CMN_PIN,DIO_u8OUTPUT);

#elif SEG-CMN_PIN	== NOT_CONNECTED || SEG_CMN_PORT == NOT_CONNECTED

#else
#error "common pin has wrong selection"
#endif


#if SEG_DOT_PIN <= DIO_u8PIN7  && SEG_DOT_PORT <= DIO_u8PORTD
	local_enuErrorState=DIO_enuSetpindir(SEG_DOT_PORT,SEG_DOT_PIN,DIO_u8OUTPUT);

#elif SEG-DOT_PIN == NOT_CONNECTED || SEG_DOT_PORT == NOT_CONNECTED

#else
#error "dot pin has wrong selection"
#endif

u8 local_u8iter=0;
for(local_u8iter=0;local_u8iter<21;local_u8iter +=3){
	if((local_u32check>>local_u8iter)&7 !=ES_OK)
	{
		return local_enuErrorState;
	}
}
    local_enuErrorState=ES_OK;
	return local_enuErrorState;
}


ES_ERROR seven_seg_enuDispNum(u8 copy_u8num){
	ES_ERROR local_enuErrorState=ES_NOK;

	u32 local_u32check=0;

if(copy_u8num<10){
#if SEG_TYPE == COMMON_CATHOD
 local_u32check=  DIO_enuSetpinval(SEG_APORT,SEG_APIN,(SEG_ai8NumDisplay[copy_u8num]>>0)&1);
 local_u32check|=(DIO_enuSetpinval(SEG_BPORT,SEG_BPIN,!(SEG_ai8NumDisplay[copy_u8num]>>1)&1)<<3);
 local_u32check|=(DIO_enuSetpinval(SEG_CPORT,SEG_CPIN,!(SEG_ai8NumDisplay[copy_u8num]>>2)&1)<<6);
 local_u32check|=(DIO_enuSetpinval(SEG_DPORT,SEG_DPIN,!(SEG_ai8NumDisplay[copy_u8num]>>3)&1)<<9);
 local_u32check|=(DIO_enuSetpinval(SEG_EPORT,SEG_EPIN,!(SEG_ai8NumDisplay[copy_u8num]>>4)&1)<<12);
 local_u32check|=(DIO_enuSetpinval(SEG_FPORT,SEG_FPIN,!(SEG_ai8NumDisplay[copy_u8num]>>5)&1) <<15);
 local_u32check|=(DIO_enuSetpinval(SEG_GPORT,SEG_GPIN,!(SEG_ai8NumDisplay[copy_u8num]>>6)&1)<<18);
#elif SEG_TYPE == COMMON_ANODE
 local_u32check= DIO_enuSetpinval(SEG_APORT,SEG_APIN, !(SEG_ai8NumDisplay[copy_u8num]>>0)&1);
 local_u32check|=(DIO_enuSetpinval(SEG_BPORT,SEG_BPIN,!(SEG_ai8NumDisplay[copy_u8num]>>1)&1)<<3);
 local_u32check|=(DIO_enuSetpinval(SEG_CPORT,SEG_CPIN,!(SEG_ai8NumDisplay[copy_u8num]>>2)&1)<<6);
 local_u32check|=(DIO_enuSetpinval(SEG_DPORT,SEG_DPIN,!(SEG_ai8NumDisplay[copy_u8num]>>3)&1)<<9);
 local_u32check|=(DIO_enuSetpinval(SEG_EPORT,SEG_EPIN,!(SEG_ai8NumDisplay[copy_u8num]>>4)&1)<<12);
 local_u32check|=(DIO_enuSetpinval(SEG_FPORT,SEG_FPIN,!(SEG_ai8NumDisplay[copy_u8num]>>5)&1) <<15);
 local_u32check|=(DIO_enuSetpinval(SEG_GPORT,SEG_GPIN,!(SEG_ai8NumDisplay[copy_u8num]>>6)&1)<<18);
#else
#error "seg type has wrong selection"
#endif

}
else
{
	local_enuErrorState=ES_OUT_OF_RANGE;
}
 u8 local_u8iter=0;
 for(local_u8iter=0;local_u8iter<21;local_u8iter +=3){
 	if((local_u32check>>local_u8iter)&7 !=ES_OK)
 	{
 		return local_enuErrorState;
 	}
 }
     local_enuErrorState=ES_OK;
 	return local_enuErrorState;

}




ES_ERROR seven_seg_enableCommon(void){
	ES_ERROR local_enuErrorState=ES_NOK;
#if SEG_CMN_PIN <= DIO_u8PIN7  && SEG_CMN_PORT <= DIO_u8PORTD

#if SEG_TYPE == COMMON_CATHOD
	local_enuErrorState=DIO_enuSetpinval(SEG_CMN_PORT,SEG_CMN_PIN,DIO_u8LOW);
#elif     SEG_TYPE == COMMON_ANODE
	local_enuErrorState=DIO_enuSetpinval(SEG_CMN_PORT,SEG_CMN_PIN,DIO_u8HIGH);
#else
#error "seg type pin has wrong selection"
#endif

#elif SEG-CMN_PIN == NOT_CONNECTED || SEG_CMN_PORT == NOT_CONNECTED

#else
#error "COMMON pin has wrong selection"
#endif

		return local_enuErrorState;
}


ES_ERROR seven_seg_disableCommon(void){
ES_ERROR local_enuErrorState=ES_NOK;
#if SEG_CMN_PIN <= DIO_u8PIN7  && SEG_CMN_PORT <= DIO_u8PORTD

#if SEG_TYPE == COMMON_CATHOD
	local_enuErrorState=DIO_enuSetpinval(SEG_CMN_PORT,SEG_CMN_PIN,DIO_u8HIGH);
#elif     SEG_TYPE == COMMON_ANODE
	local_enuErrorState=DIO_enuSetpinval(SEG_CMN_PORT,SEG_CMN_PIN,DIO_u8LOW);
#else
#error "seg type pin has wrong selection"
#endif

#elif SEG-CMN_PIN == NOT_CONNECTED || SEG_CMN_PORT == NOT_CONNECTED

#else
#error "COMMON pin has wrong selection"
#endif


return local_enuErrorState;}




ES_ERROR seven_seg_enableDot(void){

ES_ERROR local_enuErrorState=ES_NOK;
#if SEG_DOT_PIN <= DIO_u8PIN7  && SEG_DOT_PORT <= DIO_u8PORTD

#if SEG_TYPE == COMMON_CATHOD
	local_enuErrorState=DIO_enuSetpinval(SEG_DOT_PORT,SEG_DOT_PIN,DIO_u8HIGH);
#elif     SEG_TYPE == COMMON_ANODE
	local_enuErrorState=DIO_enuSetpinval(SEG_DOT_PORT,SEG_DOT_PIN,DIO_u8LOW);
#else
#error "seg type pin has wrong selection"
#endif

#elif SEG-DOT_PIN == NOT_CONNECTED || SEG_DOT_PORT == NOT_CONNECTED

#else
#error "DOT pin has wrong selection"
#endif

		return local_enuErrorState;







return local_enuErrorState;}
ES_ERROR seven_seg_disableDot(void){
	ES_ERROR local_enuErrorState=ES_NOK;

	#if SEG_DOT <= DIO_u8PIN7 && SEG_DOT_PORT <= DIO_u8PORTD
		#if SEG_TYPE == COMMON_CATHODE
		Local_enuErrorState = DIO_enuSetPinValue(SEG_DOT_PORT,SEG_DOT , DIO_u8HIGH);
		#elif SEG_TYPE == COMMON_ANODE
		Local_enuErrorState = DIO_enuSetPinValue(SEG_DOT_PORT,SEG_DOT , DIO_u8LOW);
		#else
		#error "SEG type has a wrong selection"
		#endif
	#elif SEG_DOT == NOT_CONNECTED || SEG_DOT_PORT == NOT_CONNECTED

	#else
	#error"your DOT Pin has a wrong selection"
	#endif

		return local_enuErrorState;
	}







ES_ERROR seven_seg_clearDisplay(void){
	ES_ERROR local_enuErrorState=ES_NOK;

#if SEG_TYPE == COMMON_CATHOD
 DIO_enuSetpinval(SEG_APORT,SEG_APIN,DIO_u8LOW);
 DIO_enuSetpinval(SEG_BPORT,SEG_BPIN,DIO_u8LOW);
 DIO_enuSetpinval(SEG_CPORT,SEG_CPIN,DIO_u8LOW);
 DIO_enuSetpinval(SEG_DPORT,SEG_DPIN,DIO_u8LOW);
 DIO_enuSetpinval(SEG_EPORT,SEG_EPIN,DIO_u8LOW);
 DIO_enuSetpinval(SEG_FPORT,SEG_FPIN,DIO_u8LOW);
 DIO_enuSetpinval(SEG_GPORT,SEG_GPIN,DIO_u8LOW);
#elif SEG_TYPE == COMMON_ANODE
DIO_enuSetpinval(SEG_APORT,SEG_APIN,DIO_u8HIGH);
DIO_enuSetpinval(SEG_BPORT,SEG_BPIN,DIO_u8HIGH);
DIO_enuSetpinval(SEG_CPORT,SEG_CPIN,DIO_u8HIGH);
DIO_enuSetpinval(SEG_DPORT,SEG_DPIN,DIO_u8HIGH);
DIO_enuSetpinval(SEG_EPORT,SEG_EPIN,DIO_u8HIGH);
DIO_enuSetpinval(SEG_FPORT,SEG_FPIN,DIO_u8HIGH);
DIO_enuSetpinval(SEG_GPORT,SEG_GPIN,DIO_u8HIGH);
#else
#error "seg type has wrong selection"
#endif

		return local_enuErrorState;
}





