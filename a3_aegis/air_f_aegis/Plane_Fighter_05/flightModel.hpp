airBrake = true;
airBrakeFrictionCoef = 2.4;
flaps = true;
flapsFrictionCoef = 0.35;
gearsUpFrictionCoef = 0.8;
brakeDistance = 250;
wheelSteeringSensitivity = 4;
maxSpeed = 1400;
altFullForce = 5000;
altNoForce = 15000;
rudderInfluence = 0.518;
aileronSensitivity = 1.2;
elevatorSensitivity = 1.4;
elevatorControlsSensitivityCoef = 4.0; 
aileronControlsSensitivityCoef = 3.5;
rudderControlsSensitivityCoef = 4.0;
envelope[] =
{
	0.0,
	0.5,
	1.0,
	2.0,
	7.0,
	7.0,
	7.0,
	6.85,
	6.5,
	5.8,
	4.6,
	2.8,
	0.0
};
thrustCoef[] =
{
	1.0,
	1.4,
	1.5,
	1.5,
	1.5,
	1.4,
	1.3,
	1.2,
	1.2,
	1.0,
	0.9,
	0.7,
	0.4,
	0.3,
	0.0,
	0.0
};
elevatorCoef[] =
{
	0.5,
	0.6,
	0.7,
	0.8,
	0.9,
	1.0,
	1.0,
	1.0,
	1.0,
	1.0,
	1.0,
	1.0,
	1.0,
	1.0,
	1.0,
	1.0
};
aileronCoef[] =
{
	1.0,
	1.5,
	5.0,
	2.0,
	2.5,
	3.0,
	3.0,
	3.0,
	3.0,
	3.0,
	3.0,
	3.0,
	3.0,
	3.0,
	2.0,
	1.0,
	1.0
};
rudderCoef[] = {};
angleOfIndicence = -0.4 * 3.1415 / 180;
draconicForceXCoef = 7.0;
draconicForceYCoef = 1.5;
draconicForceZCoef = 1.0;
draconicTorqueXCoef = 1.2;
draconicTorqueYCoef = 1.0; 
airFrictionCoefs0[] =
{
	0.0,
	0.0,
	0.0
};
airFrictionCoefs1[] =
{
	0.1,
	0.5,
	0.0075
};
airFrictionCoefs2[] =
{
	0.001,
	0.005,
	6.7e-05
};
gunAimDown = 0.0;
landingSpeed = 260;
stallSpeed = 220;
stallWarningTreshold = 0.12;
acceleration = 200;
landingAoa = 7 * 3.1415 / 180;