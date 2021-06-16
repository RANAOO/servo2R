#include <Servo.h>

int servosignal = 3;
Servo my3;
int movef=6;
int moveb=12;
int position = 0;

void setup()
{
 my3.attach(servosignal);
  pinMode(movef,INPUT);
  pinMode(moveb,INPUT);
  my3.write(position);
}

 void loop()
 {
 int fpuch = digitalRead(movef);
 int bpuch = digitalRead(moveb);
   if(fpuch == HIGH){
   
  my3.write(position);
     position++; //position = position+1
  delay(3.5);
   }
  if(bpuch == HIGH)
  {
   my3.write(position);
    position--; //position = position-1
    delay(3.5);
  }
 }
