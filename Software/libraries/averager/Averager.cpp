/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>
#include <Averager.h>
/*End of auto generated code by Atmel studio */


//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio

//Constructor
Averager::Averager (uint16_t length, uint16_t numAvg ){
	lengthOfArray = length;
	totalAverages = numAvg;
	completeStatus = 0;
	accumulator = 0;
}

double * Averager::averageData (uint16_t dataIn[]){		
	
	if(averageCount < totalAverages){
		//Update the busy status
		if(averageCount == 0){
			//Reset the accumulated data
			for(int i=0; i<lengthOfArray; i++){
				data[i] = 0;
			}
			completeStatus = false;
		}
		
		//Accumulate the data;
		for(int i=0; i<lengthOfArray; i++){
			data[i] += dataIn[i]; 	
		}
		
		//Increment the counter
		averageCount = countValue(false);
		
	}
	else{

		for(int i=0; i<lengthOfArray; i++){
			data[i] /= static_cast<double>(totalAverages);
			
		}
		averageCount =countValue(true);
		completeStatus = true;
		//clear the data
		return data;
	}
	
	return data;
	
}

uint16_t Averager::countValue(bool reset){
	static uint16_t counter = 0;
	
	if(reset)
	{
		counter = 0;
	}
	else
	{
		counter++;
	}

	
	return counter;
	
	
}

