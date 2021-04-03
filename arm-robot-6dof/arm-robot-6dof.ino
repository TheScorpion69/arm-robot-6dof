#include <Servo.h>

//Servo 1: 0 -> 180
//Servo 2: 0 -> 150
//Servo 3: 40 -> 180
//Servo 4: 180 -> 0
//Servo 5: 0 -> 180
//Servo 6: 20 -> 90

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int angle_servo_1;
int angle_servo_2; 
int angle_servo_3;
int angle_servo_4;
int angle_servo_5;
int angle_servo_6;

void init_servo()
{
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(10);
}

void active_servo(int angle_servo_1, int angle_servo_2, int angle_servo_3, int angle_servo_4, int angle_servo_5, int angle_servo_6)
{
//  Servo 1
  if(servo1.read() < angle_servo_1)
  {
    for(int post = servo1.read(); post <= angle_servo_1; post++)
    {
      servo1.write(post);
      delay(5);
    }
  }
  else if(servo1.read() > angle_servo_1)
  {
    for(int post = servo1.read(); post >= angle_servo_1; post--)
    {
      servo1.write(post);
      delay(5);
    }
  }
//  Servo 2
  if(servo2.read() < angle_servo_2)
  {
    for(int post = servo2.read(); post <= angle_servo_2; post++)
    {
      servo2.write(post);
      delay(5);
    }
  }
  else if(servo2.read() > angle_servo_2)
  {
    for(int post = servo2.read(); post >= angle_servo_2; post--)
    {
      servo2.write(post);
      delay(5);
    }
  }
//  Servo 3
  if(servo3.read() < angle_servo_3)
  {
    for(int post = servo3.read(); post <= angle_servo_3; post++)
    {
      servo3.write(post);
      delay(5);
    }
  }
  else if(servo3.read() > angle_servo_3)
  {
    for(int post = servo3.read(); post >= angle_servo_3; post--)
    {
      servo3.write(post);
      delay(5);
    }
  }
//  Servo 4
  if(servo4.read() < angle_servo_4)
  {
    for(int post = servo4.read(); post <= angle_servo_4; post++)
    {
      servo4.write(post);
      delay(5);
    }
  }
  else if(servo4.read() > angle_servo_4)
  {
    for(int post = servo4.read(); post >= angle_servo_4; post--)
    {
      servo4.write(post);
      delay(5);
    }
  }
//  Servo 5
  if(servo5.read() < angle_servo_5)
  {
    for(int post = servo5.read(); post <= angle_servo_5; post++)
    {
      servo5.write(post);
      delay(5);
    }
  }
  else if(servo5.read() > angle_servo_5)
  {
    for(int post = servo5.read(); post >= angle_servo_5; post--)
    {
      servo5.write(post);
      delay(5);
    }
  }
//  Servo 6
  if(servo6.read() < angle_servo_6)
  {
    for(int post = servo6.read(); post <= angle_servo_6; post++)
    {
      servo6.write(post);
      delay(5);
    }
  }
  else if(servo6.read() > angle_servo_6)
  {
    for(int post = servo6.read(); post >= angle_servo_6; post--)
    {
      servo6.write(post);
      delay(5);
    }
  }
}

void setup() {
  Serial.begin(9600);
  init_servo();
}

void loop() {

}
