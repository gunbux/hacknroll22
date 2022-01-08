#include <Servo.h>

Servo servo;
int motorA = 4;
int motorB = 5;
int servopin = 3;
int piercepos =  140;
int endpos = 180;
int squeezetime = 3640;//use 3600
int working = 0;
int message = 0;
int esppin = 9;


void stopmotors() { 
  analogWrite(motorA, 0);
  analogWrite(motorB, 0);
}

void pokehole() {
  stopmotors();
  servo.write(piercepos);
  delay(3000);
  servo.write(endpos);
  delay(1000);
}

void squeezebox(){
  // ANTICLOCKWISE LOOKING DOWN
  analogWrite(motorA, 255);
  analogWrite(motorB, 0);
  delay(squeezetime);
  stopmotors();
  delay(2000);

  //CLOCKWISE LOOKING DOWN'
  analogWrite(motorA, 0);
  analogWrite(motorB, 255);
  delay(squeezetime);
  stopmotors();
  delay(2000);


  }



void setup() {

  // put your setup code here, to run once:
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  stopmotors();
pinMode(esppin, INPUT); 
  servo.attach(servopin);
 //Serial.begin(9600);
 stopmotors();
}

void loop() {
  // put your main code here, to run repeatedly:
message = digitalRead(esppin); 
//Serial.println(digitalRead(esppin));

if(message == 1 && working == 0){
  working = 1;

  pokehole();
  squeezebox();

  delay(4000);
  working = 0;
  message = 0;
}


}
