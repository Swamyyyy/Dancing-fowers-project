#include <Servo.h>

Servo flower1;
Servo flower2;
Servo flower3;
Servo flower4;
Servo flower5;

const int irPin = 13;

int angle = 35;
int direction = 1;

void setup() {

  pinMode(irPin, INPUT);

  flower1.attach(8);
  flower2.attach(9);
  flower3.attach(10);
  flower4.attach(11);
  flower5.attach(12);

  // Start all flowers at center
  flower1.write(35);
  flower2.write(35);
  flower3.write(35);
  flower4.write(35);
  flower5.write(35);

  Serial.begin(9600);
}

void loop() {

  int irValue = digitalRead(irPin);

  Serial.print("IR Output: ");
  Serial.println(irValue);

  // Hand detected
  if (irValue == LOW) {

    angle += direction;

    // Reach 50°
    if (angle >= 50) {
      angle = 50;
      direction = -1;
    }

    // Reach 20°
    if (angle <= 20) {
      angle = 20;
      direction = 1;
    }

  }

  // No hand detected
  else {

    // Slowly return to center 35°
    if (angle < 35) {
      angle++;
    }

    else if (angle > 35) {
      angle--;
    }

    if (angle == 35) {
      direction = 1;
    }
  }

  // Move all 5 flowers together
  flower1.write(angle);
  flower2.write(angle);
  flower3.write(angle);
  flower4.write(angle);
  flower5.write(angle);

  delay(30);
}
