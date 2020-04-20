simulation = shipx;
maxSpeed = 40;
overSpeedBrakeCoef = 0.8;
enginePower = 300;
engineShiftY = 0.1;
waterLeakiness = 3;
turnCoef = 1;
thrustDelay = 2;
waterLinearDampingCoefY = 1.2;
waterLinearDampingCoefX = 2;
waterAngularDampingCoef = 1.2;
waterResistanceCoef = 0.02;
rudderForceCoef = 0.1;
rudderForceCoefAtMaxSpeed	= 0.003;
idleRpm = 200;
redRpm = 1200;
class complexGearbox
{
    GearboxRatios[] =
    {
        R1,-0.782,
        N,0,
        D1,2,
        D2,1.85,
        D3,1.75
    };
    TransmissionRatios[] = {High,1};
    gearBoxMode = auto;
    moveOffGear = 1;
    driveString = D;
    neutralString = N;
    reverseString = R;
};
brakeDistance = 3;