# IR
A library for Arduino that can be used to measure distance from a reflective type IR sensor.

Version 1.0
By Ravidu Liyanage

## Summary
The analog value from the sensor is converted to distance in centimeters, by using a sigmoidal function.
*distance = 2.6 * POW((irVal+20.6)/(1011-irVal), (float)1/3)*
- constants were obtained from a graph that was plotted by comparing the analog value from the sensor and the actual distance.

## Usage
- #include <IR.h>
- IR sensor_name(ir_analog_pin);
  ir_analog_pin: refers to the pin which the analog output from the sensor is connected.
- float distance = sensor_name.getDistance();

## Examples
- An example is provided with the library:
_IRSensorTest.ino_
This example shows how to use the library with the sensors to output distance in centimeters to serial monitor.

**Important Note:** Sensor was tested with the use of white surface. Results may differ with the use of different surfaces with different colors and reflectivity.
