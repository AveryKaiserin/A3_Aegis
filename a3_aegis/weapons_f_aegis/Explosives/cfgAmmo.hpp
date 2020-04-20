class CfgAmmo
{
	// Arma 3
	class FlareBase;
	class DirectionalBombBase;
	// Arma 3 Aegis
	class FlareTripMine_Wire_Ammo: DirectionalBombBase
	{
		defaultMagazine = FlareTripMine_Wire_Mag;
		explosionEffects = CounterMeasureFlare;
		craterEffects = "";
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 1;
		triggerWhenDestroyed = false;
		model = "\A3\Weapons_F\Explosives\Flare_tripwire.p3d";
		mineModelDisabled = "\A3\Weapons_F\Explosives\Flare_tripwire_d.p3d";
		soundHit1[] = {"\A3\Sounds_F\weapons\flare_gun\flaregun_1_shoot",db5,1,700};
		soundHit2[] = {"\A3\Sounds_F\weapons\flare_gun\flaregun_2_shoot",db5,1,700};
		multiSoundHit[] =
		{
			soundHit1,1/2,
			soundHit2,1/2
		};
		soundTrigger[] = {"\A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Trigger_01",1,1,20};
		soundActivation[] = {"\A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Placement_01",1.7782794,1,20};
		soundDeactivation[] = {"\A3\Sounds_F_Orange\arsenal\explosives\Handling\ApersTripwire_Deactivate_01",1.9952624,1,20};
		submunitionAmmo = FlareTripMine_Wire_Deploy;
		submunitionConeAngle[] =
		{
			10,
			180
		};
		//submunitionConeAngleHorizontal = 175;
		submunitionAutoleveling = true;
		submunitionConeType[] = {randomupcone,1};
		submunitionInitSpeed = 30;
		triggerSpeedCoef[] = {0.5,1.2};
		mineTrigger = WireTrigger;
		mineInconspicuousness = 30;
	};
	class FlareTripMine_Wire_Deploy: FlareBase
	{
		model = "\A3\Weapons_F\Ammo\flare_red.p3d";
		lightColor[] = {0.5,0.25,0.25,0};
		useFlare = true;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		brightness = 12;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
		audibleFire = 20;
		typicalSpeed = 300;
	};
};