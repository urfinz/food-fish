#define PIN_INPUT_PULLUP 2
 #include <Servo.h>
 #define SERVO_PIN     11
 Servo myservo;
 int inputPin2 = 2;
void setup() {
 // Serial.begin(9600);
  pinMode(PIN_INPUT_PULLUP, INPUT_PULLUP);
}
 
void loop() {
  int sensorVal = digitalRead(PIN_INPUT_PULLUP);
  int x=1;
 if (digitalRead(inputPin2) == LOW && x == 1)
{
   // Serial.println(sensorVal);
  myservo.attach(SERVO_PIN);
  delay(150);
myservo.write(0);
  delay(3000);
  myservo.write(110);
 delay(150);
 myservo.write(0);
 delay(150);
myservo.write(110);
 delay(150);
 myservo.write(0);
 delay(150);
 myservo.write(110);
 delay(150);
 myservo.write(0);
 delay(150);
myservo.write(110);
 delay(150);
 myservo.write(0);
delay(150);
 myservo.write(110);
 delay(150);
 myservo.write(0);
 delay(150);
myservo.write(110);
 delay(150);
 myservo.write(0);
 delay(150);
 //
   myservo.write(180);
 delay(3000);
 myservo.write(90);
 delay(150);
 myservo.write(180);
 delay(150);
myservo.write(90);
 delay(150);
 myservo.write(180);
 delay(150);
 myservo.write(90);
delay(150);
 myservo.write(180);
 delay(150);
myservo.write(90);
 delay(150);
 myservo.write(180);
 delay(150);
 myservo.write(90);
 delay(150);
 myservo.write(180);
 delay(150);
myservo.write(90);
 delay(150);
myservo.write(180);
 delay(150);
 x++;
 //Serial.println(sensorVal);
 delay(250);
myservo. detach();
 delay(50000);
}
else
{
 
}
}
  
  

  
