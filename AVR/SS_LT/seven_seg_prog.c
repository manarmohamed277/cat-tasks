/*
 * seven_seg_prog.c
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */
#include "stdTypes.h"
#include "errorState.h"

#include"DIO_int.h"

#include "seven_seg_config.h"
#include "seven_seg_priv.h"



extern SEG_t SEVSEG_AstrSegConfig[SEG_NUM];

ES_ERROR seven_seg_enuInit(SEG_t * copy_pstrSegConfig){
	ES_ERROR local_enuErrorState=ES_NOK;

	u8 local_u8iter=0;
	for(local_u8iter=0;local_u8iter<SEG_NUM;local_u8iter++)
	{
		DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8APORT,copy_pstrSegConfig[local_u8iter].SEG_u8BPIN,DIO_u8OUTPUT);
		DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8BPORT,copy_pstrSegConfig[local_u8iter].SEG_u8BPIN,DIO_u8OUTPUT);
		DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8CPORT,copy_pstrSegConfig[local_u8iter].SEG_u8CPIN,DIO_u8OUTPUT);
		DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8DPORT,copy_pstrSegConfig[local_u8iter].SEG_u8DPIN,DIO_u8OUTPUT);
		DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8EPORT,copy_pstrSegConfig[local_u8iter].SEG_u8EPIN,DIO_u8OUTPUT);
		DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8FPORT,copy_pstrSegConfig[local_u8iter].SEG_u8FPIN,DIO_u8OUTPUT);
		DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8GPORT,copy_pstrSegConfig[local_u8iter].SEG_u8GPIN,DIO_u8OUTPUT);

		if (copy_pstrSegConfig[local_u8iter].SEG_u8CMN_PORT!=NOT_CONNECTED && copy_pstrSegConfig[local_u8iter].SEG_u8CMN_PIN!=NOT_CONNECTED )
		{
			DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8CMN_PORT,copy_pstrSegConfig[local_u8iter].SEG_u8CMN_PIN,DIO_u8OUTPUT);
		}

		if (copy_pstrSegConfig[local_u8iter].SEG_u8DOT_PORT!=NOT_CONNECTED && copy_pstrSegConfig[local_u8iter].SEG_u8DOT_PIN!=NOT_CONNECTED )
				{
					DIO_enuSetpindir(copy_pstrSegConfig[local_u8iter].SEG_u8DOT_PORT,copy_pstrSegConfig[local_u8iter].SEG_u8DOT_PIN,DIO_u8OUTPUT);
				}

	}

	return local_enuErrorState;
}


ES_ERROR seven_seg_enuDispNum(u8 copy_u8segID,u8 copy_u8num){
	ES_ERROR local_enuErrorState=ES_NOK;

	if(copy_u8num<10&& copy_u8segID<=SEG_NUM-1 )
	{
		if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_CATHOD){
		DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APIN,(SEG_ai8NumDisplay [copy_u8num]>>0)&1);
		DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPIN,(SEG_ai8NumDisplay [copy_u8num]>>1)&1);
		DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPIN,(SEG_ai8NumDisplay [copy_u8num]>>2)&1);
		DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPIN,(SEG_ai8NumDisplay [copy_u8num]>>3)&1);
		DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPIN,(SEG_ai8NumDisplay [copy_u8num]>>4)&1);
		DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPIN,(SEG_ai8NumDisplay [copy_u8num]>>5)&1);
		DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPIN,(SEG_ai8NumDisplay [copy_u8num]>>6)&1);
				}


		else if 	(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_ANODE){

			    DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APIN,!(SEG_ai8NumDisplay [copy_u8num]>>0)&1);
				DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPIN,!(SEG_ai8NumDisplay [copy_u8num]>>1)&1);
				DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPIN,!(SEG_ai8NumDisplay [copy_u8num]>>2)&1);
				DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPIN,!(SEG_ai8NumDisplay [copy_u8num]>>3)&1);
				DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPIN,!(SEG_ai8NumDisplay [copy_u8num]>>4)&1);
				DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPIN,!(SEG_ai8NumDisplay [copy_u8num]>>5)&1);
				DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPIN,!(SEG_ai8NumDisplay [copy_u8num]>>6)&1);
						}





	}


 	return local_enuErrorState;

}




ES_ERROR seven_seg_enableCommon(u8 copy_u8segID){
	ES_ERROR local_enuErrorState=ES_NOK;

	if(copy_u8segID<SEG_NUM){
		if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_CATHOD)
		{
			 local_enuErrorState=	DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CMN_PORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CMN_PIN,DIO_u8LOW);

		}


		else if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_ANODE)
				{
			 local_enuErrorState=	DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CMN_PORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CMN_PIN,DIO_u8HIGH);

				}

	}




return local_enuErrorState;}




ES_ERROR seven_seg_enableDot(u8 copy_u8segID){

ES_ERROR local_enuErrorState=ES_NOK;


if(copy_u8segID<SEG_NUM){
	if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_CATHOD)
	{
		 local_enuErrorState=	DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PIN,DIO_u8HIGH);

	}


	else if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_ANODE)
			{
		 local_enuErrorState=	DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PIN,DIO_u8LOW);

			}

}


return local_enuErrorState;}

ES_ERROR seven_seg_disableDot(u8 copy_u8segID){
	ES_ERROR local_enuErrorState=ES_NOK;

	if(copy_u8segID<SEG_NUM){
		if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_CATHOD)
		{
			 local_enuErrorState=	DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PIN,DIO_u8LOW);

		}


		else if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_ANODE)
				{
			 local_enuErrorState=	DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DOT_PIN,DIO_u8HIGH);

				}

	}





		return local_enuErrorState;
	}







ES_ERROR seven_seg_clearDisplay(u8 copy_u8segID){
	ES_ERROR local_enuErrorState=ES_NOK;

	if(copy_u8segID<SEG_NUM){
			if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_CATHOD)
			{
				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APIN,DIO_u8LOW);
						DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPIN,DIO_u8LOW);
						DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPIN,DIO_u8LOW);
						DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPIN,DIO_u8LOW);
						DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPIN,DIO_u8LOW);
						DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPIN,DIO_u8LOW);
						DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPIN,DIO_u8LOW);
			}



			else if(SEVSEG_AstrSegConfig[copy_u8segID].SEG_TYPE==COMMON_ANODE)
					{

				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8APIN,DIO_u8HIGH);
				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8BPIN,DIO_u8HIGH);
				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8CPIN,DIO_u8HIGH);
				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8DPIN,DIO_u8HIGH);
				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8EPIN,DIO_u8HIGH);
				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8FPIN,DIO_u8HIGH);
				        DIO_enuSetpinval(SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPORT,SEVSEG_AstrSegConfig[copy_u8segID].SEG_u8GPIN,DIO_u8HIGH);


					}


}
	return local_enuErrorState;

}


