# WakeShield

// Theme

Driver drowsiness poses a serious safety risk, especially during long or late-hour journeys, increasing the chances of accidents. 'WakeShield' addresses this by developing an advanced real-time drowsiness detection system. By alerting drivers early to signs of fatigue, it aims to prevent accidents and enhance road safety.

//Idea/Approach

Eye Detection: Utilizes eye-tracking technology to detect signs of driver drowsiness, such as closed or drooping eyes.
Sleep Detection: Monitors changes in eye movement patterns to identify when the driver falls asleep or exhibits drowsy behavior.
Alert System: Triggers an immediate alert, such as sound or visual warnings, when sleep-like patterns are detected, prompting the driver to take corrective action.
Safety Focus: Prioritizes driver safety by providing timely alerts to prevent accidents caused by drowsy driving.

//Working/Connections

A driver drowsiness detection system using Arduino involves using sensors to monitor signs of drowsiness (like eye blinks or head nods) and alerting the driver if drowsiness is detected. Below is a comprehensive guide to building such a system, including hardware requirements, circuit connections, and code examples.

Hardware Requirements
Arduino Board (e.g., Arduino Uno)
Eye Blink Sensor (e.g., IR-based eye blink sensor)
Buzzer (for alerting the driver)
LED (optional, for visual indication)
Resistors (if needed)
Breadboard and Jumper Wires
Circuit Diagram
Here's a basic circuit setup:

Eye Blink Sensor: Connect the sensor's VCC to 5V on the Arduino, GND to GND, and the output to a digital pin (e.g., D2).
Buzzer: Connect one terminal to a VCC and the other terminal to GND. If needed, use a transistor to drive the buzzer.
.
Connecting Components
Eye Blink Sensor:

VCC -> 5V on Arduino
GND -> GND on Arduino
OUT -> D2 on Arduino
Buzzer:

Positive terminal -> D3 on Arduino
Negative terminal -> GND on Arduino
LED:

Anode -> D4 on Arduino (through a resistor, e.g., 220 ohms)
Cathode -> GND on Arduino