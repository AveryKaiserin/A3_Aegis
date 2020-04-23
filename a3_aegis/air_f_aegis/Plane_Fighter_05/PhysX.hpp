maxOmega = 2000;
clutchStrength = 100.0;
/*
antiRollbarForceCoef = 0;
antiRollbarForceLimit = 0;
antiRollbarSpeedMin = 50;
antiRollbarSpeedMax = 300;
*/
class Wheels
{
	class Wheel_1
	{
		boneName = wheel_1;
		steering = true;
		side = left;
		center = wheel_1_center;
		boundary = wheel_1_rim;
		width = 0.3;
		mass = 80;
		MOI = 6.2;
		dampingRate = 0.25;
		dampingRateDamaged = 1;
		dampingRateDestroyed = 1000;
		maxBrakeTorque = 4000;
		maxHandBrakeTorque = 0;
		suspTravelDirection[] =
		{
			0, // X
			-1, // Y
			0 // Z
		};
		suspForceAppPointOffset = wheel_1_center;
		tireForceAppPointOffset = wheel_1_center;
		maxCompression = 0.15;
		maxDroop = 0.15;
		sprungMass = 2500;
		springStrength = 250000;
		springDamperRate = 70000;
		longitudinalStiffnessPerUnitGravity = 2000;
		latStiffX = 2;
		latStiffY = 20;
		frictionVsSlipGraph[] =
		{
			{0,0.6},
			{0.2,1.0},
			{0.6,0.8}
		};
	};
	class Wheel_2: Wheel_1
	{
		boneName = wheel_2;
		steering = false;
		center = wheel_2_center;
		boundary = wheel_2_rim;
		width = 0.28;
		maxBrakeTorque = 10000;
		longitudinalStiffnessPerUnitGravity = 2500;
		sprungMass = 4250;
		springStrength = 370000;
		springDamperRate = 88000;
		suspForceAppPointOffset = wheel_2_center;
		tireForceAppPointOffset = wheel_2_center;
	};
	class Wheel_3: Wheel_2
	{
		boneName = wheel_3;
		side = right;
		center = wheel_3_center;
		boundary = wheel_3_rim;
		suspForceAppPointOffset = wheel_3_center;
		tireForceAppPointOffset = wheel_3_center;
	};
};