maxOmega = 2000;
clutchStrength = 100;
antiRollbarForceCoef = 0;
antiRollbarForceLimit = 0;
antiRollbarSpeedMin = 50;
antiRollbarSpeedMax = 300;
class Wheels
{
  class Wheel_1_1
  {
    boneName = wheel_1_1;
    steering = true;
    side = left;
    center = wheel_1_1_center;
    boundary = wheel_1_1_bound;
    width = 0.285;
    mass = 250;
    MOI = 6.2;
    dampingRate = 0.1;
    dampingRateDamaged = 1;
    dampingRateDestroyed = 1000;
    maxBrakeTorque = 1000;
    maxHandBrakeTorque = 0;
    suspTravelDirection[] = {0,-1,0};
    suspForceAppPointOffset = wheel_1_1_center;
    tireForceAppPointOffset = wheel_1_1_center;
    maxCompression = 0.1;
    maxDroop = 0.15;
    sprungMass = 4400;
    springStrength = 440000;
    springDamperRate = 105600;
    longitudinalStiffnessPerUnitGravity = 1500;
    latStiffX = 2;
    latStiffY = 18;
    frictionVsSlipGraph[] =
    {
      {0,0.5},
      {0.2,0.9},
      {0.6,0.7}
    };
  };
  class Wheel_2_1: Wheel_1_1
  {
    boneName = wheel_2_1;
    steering = false;
    center = wheel_2_1_center;
    boundary = wheel_2_1_bound;
    width = 0.43;
    mass = 250;
    MOI = 17;
    maxBrakeTorque = 1000;
    maxCompression = 0.1;
    maxDroop = 0.15;
    sprungMass = 3300;
    springStrength = 330000;
    springDamperRate = 79200;
    suspForceAppPointOffset = wheel_2_1_center;
    tireForceAppPointOffset = wheel_2_1_center;
  };
  class Wheel_2_2: Wheel_2_1
  {
    boneName = wheel_2_2;
    side = right;
    center = wheel_2_2_center;
    boundary = wheel_2_2_bound;
    suspForceAppPointOffset = wheel_2_2_center;
    tireForceAppPointOffset = wheel_2_2_center;
  };
};
