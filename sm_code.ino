//4-5servoSweep.ino
#include <Servo.h> //서보 라이브러리를 불러옵니다.
Servo myservo; // 서보를 제어할 서보 오브젝트를 만듭니다.
int pos = 0; // 서보 위치를 저장할 변수를 선언합니다.
int btn = 4;// 버튼의 변수이름과 포트설정
void setup()
{
pinMode(btn, INPUT_PULLUP); 
myservo.attach(3); // 핀 3의 서보를 서보 오브젝트에 연결합니다.
Serial.begin(9600);

}
void loop()
{
  int btnn=digitalRead(btn);
  if(btnn==0){
for(pos = 30; pos < 150; pos += 1) // 0도에서 180도로 이동합니다.
{ // 이동할때 각도는 1도씩 이동합니다.
myservo.write(pos); // 'pos'변수의 위치로 서보를 이동시킵니다.
delay(15); // 서보 명령 간에 20ms를 기다립니다.
Serial.println(pos);
}
for(pos = 150; pos>=30; pos-=1) // 180도에서 0도로 이동합니다.
{
myservo.write(pos); // 서보를 반대방향으로 이동합니다.
delay(15); // 서보 명령 간에 20ms를 기다립니다.
Serial.println(pos);
}
}
}
