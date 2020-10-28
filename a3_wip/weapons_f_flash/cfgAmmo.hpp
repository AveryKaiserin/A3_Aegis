class CfgAmmo
{
    // Arma 3
	class GrenadeHand;
    // Arma 3 Aegis
	class GrenadeFlash: GrenadeHand
	{
        /*
        - Impact grenade
        - Slightly larger blast radius than the Frag Grenade
        - Slightly heavier than the Frag Grenade
        */
		hit = 2;
		indirectHit = 2;
		indirectHitRange = 0.2;
		dangerRadiusHit = 40;
		suppressionRadiusHit = 12;
		typicalspeed = 22;
		model = "\A3_Aegis\Weapons_F_Aegis\Ammo\Handgrenade_east_throw.p3d"; // Placeholder
		deflecting = 10;
        explosionTime = 3;
		timeToLive = 18;
	};
};