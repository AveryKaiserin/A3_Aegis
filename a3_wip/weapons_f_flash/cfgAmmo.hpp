class CfgAmmo
{
    // Arma 3
	class GrenadeHand;
	class SmokeShell;
    // Arma 3 Aegis
	class GrenadeFlash: GrenadeHand
	{
        /*
        - Flashbang
        - Does a slight amount of damage if you're right next to it
        - 2.3 second delay, we'll go with 3 seconds to compensate for Arma's clunkiness
        - We'll just use the mini grenade's explosion sounds
        */
		hit = 2;
		indirectHit = 2;
		indirectHitRange = 0.2;
		dangerRadiusHit = 40;
		suppressionRadiusHit = 12;
		typicalspeed = 22;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east_throw.p3d"; // Placeholder
		explosionEffectsRadius = 0.5;
		deflecting = 7;
		deflectionSlowDown = 0.5;
        explosionTime = 2;
		timeToLive = 6;
		CraterEffects = SecondaryCrater;
		explosionEffects = SencondaryExplosion; //TODO: add custom explosion effects
        aiAmmoUsageFlags = OffensiveInfAU;
	};
    class FlareHand: SmokeShell
    {
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east_throw.p3d"; // Placeholder
		typicalspeed = 14;
		cost = 50;
		deflecting = 5;
		deflectionSlowDown = 0.5;
		explosionTime = 0.1;
		timeToLive = 900;
		fuseDistance = 0;
		SmokeShellSoundHit1[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_1",db0,1,70};
		SmokeShellSoundHit2[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_2",db0,1,70};
		SmokeShellSoundHit3[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_3",db0,1,70};
		SmokeShellSoundLoop1[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_loop1",db-16,1,70};
		SmokeShellSoundLoop2[] = {"\A3\Sounds_F\weapons\smokeshell\smoke_loop2",db-16,1,70};
		grenadeFireSound[] =
        {
            SmokeShellSoundHit1,1/3,
            SmokeShellSoundHit2,1/3,
            SmokeShellSoundHit3,1/3
        };
		grenadeBurningSound[] =
        {
            SmokeShellSoundLoop1,1/2,
            SmokeShellSoundLoop2,1/2
        };
        aiAmmoUsageFlags = LightAU;
		smokeColor[] =
        {
            1,  // R
            1,  // G
            1,  // B
            1   // A
        };
		effectsSmoke = FlareHandLight;
		whistleDist = 0;
    };
};