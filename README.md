# Steering-Angle-Pedal-Sensors

A subsystem that measures the angle of the steering wheel, accelerator, and brake pedal. These values are sent via the CAN-Bus to other subsystems on the vehicle and the DAS.

## Potential Hardware Solutions

* Honeywell RTY060 (2x) and Honeywell RTY180 (1x) for both pedals and steering wheel
* Seeed SAMD21 because minimal IO and compact?

## Software

* We can put these on the car, find the true range of motion of the pedals and wheel, and set these as the software endpoints (0-100%)