# Steering-Angle-Pedal-Sensors

A subsystem that measures the angle of the steering wheel, accelerator, and brake pedal. These values are sent via the CAN-Bus to other subsystems on the vehicle and the DAS.

## Hardware Solutions

* Honeywell RTY060 (2x) and Honeywell RTY180 (1x) for both pedals and steering wheel
* ESP32 and TJA1051T (using ESP32 TWAI CAN-Bus Controller)

## Software

* We can put these on the car, find the true range of motion of the pedals and wheel, and set these as the software endpoints (0-100%)

## Wiring


FROM SWITCH DATASHEET:

N North American:
 pin 1 = Vcc
 pin 2 = GND
 pin 3 = output

 24 AWG Connection Wire:

 VCC (pin 1) - RED
 GND (pin 2) - BLACK
 OUTPUT (pin 3) - YELLOW

 Ignore connector pigtail because colors are reversed
 

 
