//CHALLENGE 2 since challenge 1 was to just use a switch with any of the codes
#include <Servo.h> //indicating the use of servo libraries

Servo rightservo; //naming my right servo
 Servo leftservo; //naming my left servo

void setup() { //putting code here to run once
  Serial.begin(9600); //maling use of the serial monitor
  pinMode(2, INPUT); //making the pin 2 as an input
  rightservo.attach(8); //pin 8 where right servo is attached
  leftservo.attach(10);  //pin 10 where left servo is attached
}

void forward(){ //user defined function making
  rightservo.writeMicroseconds(1050); //making the servo move forward quickly
  leftservo.writeMicroseconds(2000);//making the servo move backward quickly
}

void forward2(){//user defined function making
  rightservo.writeMicroseconds(1415); //making the servo move forward slowly
  leftservo.writeMicroseconds(1600);//making the servo move backward slowly
}

void left(){//user defined function making
  rightservo.writeMicroseconds(1300);//making the servo move forward quickly 
  leftservo.writeMicroseconds(1500);//stopping the servo from moving
}

void returnleft() {//user defined function making
  rightservo.writeMicroseconds(1500);//stopping the servo from moving
  leftservo.writeMicroseconds(1300);//making the servo move backward quickly 
}

void stop(){//user defined function making
  rightservo.writeMicroseconds(1500);//stopping the servo from moving
  leftservo.writeMicroseconds(1500);//stopping the servo from moving
}

void loop() { // put your main code here, to run repeatedly:
  int switchStatus = digitalRead(2);//reading the values gotten from pin2
  Serial.print("Switch Status = ");//making "switch status="appear on the minot along with values it reads
   Serial.println(switchStatus); //making it appear on the serial monitor as switch status

  if (switchStatus == 1) { //if the switch button is pushed, execute the below command
    forward();//calling on a user defined function
    delay(2500); //execute the above command for 2500ms
    left();//calling on a user defined function
    delay(2200);//execute the above command for 2200ms
    forward2();//calling on a user defined function
    delay(1900);//execute the above command for 1900ms
    left();//calling on a user defined function
    delay(1500);//execute the above command for 1900ms
    forward();//calling on a user defined function
    delay(2500);//execute the above command for 2500ms
    returnleft();//calling on a user defined function
    delay(2200); //execute the above command for 2200ms
    forward2();//calling on a user defined function
    delay(1900);//execute the above command for 1900ms
    returnleft();//calling on a user defined function
    delay(2000);//execute the above command for 2000ms
    forward();//calling on a user defined function
    delay(2500);//execute the above command for 2500ms

  }
   else{// if the switch button is not pushed
    stop();//calling on a user defined function
   }
}

//CHALLENGE 3
#include <Servo.h> //indicating the use of servo libraries

 Servo rightservo; //naming my right servo
 Servo leftservo; //naming my left servo

void setup() { //putting code here to run once

  pinMode(3,OUTPUT); //making pin 3 my output
  pinMode(4,OUTPUT);//making pin 4 my output
  pinMode(5,OUTPUT);//making pin 5 my output
  rightservo.attach(8); //pin 8 where right servo is attached
  leftservo.attach(10);  //pin 10 where left servo is attached
}

void forward(){ //user defined function making
  rightservo.writeMicroseconds(1050); //making the servo move forward quickly
  leftservo.writeMicroseconds(2000); //making the servo move backward quickly
}

void forward2(){//user defined function making
  rightservo.writeMicroseconds(1015);//making the servo move forward quickly
  leftservo.writeMicroseconds(2000);//making the servo move backward quickly
}

void left(){//user defined function making
  rightservo.writeMicroseconds(1300);//making the servo move forward slowly
  leftservo.writeMicroseconds(1500);//stopping the servo from moving
}

void stop(){//user defined function making
  rightservo.writeMicroseconds(1500);//stopping the servo from moving
  leftservo.writeMicroseconds(1500);//stopping the servo from moving
}

void loop() {  // put your main code here, to run repeatedly:
  digitalWrite(3,LOW); //putting off the connection in pin 3
    digitalWrite(4,LOW);//putting off the connection in pin 4
    digitalWrite(5,LOW);//putting off the connection in pin 5
    forward();//calling on a user defined function
    delay(1300);//execute the above command for 1300ms
     digitalWrite(3,LOW); //putting off the connection in pin 3
    digitalWrite(4,LOW);//putting off the connection in pin 4
    digitalWrite(5,LOW);//putting off the connection in pin 5
    left();//calling on a user defined function
    delay(2000);//execute the above command for 2000ms
     digitalWrite(3,LOW); //putting off the connection in pin 3
    digitalWrite(4,LOW);//putting off the connection in pin 4
    digitalWrite(5,LOW);//putting off the connection in pin 5
    forward2();//calling on a user defined function
    delay(2000);//execute the above command for 2000ms
     digitalWrite(3,LOW); //putting off the connection in pin 3
    digitalWrite(4,LOW);//putting off the connection in pin 4
    digitalWrite(5,LOW);//putting off the connection in pin 5
    left();//calling on a user defined function
    delay(2000); //execute the above command for 2000ms
     digitalWrite(3,LOW); //putting off the connection in pin 3
    digitalWrite(4,LOW);//putting off the connection in pin 4
    digitalWrite(5,LOW);//putting off the connection in pin 5
    forward();//calling on a user defined function
    delay(1300);//execute the above command for 1300ms
    digitalWrite(3,LOW); //putting off the connection in pin 3
    digitalWrite(4,LOW);//putting off the connection in pin 4
    digitalWrite(5,LOW);//putting off the connection in pin 5
    left();//calling on a user defined function
    delay(2000);//execute the above command for 2000ms
     digitalWrite(3,LOW); //putting off the connection in pin 3
    digitalWrite(4,LOW);//putting off the connection in pin 4
    digitalWrite(5,LOW);//putting off the connection in pin 5
    stop(); //calling on a user defined function
    delay(2300);//execute the above command for 2300ms
    digitalWrite(3,HIGH); delay(200); //putting on the connection in pin 3 and for 200ms
    digitalWrite(3,LOW);  delay(200);//putting off the connection in pin 3 and for 200ms
    digitalWrite(4,HIGH); delay(200);//putting on the connection in pin 4 and for 200ms
    digitalWrite(4,LOW);  delay(200);//putting off the connection in pin 4 and for 200ms
    digitalWrite(5,HIGH); delay(200);//putting on the connection in pin 5 and for 200ms
    digitalWrite(5,LOW);  delay(200);//putting off the connection in pin 5 and for 200ms
}


 







