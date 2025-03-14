/*
 * priv.h
 *
 *  Created on: Mar 7, 2025
 *      Author: User
 */

#ifndef PRIV_H_
#define PRIV_H_

#define  UDR          *((volatile u8*)0x2C)
#define  UCSRA        *((volatile u8*)0x2B)
#define  UCSRB        *((volatile u8*)0x2A)
#define  UCSRC_UBRRH  *((volatile u8*)0x29)
#define  UBRRL        *((volatile u8*)0x29)
//UCSRA
#define RXC 7  //Receive Complete(1)
#define TXC 6  //Transmit Complete(1)
#define UDRE 5 //T Data Register Empty(1)
#define Frame_Error 4
#define OVER_RUN 3
#define PE 2   //– PE: Parity Error, set to zero
#define U2X 1 // Double the USART Transmission Speed(1)
#define MPCM 0 // Multi-processor Communication Mode(1)
//UCSRB
#define RXCIE 7 //RX Complete Interrupt Enable(1)
#define TXCIE 6 //TX Complete Interrupt Enable(1)
#define UDRIE 5 // USART Data Register Empty Interrupt Enable
#define RXEN 4 // Receiver Enable,must set to 1
#define TXEN 3 // Transmitter Enable,must set to 1
#define UCSZ2 2 //Character Size, with bit1,2 in UCSRC

//UCSRC
#define URSEL 7// Register Select,set one to use UCSRC,0 to use UBRRH
#define UMSEL 6 //USART Mode Select,0 for Asynchronous Operation,1 for synchronous Operation
//bit 5,4 patiry select
#define USBS 3 // Stop Bit Select , 0 for one bit ,1 for two
#define CSBIT1 2 //character size
#define CSBIT2 1

//USART Baud Rate Registers – UBRRL and UBRRH

/////////////////////////////////////////////////

#define Synchronous 1
#define ASynchronous 0

#define ENABLE 2
#define DISABLE 3

#define  DOUBLE_SPEED 2
#define  x1_SPEED 3

#define  EVEN_PARITY 8
#define   ODD_PARITY 7

#define  STOP_BIT_1 0
#define  STOP_BIT_2 1

#define  DATA_SIZE_5_BIT    0
#define  DATA_SIZE_6_BIT    1
#define  DATA_SIZE_7_BIT    2
#define  DATA_SIZE_8_BIT    3
#define  DATA_SIZE_9_BIT    4


/////////////////////










#endif /* PRIV_H_ */
