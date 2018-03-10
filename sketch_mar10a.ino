#include <Servo.h>
Servo amine;

void setup() {
  pinMode(3 , OUTPUT);
  pinMode(4 , OUTPUT);
  
  amine.attach(5);

}

void loop() {
  digitalWrite(3, HIGH);
  delay(4000);
  digitalWrite(3, LOW);
  delay(4000);
  for( int x=0 ; x <= 90; x++){
    
    amine.write(x);
    delay(15);
    } 
  

}
