unsigned long lastBlinkTime = 0;
const unsigned long drowsinessThreshold = 5000; // 5 seconds threshold

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(9600);  // Initialize serial communication for debugging
}

void loop() {
  irSensorState = digitalRead(IR_SENSOR_PIN); // Read the IR sensor state

  if (irSensorState == LOW) {
    // IR sensor detected something (eye closed)
    lastBlinkTime = millis(); // Reset the timer
  }

  // Check for drowsiness based on the threshold time
  if (millis() - lastBlinkTime > drowsinessThreshold) {
    digitalWrite(BUZZER_PIN, HIGH); // Activate buzzer if drowsy
    Serial.println("Drowsiness detected!"); // Print debug message
  } else {
    digitalWrite(BUZZER_PIN, LOW); // Deactivate buzzer if not drowsy
  }

  delay(100); // Small delay to avoid bouncing
}

