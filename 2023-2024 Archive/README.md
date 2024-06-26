# Steering-Angle-Pedal-Sensors

A subsystem that measures the angle of the steering wheel, accelerator, and brake pedal. These values are sent via the CAN-Bus to other subsystems on the vehicle and the DAS.

## Project Note
* The steering angle portion of the project was scrapped due to a lack of time. This project would have required either a specialized rotary sensor that could be fitted to the steering column, or a gearing/mounting system that would turn the steering column rotation into rotary sensor rotation. Leads decided that the data was not valuable enough for testing to warrant the time commitment. The code folder pedal-sensors updates the previous developed code file steering-angle-pedal-sensors.




## Hardware Solutions

* Honeywell RTY060 (2x) and Honeywell RTY180 (1x) for both pedals and steering wheel
* ESP32 and TJA1051T (using ESP32 TWAI CAN-Bus Controller)
* Chassis/Ergonomics subteam is designing an adapter to transform pedal motion into rotary shaft motion

## Software

* We can put these sensors on the car, find the true range of motion of the pedals and wheel, and set these as the software endpoints (0-100%)

## Wiring

Rotary Sensors:

* N North American:
  * pin 1 = Vcc
  * pin 2 = GND
  * pin 3 = output

* 24 AWG Connection Wire:
  * VCC (pin 1) - RED
  * GND (pin 2) - BLACK
  * OUTPUT (pin 3) - YELLOW

 * Ignore connector pigtail because colors are reversed

 * ESP32 Pins
    * Sensor 1 = 36
    * Sensor 2 = 39
    * CAN-TX = 26
    * CAN-RX = 27
  
 

 
