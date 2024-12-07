/*
 * switch_prog.c
 *
 *  Created on: Nov 7, 2024
 *      Author: User
 */

#include "stdTypes.h"
#include "errorState.h"

#include "switch_priv.h"
#include "switch_config.h"

#include "DIO_int.h"


ES_ERROR Switch_enuInit(SW_t * Copy_AstrSwitchs, u8 copy_u8switchNum)
{
	ES_ERROR Local_enuErrorState = ES_NOK;

	if (Copy_AstrSwitchs != NULL)
	{
		u8 Local_u8Iterator =0;
		for (Local_u8Iterator=0; Local_u8Iterator <copy_u8switchNum ; Local_u8Iterator++)
		{
			Local_enuErrorState = DIO_enuSetpindir(Copy_AstrSwitchs[Local_u8Iterator].SW_PortID ,Copy_AstrSwitchs[Local_u8Iterator].SW_PinID, DIO_u8INPUT);
			Local_enuErrorState = DIO_enuSetpinval(Copy_AstrSwitchs[Local_u8Iterator].SW_PortID ,Copy_AstrSwitchs[Local_u8Iterator].SW_PinID,Copy_AstrSwitchs[Local_u8Iterator].SW_Status);
		}
	}
	else
	{
		Local_enuErrorState = ES_NULL_POINTER;
	}

	return Local_enuErrorState;
}

ES_ERROR Switch_enuGetState(SW_t * Copy_AstrSwitchs, u8 * Copy_pu8SwState)
{
	ES_ERROR Local_enuErrorState = ES_NOK;

	if (Copy_AstrSwitchs != NULL && Copy_pu8SwState != NULL)
	{
		Local_enuErrorState = DIO_enugetpinval(Copy_AstrSwitchs->SW_PortID, Copy_AstrSwitchs->SW_PinID, Copy_pu8SwState);
	}
	else
	{
		Local_enuErrorState = ES_NULL_POINTER;
	}

	return Local_enuErrorState;
}
