
#include <Mozzi.h>
#include <mozzi_rand.h>

void setup(){
  startMozzi(); // :)
}


void updateControl(){
  // put changing controls in here
}


AudioOutput updateAudio() {
    int8_t sample = rand(-127, 128);
  return MonoOutput::from8Bit(sample);
}


void loop(){
  audioHook(); // required here
}
