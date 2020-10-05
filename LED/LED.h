#ifndef LED_H
#define LED_H
#include <arduino.h>
class Led
{
private:
int LedPin;
public:
Led(int Pin){
LedPin = Pin;
pinMode(LedPin, OUTPUT);
}
~Led(){
}
public:
void LedHigh();
void LedLow();
};
#endif