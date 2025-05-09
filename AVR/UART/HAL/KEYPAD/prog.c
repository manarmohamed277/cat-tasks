/*
 * prog.c
 *
 *  Created on: Mar 7, 2025
 *      Author: User
 */
#include  "../../stdTypes.h"
#include  "../../MCAL/DIO/errorState.h"
#include "../../MCAL/DIO/interface.h"
#include "KP_init.h"
#include "KP_config.h"
#include <util/delay.h>
#include "KP_PRIV.h"




void KP_u8KeyPadInit(kp_conf* keypad){
	  for(u8 i=0; i<ROW_NUM; i++)
	       {

	    	   DIO_SET_PIN_DIR(keypad->rowsPins[i].port,keypad->rowsPins[i].pin,DIO_INPUT);
	    	   DIO_SET_PIN_VAL(keypad->rowsPins[i].port,keypad->rowsPins[i].pin,DIO_HIGH);
}
	  for(u8 i=0; i<COLUMN_NUM; i++)
	 	       {

		  DIO_SET_PIN_DIR(keypad->columnsPins[i].port,keypad->columnsPins[i].pin,DIO_OUTPUT);
		  DIO_SET_PIN_VAL(keypad->columnsPins[i].port,keypad->columnsPins[i].pin,DIO_HIGH);
}
}

u8 KP_u8GetPressedKey(kp_conf* keypad){

    u8 local_u8pressedKey= KEYPAD_NO_PRESSED_KEY;
static	u8 local_u8ketpadArr[4][4]=KEYPAD_ARR;

	u8 local_u8ColumnIter=0;
	u8 local_u8RowIter=0;
  for(;local_u8ColumnIter<COLUMN_NUM;local_u8ColumnIter++)
  {
	  //activate currant column
	   DIO_SET_PIN_VAL(keypad->columnsPins[local_u8ColumnIter].port,keypad->columnsPins[local_u8ColumnIter].pin,DIO_LOW);
        _delay_ms(1);
        local_u8RowIter=0;
       for(; local_u8RowIter<ROW_NUM; local_u8RowIter++)
       {
    	   u8 local_u8RowVal;
    	   DIO_GET_PIN_VAL(keypad->rowsPins[local_u8RowIter].port,keypad->rowsPins[local_u8RowIter].pin,&local_u8RowVal);
    	 //check if switch is pressed
    	   if(local_u8RowVal==DIO_LOW){
    		  local_u8pressedKey=local_u8ketpadArr[local_u8RowIter][local_u8ColumnIter];
    	   //polling until the key is released
    	   while(local_u8RowVal==DIO_LOW)
    	    {
    		   DIO_GET_PIN_VAL(keypad->rowsPins[local_u8RowIter].port,keypad->rowsPins[local_u8RowIter].pin,&local_u8RowVal);
    	    }
    	      return  local_u8pressedKey;
       }
       //deactivate currant column
  }
       DIO_SET_PIN_VAL(keypad->columnsPins[local_u8ColumnIter].port,keypad->columnsPins[local_u8ColumnIter].pin,DIO_HIGH);

}
  return local_u8pressedKey;
}
