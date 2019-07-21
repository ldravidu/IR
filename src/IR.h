/*
 *  IR.h
 *
 *  Arduino library for retrieving distance (in cm) from
 *  a reflective type IR sensor
 *
 *  Version : 1.0 : Ravidu Liyanage
 */

#ifndef IR_h
#define IR_h

#include <Arduino.h>

class IR
{
    public:
        IR(uint8_t _pin);
        float getDist();
    
    protected:
        uint8_t pin;
    
    private:
        uint32_t irVal;
        float distance;
};

#endif /* IR_h */
