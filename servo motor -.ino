#include <Servo.h>

int i = 0;

Servo servo_2;

Servo servo_12;

void setup()
{
  servo_2.attach(2);

  servo_12.attach(12);

}

void loop()
{
  for (i = 0; i <= 180; i++) {
    servo_2.write(i);
    servo_12.write(i);
    delay(25); // Wait for 25 millisecond(s)
  }
  for (i = 180; i >= 0; i--) {
    servo_2.write(i);
    servo_12.write(i);
    delay(25); // Wait for 25 millisecond(s)
  }
}