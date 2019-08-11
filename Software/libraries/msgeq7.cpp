/*
 * msgeq7.cpp
 *
 * Created: 8/10/2019 11:59:02 AM
 * Author : mattc
 
 */ 

#include "Arduino.h"
#include "msgeq7.h"


//Constructor
Msgeq7_Equalizer::Msgeq7_Equalizer (uint8_t reset_pin,uint8_t strobe_pin,uint8_t data_pin)
{
	 this->reset_pin = reset_pin;
	 this->strobe_pin = strobe_pin;
	 this->data_pin = data_pin;
	  
	//Initialize Pins
	pinMode(this->reset_pin, OUTPUT);
	pinMode(this->strobe_pin, OUTPUT);
	pinMode(this->data_pin, INPUT);
	
	digitalWrite(this->reset_pin, HIGH);
	delayMicroseconds(.2);
	digitalWrite(this->reset_pin, LOW);
	
}


uint8_t * Msgeq7_Equalizer::readData()
{
	uint8_t data[6];
	
	//Read the peak detect for each frequency band;
	for (int i = 0; i<7; i++)
	{
		//Assert strobe for 20us
		digitalWrite(this->strobe_pin, HIGH);
		delayMicroseconds(20);
		digitalWrite(this->strobe_pin, LOW);
		//Wait for data to become valid
		delayMicroseconds(40);
		
		//Read in the data
		data[i] = digitalRead(this->data_pin);
		
	
	}
	
	return data;
		
	
}
	
	

