//Code for Traffic Light display w/ microphone
#include <msgeq7.h>
#include <Averager.h>
//Pin Assignments

//We want 3 of the PWM pins reserved for the lights, On chip->(5,11,12) On Board ->(3,5,6)

//3 pins reserved for the MSGEQ7 filter. On chip->(14,15,16) On Board ->(8,9,10)
const uint8_t reset_pin = 1;
const uint8_t din_pin = 2;
const uint8_t strobe_pin = 3;

//Pointer for MSGEQ7 peak detect data
uint8_t * freqData_p;
const uint16_t arry_length = 7;
  uint16_t testData[arry_length] = {0,0,0,1,1,1,1};
  uint16_t testData2[arry_length] = {1,1,1,0,0,0,0};
   uint16_t testData3[arry_length] = {1,1,1,0,0,0,0};
  uint16_t testData4[arry_length] = {1,1,1,0,0,0,0};
  double * resultData_p ;
uint16_t test;
uint16_t test2;
uint16_t test3;
uint16_t num = 4;
int i = 0;
//Create an object based on the Equalizer Class
Msgeq7_Equalizer equalizer (reset_pin, strobe_pin, din_pin);

//Testing averager
Averager averager1(arry_length,num);

void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  //Pass the data pointer from the MSGEQ7 peak detect readings (blocking)
  //freqData_p = equalizer.readData();

  //Print the peak detect data
//  for (int x = 0; x < 6; x++) {
//    Serial.println(*(freqData_p + x), HEX);
//
//  }

//Successful averager test
//  resultData_p =  averager1.averageData(testData);
//  resultData_p =  averager1.averageData(testData2);
//  resultData_p =  averager1.averageData(testData3);
//  resultData_p =  averager1.averageData(testData4);
// if(averager1.doneStatus()){
//  Serial.println("Stepped out");
//  for(int i=0;i<7;i++)
//  {
//    Serial.print(*(resultData_p + i),DEC);
//    Serial.print(", ");
//    delay(1000);
//  }
//  Serial.println("");
// }
}
