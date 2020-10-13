class CfgMagazines
{
	// Arma 3
	class 250Rnd_30mm_HE_shells;
	// Arma 3 Atlas
	class 600Rnd_30mm_HE_shells: 250Rnd_30mm_HE_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_600Rnd_30mm_HE_shells0;
		displayNameShort = $STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_dns;
		count = 600;
	};
	class 600Rnd_30mm_HE_shells_Tracer_Red: 600Rnd_30mm_HE_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_600Rnd_30mm_HE_shells_Tracer_Red0;
		ammo = B_30mm_HE_Tracer_Red;
		tracersEvery = 1;
	};
	class 600Rnd_30mm_HE_shells_Tracer_Yellow: 600Rnd_30mm_HE_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_600Rnd_30mm_HE_shells_Tracer_Yellow0;
		ammo = B_30mm_HE_Tracer_Yellow;
		tracersEvery = 1;
	};
	class 600Rnd_30mm_APDS_shells: 600Rnd_30mm_HE_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_600Rnd_30mm_APDS_shells0;
		displayNameShort = $STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_dns;
		ammo = B_30mm_AP;
		initSpeed = 1120;
		muzzleImpulseFactor[] =
        {
            0.5,
            2
        };
	};
	class 600Rnd_30mm_APDS_shells_Tracer_Red: 600Rnd_30mm_APDS_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_600Rnd_30mm_APDS_shells_Tracer_Red0;
		ammo = B_30mm_AP_Tracer_Red;
		tracersEvery = 1;
	};
	class 600Rnd_30mm_APDS_shells_Tracer_Yellow: 600Rnd_30mm_APDS_shells
	{
		author = $STR_A3_A_AveryTheKitty;
		displayName = $STR_A3_A_CfgMagazines_600Rnd_30mm_APDS_shells_Tracer_Yellow0;
		ammo = B_30mm_AP_Tracer_Yellow;
		tracersEvery = 1;
	};
};