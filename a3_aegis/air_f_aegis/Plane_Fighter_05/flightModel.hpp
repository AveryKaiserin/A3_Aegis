airBrake = true; /* DO NO TWEAK */
airBrakeFrictionCoef = 2.4; /* DO NO TWEAK */
flaps = true; /* DO NO TWEAK */
flapsFrictionCoef = 0.34; /* DO NO TWEAK */
gearsUpFrictionCoef = 0.8; /* DO NO TWEAK */
brakeDistance = 150; /* DO NO TWEAK */
wheelSteeringSensitivity = 1.2; // steering authority of the nose wheel /* DO NO TWEAK */
maxSpeed = 1400; //1975 /* DO NO TWEAK */
altFullForce = 5000; /* DO NO TWEAK */
altNoForce = 15000; /* DO NO TWEAK */
rudderInfluence = 0.518; // Basic angle (cos angle) of the rudder extent /* DO NO TWEAK */
aileronSensitivity = 1.1; /* DO NO TWEAK */
elevatorSensitivity = 0.8; /* DO NO TWEAK */

// CONTROLS - sensitivity/speed in which control surface reaches its maximum extent
elevatorControlsSensitivityCoef = 8; // default value is 4 /* DO NO TWEAK */
aileronControlsSensitivityCoef = 3.8; // default value is 4 /* DO NO TWEAK */
rudderControlsSensitivityCoef = 3.6; // default value is 4
envelope[] = /* NEEDS FINETUNING */
{
	0,
	1.71,
	4.11,
	6.62,
	8.18,
	8.81,
	10.21,
	11.08,
	12,
	12.8,
	13.7,
	14.2,
	14.7,
	14.2,
	13,
	12.4
};
thrustCoef[] = // fSpeed = maxI * speedRel; speedRel = speed / (maxSpeed * 1.5f); maxI = _thrustCoef.Size() - 1;
{
	1.58, 	// At 0 % of maxSpeed, thrust energy will be 1.2
	1.54, 	// 12.5 %
	1.55, 	// 25 %
	1.65, 	// 37.5 %
	1.73, 	// 50 %
	1.8, 	// 62.5 %
	1.86, 	// 75 %
	1.91, 	// 87.5 %
	1.94, 	// 100 %
	1.95, 	// 112.5 %
	0.1, 	// 125 %
	0, 		// 137.5 %
	0 		// 150 %
};
elevatorCoef[] =
{
  	0,		// At 0 % of maxSpeed, this is the influence of the elevator
	0.4,	// 12.5 %
	0.8,	// 25 %
	0.8,	// 37.5 %
	0.9,	// 50 %
	1,		// 62.5 %
	1,		// 75 %
	1.1,	// 87.5 %
	1.1,	// 100 %
	1.2,	// 112.5 %
	1.2,	// 125 %
	1.2,	// 137.5 %
	1.3		// 150 %
};
aileronCoef[] =
{
  	0,		// At 0 % of maxSpeed, this is the influence of the aileron
	0.4,	// 12.5 %
	0.8,	// 25 %
	0.8,	// 37.5 %
	0.9,	// 50 %
	1,		// 62.5 %
	1,		// 75 %
	1.1,	// 87.5 %
	1.1,	// 100 %
	1.2,	// 112.5 %
	1.2,	// 125 %
	1.2,	// 137.5 %
	1.3		// 150 %
};
rudderCoef[] = // default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));
{
  	0,		// At 0 % of maxSpeed, this is the influence of the rudder
	0.4,	// 12.5 %
	0.8,	// 25 %
	0.8,	// 37.5 %
	0.9,	// 50 %
	1,		// 62.5 %
	1,		// 75 %
	1.1,	// 87.5 %
	1.1,	// 100 %
	1.2,	// 112.5 %
	1.2,	// 125 %
	1.2,	// 137.5 %
	1.3		// 150 %
};
angleOfIndicence = -0.4 * 3.1415 / 180; // difference between forward and airfold chord line in radians /* DO NO TWEAK */

// FORCES - how good the airplane changes the flight vector or alignes with it
draconicForceXCoef = 8; /* DO NO TWEAK */
draconicForceYCoef = 1.4; /* DO NO TWEAK */
draconicForceZCoef = 1; /* DO NO TWEAK */
draconicTorqueXCoef = 1.4; /* DO NO TWEAK */
draconicTorqueYCoef = 3; /* DO NO TWEAK */

gunAimDown = 0; /* DO NO TWEAK */
landingSpeed = 220; /* DO NO TWEAK */
stallSpeed = 220; /* DO NO TWEAK */
stallWarningTreshold = 0.12; /* DO NO TWEAK */
acceleration = 200; /* DO NO TWEAK */
landingAoa = 7 * 3.1415 / 180; /* DO NO TWEAK */