// Define constant values from car. Should be updated when these subsystems are done.

const float MIN_STEERING_ANGLE = -110.0;
const float MAX_STEERING_ANGLE = 110.0;
float steeringAnalogValue;
float steeringAngle;

const float MAX_GAS_PEDAL_DISPLACEMENT = 10.0;
float gasPedalAnalogValue;
float gasPedalDisplacement;

const float MAX_BRAKE_PEDAL_DISPLACEMENT = 10.0;
float brakePedalAnalogValue;
float brakePedalDisplacement;

float floatMap(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


void setup() {
  Serial.begin(9600);
}

void loop() {
  // Should eventually print to Canbus instead of serial monitor
  steeringAnalogValue = analogRead(A0);
  steeringAngle = floatMap(steeringAnalogValue, 0.0, 1023.0, MIN_STEERING_ANGLE, MAX_STEERING_ANGLE);
  Serial.print("Steering Analog: ");
  Serial.print(steeringAnalogValue);
  Serial.print(", ");
  Serial.print("Steering Angle: ");
  Serial.println(steeringAngle);

  gasPedalAnalogValue = analogRead(A1);
  gasPedalDisplacement = floatMap(gasPedalAnalogValue, 0.0, 1023.0, 0, MAX_GAS_PEDAL_DISPLACEMENT);
  Serial.print("Gas Analog: ");
  Serial.print(gasPedalAnalogValue);
  Serial.print(", ");
  Serial.print("Gas Displacement: ");
  Serial.println(gasPedalDisplacement);

  brakePedalAnalogValue = analogRead(A2);
  brakePedalDisplacement = floatMap(brakePedalAnalogValue, 0.0, 1023.0, 0, MAX_BRAKE_PEDAL_DISPLACEMENT);
  Serial.print("Brake Analog: ");
  Serial.print(brakePedalAnalogValue);
  Serial.print(", ");
  Serial.print("Brake Displacement: ");
  Serial.println(brakePedalDisplacement);


  delay(1000);
}
