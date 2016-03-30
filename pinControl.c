//
// Created by ganymed on 30/03/16.
//

#include "pinControl.h"
#include "pinMappings.h"
#include <USBAPI.h>



void setupPins() {
    setPinAsOutput(&LED_1_DDR, LED_1_DDR_PIN);
    setPinAsOutput(&LED_2_DDR, LED_2_DDR_PIN);
    setPinAsOutput(&LED_3_DDR, LED_3_DDR_PIN);
    setPinAsOutput(&LED_4_DDR, LED_4_DDR_PIN);
    setPinAsOutput(&LED_5_DDR, LED_5_DDR_PIN);
    setPinAsOutput(&LED_6_DDR, LED_6_DDR_PIN);
}


void cascadeLeds(int delay) {
    setPinToHigh(&LED_1_PORT, LED_1_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_1_PORT, LED_1_PIN);
    setPinToHigh(&LED_2_PORT, LED_2_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_2_PORT, LED_2_PIN);
    setPinToHigh(&LED_3_PORT, LED_3_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_3_PORT, LED_3_PIN);
    setPinToHigh(&LED_4_PORT, LED_4_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_4_PORT, LED_4_PIN);
    setPinToHigh(&LED_5_PORT, LED_5_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_5_PORT, LED_5_PIN);
    setPinToHigh(&LED_6_PORT, LED_6_PIN);
    sleep_ms_10ms_steps(delay);

    setPinToLow(&LED_6_PORT, LED_6_PIN);
}


void setPinAsOutput(volatile uint8_t* ddr, uint8_t pin) {
    *ddr |= (1 << pin);
}


void setPinToHigh(volatile uint8_t* port, uint8_t pin) {
    *port |= (1 << pin);
}

void setPinToLow(volatile uint8_t* port, uint8_t pin) {
    *port &= ~(1 << pin);
}


void sleep_ms_10ms_steps(int ms) {
    while(ms > 0) {
        _delay_ms(10);
        ms -= 10;
    }
}

void sleep_ms_100ms_steps(int ms) {
    while(ms > 0) {
        _delay_ms(100);
        ms -= 100;
    }
}
