#include <Servo.h>

Servo myservo; // create servo object

const int sensorPin = 2; // sensor pin
const int servoPin = 9; // servo motor pin

int sensorValue; // variable to store sensor reading

void setup() {
  myservo.attach(servoPin); // attach servo to pin 9
  Serial.begin(9600); // start serial communication
}

void loop() {
  sensorValue = analogRead(sensorPin); // read sensor value
  Serial.println(sensorValue); // print sensor value for debugging

  if (sensorValue > 300) { // door is open
    myservo.write(0); // move servo to 0 degrees (door open position)
  } else { // door is closed
    myservo.write(90); // move servo to 90 degrees (door closed position)
  }

  delay(100); // delay between readings
}
