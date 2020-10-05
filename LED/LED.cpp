#include <Arduino.h>
#include <Led.h>
void Led::LedHigh(){
digitalWrite(LedPin,HIGH);
}
void Led::LedLow(){
digitalWrite(LedPin,LOW);
}
