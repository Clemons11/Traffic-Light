//Code for Traffic Light display w/ microphone
#include <msgeq7.h>

//Pin Assignments

//We want 3 of the PWM pins reserved for the lights, On chip->(5,11,12) On Board ->(3,5,6)

//3 pins reserved for the MSGEQ7 filter. On chip->(14,15,16) On Board ->(8,9,10)
const uint8_t reset_pin = 1;
const uint8_t din_pin = 2;
const uint8_t strobe_pin = 3;

//Pointer for MSGEQ7 peak detect data
uint8_t * freqData_p;

//Create an object based on the Equalizer Class
Msgeq7_Equalizer equalizer (reset_pin, strobe_pin, din_pin);


void setup() {
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  //Pass the data pointer from the MSGEQ7 peak detect readings (blocking)
  freqData_p = equalizer.readData();

  //Print the peak detect data
  for (int x = 0; x < 6; x++) {
    Serial.println(*(freqData_p + x), HEX);

  }
}
