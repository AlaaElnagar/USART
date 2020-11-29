/*
 * main.c


 *  Created on: 12/11/2020
 *      Author: ALAA ELNAGAR
 *      PHONE :+201019793647
 */
#include <util/delay.h>


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Private.h"
#include "DIO_Configure.h"
#include "DIO_reference.h"
#include "USART_Interface.h"

int main (){
u8 x=0;

DIO_VidSetPinDirection(PORTA_NUM,7,1);
DIO_VidSetPinDirection(PORTC_NUM,0,1);




	USART_VidInit();

/*master section*/
	while(1){

	USART_VidTransmit(USART_VidRecive());
		//while(1){
//		USART_VidSendAdressMPCM(MCU2STARTADDRESS);
//		USART_VidSendDataMPCM('a');
//		_delay_ms(1000);
//		USART_VidSendAdressMPCM(MCU2STOPADDRESS);
//		}
//
//
//x=USART_VidReciveMPCM();
//if (x=='a'){TOGGLE_BIT(PORTA,PIN7_NUM);}
//
//



}
}
