class CfgWeapons
{
    // Arma 3
    class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
        {
            class player;
        };
		class AP: autocannon_Base_F
        {
            class player;
        };
    };
    // Arma 3 Atlas
    class autocannon_30mm_Heli_Attack_03: autocannon_30mm_CTWS
    {
		displayName = $STR_A3_CfgWeapons_cannon_30mm;
		nameSound = cannon;
		cursor = EmptyCursor;
		cursorAim = mg;
		showAimCursorInternal = false;
        canLock = false;
		ballisticsComputer = BallisticsAutoZero + BallisticsManualZero + BallisticsFCS;
		FCSMaxLeadSpeed = 30.5556;
		FCSZeroingDelay = 0.5;
		maxZeroing = 2500;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		class GunParticles
		{
			class Effect
			{
				effectName = MachineGun2;
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class Shell
			{
				positionName = shell_eject_pos;
				directionName = shell_eject_dir;
				effectName = HeavyGunCartridge1;
			};
		};
		class HE: HE
		{
		    displayName = $STR_A3_CfgWeapons_cannon_30mm;
			magazines[] =
            {
                600Rnd_30mm_HE_shells,
                600Rnd_30mm_HE_shells_Tracer_Red,
                600Rnd_30mm_HE_shells_Tracer_Yellow
            };
			class player: player
			{
                reloadTime = 0.096;
			};
		};
		class AP: AP
		{
		    displayName = $STR_A3_CfgWeapons_cannon_30mm;
			magazines[] =
            {
                600Rnd_30mm_APDS_shells,
                600Rnd_30mm_APDS_shells_Tracer_Red,
                600Rnd_30mm_APDS_shells_Tracer_Yellow
            };
			class player: player
			{
                reloadTime = 0.096;
			};
		};
    };
};