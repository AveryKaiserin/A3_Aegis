class CfgVehicles
{
	/* Inheritance Tree */
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};

    /* Bases */
	class B_G_HMG_02_F;
	class B_G_HMG_02_high_F;

	/* Factions */
    #include "cfgNAAF.hpp"
};