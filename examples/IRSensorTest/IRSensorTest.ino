// Import the IR library into the sketch
#include <IR.h>

// Initialize the sensor
// Give the name to the sensor: "sensor"
// Sensor's output analog pin is attached to the pin A0
IR sensor(A0);

void setup() {
  Serial.begin(9600); // Begin the serial communication

}

void loop() {
  // Measure the distance in centimeters
  float distance = sensor.getDist();

  // Print the value to the serial monitor
  Serial.print(distance);
  Serial.println(" cm ");
}
