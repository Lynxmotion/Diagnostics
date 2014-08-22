/**
 * ==Self-Test Code for BotBoarduino==
 * 
 * Test all the pins one at a time.
 * 
 * @board: Arduino Duemilanove w/ ATmega328
 */

int pulseDuration = 100;

void setup() {
  
  // Set all pins as digital outputs
  for (int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  for (int i = A0; i <= A5; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  
  // Output a short pulse on each pin
  for (int i = 0; i <= 13; i++) {
    digitalWrite(i, HIGH);
    delay(pulseDuration);
    digitalWrite(i, LOW);
  }
  for (int i = A0; i <= A5; i++) {
    digitalWrite(i, HIGH);
    delay(pulseDuration);
    digitalWrite(i, LOW);
  }
}

