//
// Created by ganymed on 30/03/16.
//

#ifndef HEIMPROJEKT01_2_PINCONTROL_H
#define HEIMPROJEKT01_2_PINCONTROL_H


#include <stdint.h>


void setupPins();

void cascadeLeds(int delay);

void setPinAsOutput(volatile uint8_t* ddr, uint8_t pin);

void setPinToHigh(volatile uint8_t* port, uint8_t pin);
void setPinToLow(volatile uint8_t* port, uint8_t pin);

void sleep_ms_10ms_steps(int ms);
void sleep_ms_100ms_steps(int ms);


#endif //HEIMPROJEKT01_2_PINCONTROL_H
