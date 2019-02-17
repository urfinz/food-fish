#define PIN_INPUT_PULLUP 2
 #include <Servo.h>
 //#define SERVO_PIN     11
 Servo myservo;
 Servo myservo2;
 int inputPin2 = 2;
 int x=1;
  int n=11;
  int m=10;
void setup() {
 // Serial.begin(9600);
  pinMode(PIN_INPUT_PULLUP, INPUT_PULLUP);
}
 
void loop() {
  int sensorVal = digitalRead(PIN_INPUT_PULLUP);
 // int x=1;
//  int n=11;
//  int m=10;
 if (digitalRead(inputPin2) == LOW && x == 1)
{
   // Serial.println(sensorVal);
   myservo.attach(n);
  delay(250);
myservo.write(180);//двигае каретку под подачу корма
  delay(2000);   //2 секунды
  //************************************************************
myservo2.attach(m);
delay(250);
myservo2.write(0);//вращаем шнек в одну сторону
delay(3500);
myservo2.write(90);//тормозим шнек
delay(250);
myservo2.write(180);//вращаем шнек в другую сторону
delay(3500);
myservo2.detach();   
   delay(250);
 //
   myservo.write(0);
 delay(3000);
 myservo.write(70);
 delay(1000);
 myservo.write(0);
 delay(1000);
myservo.write(70);
 delay(1000);
 myservo.write(0);
 delay(1000);
 myservo.write(70);
delay(1000);
 myservo.write(0);
 delay(1000);
myservo.write(70);
 delay(1000);
 myservo.write(0);
 delay(1000);
 myservo.write(70);
 delay(1000);
 myservo.write(0);
 delay(1000);
myservo.write(70);
 delay(1000);
myservo.write(0);
 delay(1000);
 x++;
 //Serial.println(sensorVal);
 delay(250);
myservo.detach ();
 delay(50000);
}
else
{
 
}
}
  
  

  
