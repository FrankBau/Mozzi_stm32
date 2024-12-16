#ifndef __ARDUINO_H
#define __ARDUINO_H

#include <stdint.h>
#include <math.h>


#define bit(b) (1UL << (b))

typedef unsigned int word;
typedef bool boolean;
typedef uint8_t byte; // seen in FixMath.h

// constrain a value to a range
long constrain(long x, long a, long b)
{
    if (x < a)
    {
        return a;
    }
    else if (x > b)
    {
        return b;
    }
    else
    {
        return x;
    }
}

#define INPUT           0
#define OUTPUT          1
#define OUTPUT_PULLUP   2

#define HIGH    1
#define LOW     0

void pinMode(uint8_t pin, uint8_t mode) {

}

void digitalWrite(uint8_t pin, uint8_t val) {

}

#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))

#endif
