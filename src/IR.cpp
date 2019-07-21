/*
 * IR.cpp
 *
 * Arduino library for retrieving distance (in cm) from
 * a reflective type IR sensor
 *
 * Version : 1.0 : Ravidu Liyanage
 */

#include <IR.h>

/*
 * Initialisation function
 * irPin is where the analog pin of the IR sensor is attached.
 */
IR::IR(uint8_t _pin) {
    pin = _pin;
}

/*
 * Read values from sensors and convert them to centimeters
 * Output value is approximated to two decimals.
 */
float IR::getDist() {
    irVal = analogRead(pin);
    
    if (irVal >= 1011)
    {
        irVal = 1010;
    }
    
    distance = 2.6 * pow((irVal+20.6)/(1011-irVal), (float)1/3);
    
    return distance;
}
