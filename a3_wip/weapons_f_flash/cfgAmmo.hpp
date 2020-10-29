class CfgAmmo
{
    // Arma 3
	class GrenadeHand;
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
		timeToLive = 18;
		CraterEffects = NoCrater;
		explosionEffects = ExploAmmoExplosion; //TODO: add custom explosion effects
	};
};