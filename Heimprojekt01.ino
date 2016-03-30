#include "pinControl.c"


int frequency = 10; // in Hz


void doSetup();

void doLoop();


int main() {
    doSetup();

    while(1) {
        doLoop();
    }
}


void doSetup() {
    setupPins();
}

void doLoop() {
    int delay = (int)( (1 / (float)frequency) * 1000);

    cascadeLeds(delay);
}

