/*
 * LED_prog.c
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */

#include"stdTypes.h"
#include"errorState.h"

#include"LED_priv.h"
#include"LED_config.h"

#include"DIO_int.h"






ES_ERROR enuLED_init(LED_t * copy_pstrLedConfig){
	ES_ERROR local_enuError=ES_NOK;

	if(copy_pstrLedConfig!=NULL){
		u8 localIterator=0;
		for(localIterator=0;localIterator<LED_NUM;localIterator++){

	    local_enuError=DIO_enuSetpindir(copy_pstrLedConfig[localIterator].LED_portID,copy_pstrLedConfig[localIterator].LED_pinID,DIO_u8OUTPUT);

	    if(copy_pstrLedConfig[localIterator].LED_connection==LED_SINK)
	    {
	    	if(copy_pstrLedConfig[localIterator].LED_initialstate==LED_ON)
	    	{
	    		local_enuError=DIO_enuSetpinval(copy_pstrLedConfig[localIterator].LED_portID,copy_pstrLedConfig[localIterator].LED_pinID,DIO_u8LOW);
	    	}
	    	else if (copy_pstrLedConfig[localIterator].LED_initialstate==LED_OFF)
	    	{
	    		local_enuError=DIO_enuSetpinval(copy_pstrLedConfig[localIterator].LED_portID,copy_pstrLedConfig[localIterator].LED_pinID,DIO_u8HIGH);
	    	}

	    	else
	    					{
	    						return ES_OUT_OF_RANGE;
	    					}
	    }
	    else if (copy_pstrLedConfig[localIterator].LED_connection==LED_SOURCE)
	    {
	    	if(copy_pstrLedConfig[localIterator].LED_initialstate==LED_ON)
	    		    	{
	    		    		local_enuError=DIO_enuSetpinval(copy_pstrLedConfig[localIterator].LED_portID,copy_pstrLedConfig[localIterator].LED_pinID,DIO_u8HIGH);
	    		    	}
	    		    	else if (copy_pstrLedConfig[localIterator].LED_initialstate==LED_OFF)
	    		    	{
	    		    		local_enuError=DIO_enuSetpinval(copy_pstrLedConfig[localIterator].LED_portID,copy_pstrLedConfig[localIterator].LED_pinID,DIO_u8LOW);
	    		    	}
	    		    	else
	    		    					{
	    		    						return ES_OUT_OF_RANGE;
	    		    					}
	    }

		}
	}
	else { local_enuError= ES_NULL_POINTER;}




	return local_enuError ;
}


ES_ERROR enuLED_turnON(LED_t * copy_pstrLedID){
	ES_ERROR local_enuError=ES_NOK;

	if(copy_pstrLedID!=NULL){
		 if(copy_pstrLedID->LED_connection==LED_SINK)
			    {
			 local_enuError=DIO_enuSetpinval(copy_pstrLedID->LED_portID,copy_pstrLedID->LED_pinID,DIO_u8LOW);
			    }
		 else if (copy_pstrLedID->LED_connection==LED_SOURCE)
		 {
			 local_enuError=DIO_enuSetpinval(copy_pstrLedID->LED_portID,copy_pstrLedID->LED_pinID,DIO_u8HIGH);
		 }
		 else
		 				{
		 					return ES_OUT_OF_RANGE;
		 				}

	}
	else{local_enuError=ES_NULL_POINTER;}

}



ES_ERROR enuLED_turnOFF(LED_t *copy_pstrLedID){
	ES_ERROR local_enuError=ES_NOK;

	if(copy_pstrLedID!=NULL){
			 if(copy_pstrLedID->LED_connection==LED_SINK)
				    {
				 local_enuError=DIO_enuSetpinval(copy_pstrLedID->LED_portID,copy_pstrLedID->LED_pinID,DIO_u8HIGH);
				    }
			 else if (copy_pstrLedID->LED_connection==LED_SOURCE)
			 {
				 local_enuError=DIO_enuSetpinval(copy_pstrLedID->LED_portID,copy_pstrLedID->LED_pinID,DIO_u8LOW);
			 }
			 else
			 				{
			 					return ES_OUT_OF_RANGE;
			 				}

		}
		else{local_enuError=ES_NULL_POINTER;}


}

