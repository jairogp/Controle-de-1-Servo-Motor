// Controle de 1 servo

#include <Servo.h>

Servo servo1;

void setup()
{
servo1.attach(3);
}

void loop()
{
  servo1.write(10);
  delay (1000);
    servo1.write(180);
  delay (1000);
    servo1.write(30);
  delay (1000);
    servo1.write(160);
  delay (1000);
    servo1.write(50);
  delay (1000);
    servo1.write(140);
  delay (1000);
    servo1.write(70);
  delay (1000);
    servo1.write(120);
  delay (1000);
    servo1.write(90);
  delay (1000);
}

