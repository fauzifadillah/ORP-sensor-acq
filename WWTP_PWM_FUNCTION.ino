// ------------------------- FOR PWM FUNCTION ------------------------- //
int VP_PIN = LED_BUILTIN; // VP connected PIN

void vpControl() {
    // Buffing PWM Variable Increase
   for (int vpVal = 0; vpVal <= 255; vpVal += 5) {
      // VP Controlled PWM
      analogWrite(VP_PIN, vpVal);
      delay(30);
   }

    // Buffing PWM Variable Decrease
   for (int vpVal = 255; vpVal >= 0; vpVal -= 5) {
      // VP Controlled PWM
      analogWrite(VP_PIN, vpVal);
      delay(30);
   }
}
// ------------------------- END OF FOR PWM FUNCTION ------------------------- //

void setup() {
  Serial.begin(9600);                                 //set baud rate for the hardware serial port_0 to 9600
}

void loop() {
  vpControl();
  delay(1000);
}
