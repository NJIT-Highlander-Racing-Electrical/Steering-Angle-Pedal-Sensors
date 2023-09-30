# Steering-Angle-Pedal-Sensors

A subsystem that measures the angle of the steering wheel, accelerator, and brake pedal. These values are sent via the CAN-Bus to other subsystems on the vehicle and the DAS.

## Potential Hardware Solutions

* Analog Hall effect sensors and magnets on the wheel and pedals that detect their positions. The analog values can be mapped from 0-100% for the pedals or from -90 to +90 degrees for the steering wheel.
