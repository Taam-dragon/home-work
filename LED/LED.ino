#include <LED.h>

Led led(13); //객체선언
void setup()
{
}
void loop()
{
  led.LedHigh(); //13번핀을 High
  delay(1000);
  led.LedLow(); //13번핀을 Low
  delay(1000);
}
