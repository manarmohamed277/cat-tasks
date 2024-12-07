/*
 * EXIT_prog.c
 *
 *  Created on: Dec 5, 2024
 *      Author: User
 */
#include"errorState.h"
#include"stdTypes.h"

#include"DIO_int.h"

#include"EXIT_priv.h"
#include"EXIT_cofig.h"

void(*callBakPointer[3])(void)={NULL};

ES_ERROR EXIT_enuInit(){
	ES_ERROR error_state=ES_OK;
#ifdef  EXTI_LINE
	error_state=ES_OK;
#if EXIT_LINE==LINE0
   #if EXIT_SENSE_MODE==LOW_LEVEL
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN0,DIO_u8LOW);    DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN1,DIO_u8LOW);
   #elif  EXIT_SENSE_MODE==FALLING_EDGE
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN0,DIO_u8LOW);    DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN1,DIO_u8HIGH);
   #elif   EXIT_SENSE_MODE==RISING_EDGE
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN0,DIO_u8HIGH);    DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN1,DIO_u8HIGH);
   #elif   EXIT_SENSE_MODE==_ON_CHANGE
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN0,DIO_u8HIGH);    DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN1,DIO_u8LOW);
#else
	  #error " EXIT_SENSE_MODE wrong option"
#endif

#elif  EXIT_LINE==LINE1
   #if EXIT_SENSE_MODE==LOW_LEVEL
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN2,DIO_u8LOW);     DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN3,DIO_u8LOW);
   #elif  EXIT_SENSE_MODE==FALLING_EDGE
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN2,DIO_u8LOW);     DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN3,DIO_u8HIGH);
   #elif   EXIT_SENSE_MODE==RISING_EDGE
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN2,DIO_u8HIGH);    DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN3,DIO_u8HIGH);
   #elif   EXIT_SENSE_MODE==_ON_CHANGE
	  DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN2,DIO_u8HIGH);    DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN3,DIO_u8LOW);
   #else
   #error " EXIT_SENSE_MODE wrong option"
#endif

#elif  EXIT_LINE==LINE2

   if  EXIT_SENSE_MODE==FALLING_EDGE
	  DIO_enuSetpinval(MCUCSR_REG,DIO_u8PIN6,DIO_u8LOW);     DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN3,DIO_u8LOW);
   #elif   EXIT_SENSE_MODE==RISING_EDGE
	  DIO_enuSetpinval(MCUCSR_REG,DIO_u8PIN6,DIO_u8HIGH);    DIO_enuSetpinval(MCUCR_REG,DIO_u8PIN3,DIO_u8HIGH);
#else
	  #error " EXIT_SENSE_MODE wrong option"
#endif
#endif
	return error_state;
}


ES_ERROR EXIT_enuEnaleINT(u8 copy_u8Line){
	ES_ERROR error_state=ES_NOK;
	if ( (copy_u8Line>LINE2) && (copy_u8Line<LINE1) ){
DIO_enuSetpinval(GICR_REG ,copy_u8Line,DIO_u8HIGH);
error_state=ES_OK;
	}

		return error_state;
}


ES_ERROR EXIT_enuDisableINT(u8 copy_u8Line){
	ES_ERROR error_state=ES_NOK;

	if ( (copy_u8Line>LINE2) && (copy_u8Line<LINE1) ){
	DIO_enuSetpinval(GICR_REG ,copy_u8Line,DIO_u8LOW);
	error_state=ES_OK;
		}

		return error_state;
}


ES_ERROR EXIT_enuClearFlag(u8 copy_u8Line){
	ES_ERROR error_state=ES_NOK;
	if ( (copy_u8Line>LINE2) && (copy_u8Line<LINE1) ){
	DIO_enuSetpinval(GIFR_REG ,copy_u8Line,DIO_u8HIGH);
	error_state=ES_OK;
		}

		return error_state;
}


ES_ERROR EXIT_enuSetCallBack(void(*copy_pSetCllBack)(void),u8 copy_u8Line){
	ES_ERROR error_state=ES_OK;
 if(copy_pSetCllBack)
	callBakPointer[copy_u8Line]=copy_pSetCllBack;

 else error_state=ES_NULL_POINTER;

		return error_state;
}
ES_ERROR EXIT_enuSetSignalLatch(u8 copy_u8Line,u8 copy_u8senseMode ){
	ES_ERROR error_state=ES_OK;
if(copy_u8Line==LINE0 ||copy_u8Line==LINE1){
	u8 local_u8Line=copy_u8Line-6;

	switch(copy_u8senseMode){

	case FALLING_EDGE:
	{
		error_state|= DIO_enuSetpinval(MCUCR_REG,local_u8Line,DIO_u8LOW);    DIO_enuSetpinval(MCUCR_REG,local_u8Line+1,DIO_u8HIGH);
		 break;
	}
	case RISING_EDGE:

	{
		error_state|=DIO_enuSetpinval(MCUCR_REG,local_u8Line,DIO_u8HIGH);    DIO_enuSetpinval(MCUCR_REG,local_u8Line,DIO_u8HIGH);
		break;
	}
	case LOW_LEVEL:
	{
		error_state|=DIO_enuSetpinval(MCUCR_REG,local_u8Line,DIO_u8LOW);    DIO_enuSetpinval(MCUCR_REG,local_u8Line,DIO_u8LOW);
				break;
	}
	case ON_CHANGE:
	{
		error_state|=DIO_enuSetpinval(MCUCR_REG,local_u8Line,DIO_u8HIGH);    DIO_enuSetpinval(MCUCR_REG,local_u8Line,DIO_u8LOW);
				break;
	}

	}
}
	else if(copy_u8Line==LINE2){
		switch( copy_u8senseMode ){

				/* INT Sence Control (Trigger) For EXTI0 & EXTI1   */
				case FALLING_EDGE : error_state|=DIO_enuSetpinval( MCUCSR_REG , 6,0 );  break;
				case RISING_EDGE  :error_state|= DIO_enuSetpinval( MCUCSR_REG , 6,1 );  break;

				}
	}

		return error_state;
}

ES_ERROR EXIT_enuGetFlag(u8 copy_u8Line,u8 *copy_pFval){
	ES_ERROR error_state=ES_OK;

	if ( (copy_u8Line>LINE2) && (copy_u8Line<LINE1) ){
		DIO_enugetpinval(GIFR_REG ,copy_u8Line,copy_pFval);
		error_state=ES_OK;
			}
			return error_state;
}







void __vector_1(void) __attribute__((signal));
void __vector_1(void)
{
if( callBakPointer[0]!= NULL ){
	callBakPointer[0]();

	EXIT_enuClearFlag(LINE0);}

}


void __vector_2(void) __attribute__((signal));
void __vector_2(void)
{
if( callBakPointer[1]!= NULL ){
	callBakPointer[1]();

	EXIT_enuClearFlag(LINE1);}}







void __vector_3(void) __attribute__((signal));
void __vector_3(void)
{
if( callBakPointer[2]!= NULL ){
	callBakPointer[2]();

	EXIT_enuClearFlag(LINE2);}

}


