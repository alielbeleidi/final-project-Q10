/*
 * main.c
 *
 *  Created on: Oct 30, 2020
 *      Author: Mohamed
 */
#define F_CPU 16000000UL
#include <util/delay.h>
#include "Std_Types.h"
#include "Utilites.h"
#include "Dio_Int.h"
#include "SPI_Int.h"
#include "Dio_Reg.h"



int main(void)
{
	
	SPI_initSlave();                             //Initialize slave SPI
	
	 u8 Data_in;
	 DDRC = 0xff;							/* make PORT as output port */
	 
	  while(1) //infinite loop
	  {
		  Data_in = SPI_recieveByte();               //Receive data
		  	 
		  	 if(Data_in =='1')
		  	 {
			  	 PORTC = 0xFF; //Turns ON All LEDs
			  	 _delay_ms(1000); //1 second delay
			  	 
			  	 
			  	 
		  	 }
		  	 else if(Data_in =='2')
		  	 {
			  	 PORTC = 0x00; //Turns OFF All LEDs
			  	 _delay_ms(1000); //1 second delay						/* Turn OFF LED */
			  	 
		  	 }
		  	
	  }
	  	 return 0;
  	 
		  	 
	
}
 
