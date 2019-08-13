/*
 * IncFile1.h
 *
 * Created: 8/11/2019 5:40:25 PM
 *  Author: mattc
 */ 


#ifndef AVERAGER_H_
#define AVERAGER_H_


class Averager {
	
	bool completeStatus;
	uint16_t totalAverages;
	uint16_t lengthOfArray;
		
	double data[];
		
	private:
	
	uint32_t accumulator;
	uint16_t averagedData[];
	
	public:
	 uint16_t averageCount;
	//Constructor
	Averager::Averager (uint16_t, uint16_t);
	
	//Member Functions
	double * averageData(uint16_t[]);
	uint16_t countValue(bool);
	
	bool doneStatus() {return completeStatus;}
    uint16_t count() {return averageCount;}
	uint16_t max_count() {return totalAverages;}
	uint16_t arry_length() {return lengthOfArray;}
	
	
	
	};




#endif /* INCFILE1_H_ */