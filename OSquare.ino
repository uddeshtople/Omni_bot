#include "math.h"
// motor four
int enA = 10;
int in1 = 9;
int in2 = 8;
// motor two
int enB = 5;
int in3 = 7;
int in4 = 6;
// motor three
int enA1 = 3;
int in11 = 2;
int in21 = 4;
// motor one
int enB1 = 11;
int in31 = 13;
int in41 = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA1, OUTPUT);
  pinMode(enB1, OUTPUT);
  pinMode(in11, OUTPUT);
  pinMode(in21, OUTPUT);
  pinMode(in31, OUTPUT);
  pinMode(in41, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
     digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
     digitalWrite(in3, LOW);
     digitalWrite(in4, LOW);
     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     digitalWrite(in31, LOW);
     digitalWrite(in41, LOW);
     delay(4000);

     digitalWrite(in1, HIGH);
     digitalWrite(in2, LOW);
     analogWrite(enA, 130);

     digitalWrite(in3, HIGH);
     digitalWrite(in4, LOW);
     analogWrite(enB, 130);

     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     analogWrite(enA1, 130);
     
     digitalWrite(in31, LOW);
     digitalWrite(in41, LOW);
     analogWrite(enB1, 130);
     delay(2000);

     digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
     digitalWrite(in3, LOW);
     digitalWrite(in4, LOW);
     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     digitalWrite(in31, LOW);
     digitalWrite(in41, LOW);
     delay(2000);

 digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
     analogWrite(enA, 130);

     digitalWrite(in3, LOW);
     digitalWrite(in4, LOW);
     analogWrite(enB, 130);

     digitalWrite(in11, LOW);
     digitalWrite(in21, HIGH);
     analogWrite(enA1, 130);

     digitalWrite(in31, LOW);
     digitalWrite(in41, HIGH);
     analogWrite(enB1, 130);
     delay(2000);

      digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
     digitalWrite(in3, LOW);
     digitalWrite(in4, LOW);
     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     digitalWrite(in31, LOW);
     digitalWrite(in41, LOW);
     delay(2000);

     digitalWrite(in1, LOW);
     digitalWrite(in2, HIGH);
     analogWrite(enA, 130);

     digitalWrite(in3, LOW);
     digitalWrite(in4, HIGH);
     analogWrite(enB, 130);

     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     analogWrite(enA1, 130);
     
     digitalWrite(in31, LOW);
     digitalWrite(in41, LOW);
     analogWrite(enB1, 130);
     delay(2000);

     digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
     digitalWrite(in3, LOW);
     digitalWrite(in4, LOW);
     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     digitalWrite(in31, LOW);
     digitalWrite(in41, LOW);
     delay(2000);

     digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
     analogWrite(enA, 130);

     digitalWrite(in3, LOW);
     digitalWrite(in4, LOW);
     analogWrite(enB, 130);

     digitalWrite(in11, HIGH);
     digitalWrite(in21, LOW);
     analogWrite(enA1, 130);

     digitalWrite(in31, HIGH);
     digitalWrite(in41, LOW);
     analogWrite(enB1, 130);
     delay(2000);

     digitalWrite(in1, LOW);
     digitalWrite(in2, LOW);
     digitalWrite(in3, LOW);
     digitalWrite(in4, LOW);
     digitalWrite(in11, LOW);
     digitalWrite(in21, LOW);
     digitalWrite(in31, LOW);
     digitalWrite(in41, LOW);
     delay(2000);


}
