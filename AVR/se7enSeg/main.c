/*
 * main.c
 *
 *  Created on: Nov 23, 2024
 *      Author: User
 */
#include "stdTypes.h"
#include"errorState.h"
#include <util/delay.h>

#include"DIO_int.h"
#include"seven_seg_int.h"

int main(void){
	ES_ERROR error;
	DIO_enuInit();
	seven_seg_enuInit();

	while (1)
	{
		if(error == ES_OK)
		{
			for (u8 i=0; i<10 ; i++)
			{
				seven_seg_enuDispNum(i);
				_delay_ms(500);
			}
		}
	}
	return 0;


}
