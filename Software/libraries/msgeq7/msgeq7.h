/*
 * IncFile1.h
 *
 * Created: 8/10/2019 12:00:14 PM
 *  Author: mattc
 */ 


#ifndef MSGEQ7_h
#define MSGEQ7_h

#include <inttypes.h>
#include "Arduino.h"

class Msgeq7_Equalizer {

	
	public:
	
	//Constructor
	Msgeq7_Equalizer (uint8_t,uint8_t,uint8_t);
	
	//Member functions
	uint8_t *  readData(void);
	
	private:
	
	//Variables
	uint8_t reset_pin, strobe_pin, data_pin;
	
};



#endif