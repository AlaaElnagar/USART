/*
 * DIO_Private.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: alaqsa
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_




#define DDRA  	*((volatile  u8*)0x3a)
#define DDRB  	*((volatile  u8*)0x37)
#define DDRC  	*((volatile  u8*)0x34)
#define DDRD  	*((volatile  u8*)0x31)

#define PORTA 	*((volatile  u8*)0x3b)
#define PORTB 	*((volatile  u8*)0x38)
#define PORTC 	*((volatile  u8*)0x35)
#define PORTD 	*((volatile  u8*)0x32)


#define PINA 	*((volatile u8*)0x39)
#define PINB 	*((volatile u8*)0x36)
#define PINC 	*((volatile u8*)0x33)
#define PIND 	*((volatile u8*)0x30)

/*USART Control and status registerA>> UCSRA*/

/* RX_COMPLETE_BIT 		    */
#define 						 RXC						7
/*TX_COMPLETE_BIT */
#define						     TXC		  				6
/*DATA_REGISTER_EMPTY_BIT*/
#define						     UDRE                       5
/* FRAME_ERROR*/
#define  						 FE                         4
/* DATA_OVERRUN*/
#define						 	 DOR                        3
/*PARITY_ERROR*/
#define 						 PE                         2
/*DOUBLE_TRANSMISSION_SPEED*/
#define							 U2X                        1
/*MULTI_PROCESSOR_COMUNICATION_MODE */
#define						     MPCM	                    0




/*USART Control and status registerB>> UCSRB*/

/* RX Complete Interrupt Enable 		    */
#define 						 RXCIE						7
/*TX Complete Interrupt Enable */
#define						     TXCIE		  				6
/*UDRIE: USART Data Register Empty Interrupt Enable*/
#define						     UDRIE                      5
/* RXEN: Receiver Enable*/
#define  					   	 RXEN                       4
/* TXEN: Transmitter Enable*/
#define						     TXEN                       3
/*UCSZ2: Character Size*/
#define 						 UCSZ2                      2
/*RXB8: Receive Data Bit 8*/
#define							 RXB8                       1
/*TXB8: Transmit Data Bit 8 */
#define						     TXB8	                    0



/*USART Control and status registerC>> UCSRC*/

/* • Bit 7 – URSEL: Register Select		    */
#define 						 URSEL						7
/*• Bit 6 – UMSEL: USART Mode Select */
#define						     UMSEL		  				6
/*• Bit 5:4 – UPM1:0: Parity Mode*/
#define						     UPM1                      5
/*• Bit 5:4 – UPM1:0: Parity Mode*/
#define  					   	 UPM0                       4
/*• Bit 3 – USBS: Stop Bit Select*/
#define						     USBS                       3
/*• Bit 2:1 – UCSZ1:0: Character Size*/
#define 						 UCSZ1                      2
/*• Bit 2:1 – UCSZ1:0: Character Size*/
#define							 UCSZ0                      1
/*• Bit 0 – UCPOL: Clock Polarity */
#define						     UCPOL	                    0















#endif /* DIO_PRIVATE_H_ */
