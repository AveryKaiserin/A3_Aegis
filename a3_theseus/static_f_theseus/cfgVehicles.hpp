class CfgVehicles
{
    /* Inheritance Tree */
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Items_base_F;
	class StaticWeapon: LandVehicle
	{
        /* Turrets*/
		class Turrets
		{
			class MainTurret: NewTurret
			{
				ejectDeadGunner = true;
			};
		};
	};
};