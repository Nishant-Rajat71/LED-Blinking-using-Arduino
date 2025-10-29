/*
  Title: LED Blinking using Arduino
  Description: This program turns an LED ON and OFF repeatedly
  using digital pin 13 of the Arduino Uno board.
  Author: [Your Name]
  Repository: https://github.com/your-username/Arduino-LED-Blink
*/

#define LED_PIN 13   // Define the LED pin number

void setup() {
  // Initialize the digital pin as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn the LED ON
  digitalWrite(LED_PIN, HIGH);
  delay(500); // Wait for 500 milliseconds

  // Turn the LED OFF
  digitalWrite(LED_PIN, LOW);
  delay(500); // Wait for 500 milliseconds
}
