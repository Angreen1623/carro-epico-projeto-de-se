#include <L293D.h>


//Motor A
const int motorPin1  = 5;  // saída A-
const int motorPin2  = 0;  // saída A+
//Motor B
const int motorPin3  = 4; // saída B-
const int motorPin4  = 2;  // saída B+


void setup(){
 
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);
    
    //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4

  
      //Esse código liga o Motor A e o B ao mesmo tempo no sentido hórario por 4 sec. (andar para frente)
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(4000); 
  
    //Esse código liga o Motor A em sentido hórario e o B fica desligado  por 4 sec. (andar para frente virar para a direita)
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(4000); 

    //Esse código liga o Motor B em sentido hórario e o A fica desligado  por 4 sec (andar para frente virar para a esquerda).
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(4000); 
  
    //Esse código liga o Motor A e o B ao mesmo tempo no sentido anti-hórario por 4 sec. (andar para trás)
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(4000);
    
    
    //aqui desliga os motores
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  
}


void loop(){
  

}
