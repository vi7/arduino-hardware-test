#include <Arduino.h>

#define LED_PIN LED_BUILTIN


/**
 * Configure Serial
 */
void setupSerial() {
  Serial.begin(9600);
  Serial.println("\n\nBoard is up. Hey there!");
}

/**
 * Configure pins
 *
 * @param ledPin LED pin number
 */
void setupPins(uint8_t ledPin) {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

/**
 * Toggle pin
 *
 * @param ledPin LED pin number
 */
void togglePin(uint8_t ledPin) { digitalWrite(ledPin, !digitalRead(ledPin)); }

/**
 * Print message
 */
void printMessage() {
  Serial.print("Led state: ");
  Serial.println(digitalRead(LED_PIN), DEC);
}

/*******
 *
 * MAIN
 *
 *******/

void setup() {
  setupSerial();
  setupPins(LED_PIN);
}

void loop() {
  togglePin(LED_PIN);
  printMessage();
  delay(2000);
  togglePin(LED_PIN);
  printMessage();
  delay(4000);
}