//CHALLENGE 4
#include <Servo.h> //indicating the use of servo libraries

Servo servoright; //naming my servos
Servo servoleft;  //naming my servos 

void setup() {  //where my code would run once
  Serial.begin(9600); //making use of the serial monitor
  servoright.attach(10); //indicating servo would be attached to pin 10
  servoleft.attach(8); //indicating servo would be attached to pin 8
  pinMode(2, INPUT); //indicating pin 2 as an input

}

void forward(){ //user defined function making
  servoright.writeMicroseconds(1000); //making the servo go quickly
  servoleft.writeMicroseconds(1980); //making the servo go quickly
}
void left() { //user defined function making
  servoright.writeMicroseconds(1000); //making the servo go quickly
  servoleft.writeMicroseconds(1500); //stopping the servo
}
void right() {
  servoright.writeMicroseconds(1500); //stopping the servo
  servoleft.writeMicroseconds(2000); //making the servo go full speed
}
void stop(){
  servoright.writeMicroseconds(1500); //stopping the servo
  servoleft.writeMicroseconds(1500); //stopping the servo
}

void loop() { //put code here to run indefinitely 
int Switch = digitalRead(2); //telling the arduino to read the input from pin 2 

if (Switch == 1){ //if the switch is pused, execute the following command
  forward();//user defined function
  delay(800); //execute above command for 800ms
  left();//user defined function
  delay(500); //execute above command for 500ms
  forward();//user defined function
  delay(800); //execute above command for 800ms
  left();//user defined function
  delay(500); //execute above command for 500ms
 forward();//user defined function
 delay(800); //execute above command for 800ms
 stop();//user defined function
 delay(800); //execute above command for 800ms
 right();//user defined function
 delay(1150);//execute above command for 1150ms
 forward();//user defined function
 delay(1600);//execute above command for 1600ms
 right(); //user defined function
 delay(600); //execute above command for 600ms
 forward(); //user defined function
 delay(800); //execute above command for 800msS
}

if (Switch == 0){ //if the switch is not pushed, execute the follwing command
  stop(); //user defined function
}
}





//CHALLENGE 5
#include <Servo.h> //making use of the servo library
int val= 0; //indicating that the values I get from the serial monitor,the lowest is 0

 Servo rightservo; //naming the servo I would use
 Servo leftservo; 

void setup() {  // put your setup code here, to run once:
  Serial.begin(9600); //making use of the serial monitor
  pinMode(3, OUTPUT); //declaring pin 3 as the output
  pinMode(4, OUTPUT); //   //     //  4 //  //  //
  pinMode(6, OUTPUT);      //    //     6 // //  //
  rightservo.attach(8); // where the servos would be attached
  leftservo.attach(10); 
}

void forward(){ //user defined function
  rightservo.writeMicroseconds(1050); //making the servo move at a high speed forward
  leftservo.writeMicroseconds(2000); //making the servo move at a hih speed backward
}

void forward2(){ //user defined function
  rightservo.writeMicroseconds(1750);//making the servo move at a high speed backward
  leftservo.writeMicroseconds(1250);//making the servo move at a hih speed forward
}
void spin(){ //user defined function
  rightservo.writeMicroseconds(2000);//making the servo move at a hih speed backward
  leftservo.writeMicroseconds(2000); //making the servo move at a high speed backward
}
void stop(){ //user defined function
  rightservo.writeMicroseconds(1500); //making the servo come to a stop
  leftservo.writeMicroseconds(1500); //making the servo come to a stop
}

void loop() {  // put your main code here, to run repeatedly:
  val = analogRead(2); //telling arduino to read the values gotten from analong pin 2
  Serial.println(val); //telling arduino to show the values gotten from analog pin 2 on the serial monitor 

  if(val < 900) //if the values displayed on the serial monitor is less than 900 it should execute the following code under it
  {
    digitalWrite (3, HIGH); //on
    digitalWrite(4, LOW); //off
    digitalWrite(6, LOW); //off
    forward(); //execute the user defined function called forward
  }
  if(val > 950) //if the values displayed on the serial monitor is greater than 950 it should execute the following code under it
  {
    digitalWrite (3, LOW); //off
    digitalWrite(4, HIGH); //on
    digitalWrite(6, LOW); //off
    spin(); //execute the user defined function called spin
    delay(2000); //execute the previous command for two seconds
  }
  
  if(val < 750) //if the values displayed on the serial monitor is less than 750 it should execute the following code under it
  {
    digitalWrite (3, LOW); //of
    digitalWrite(4, LOW); //off
    digitalWrite(6, HIGH); //on
    forward2();  //execute the user defined function called forward2
    delay(1000); //execute the previous command for a second
  }
  }
