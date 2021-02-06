#include <NewPing.h>
#include <Servo.h>

#define SONAR_NUM 4     
#define MAX_DISTANCE 70


Servo servo1; 
Servo servo2;

NewPing sonar[SONAR_NUM] = {   
NewPing(7, 2, MAX_DISTANCE),
NewPing(8, 3, MAX_DISTANCE),
NewPing(9, 5, MAX_DISTANCE),
NewPing(6, 4, MAX_DISTANCE)
};


 int s0=A0;
 int s1=A1;
 int s2=A2; 
 int s3=A3;

int value0=0;
int value1=0;
int value2=0;
int value3=0;

void setup() 
{
Serial.begin(115200); 

servo1.attach(10);                                               
servo2.attach(11);


pinMode(s0,INPUT);
pinMode(s1,INPUT);
pinMode(s2,INPUT);
pinMode(s3,INPUT);

Stop();
delay(5000);

}

void loop() 
{
d();
ataque();
}
   
   

