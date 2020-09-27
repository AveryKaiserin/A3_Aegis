class CfgPatches
{
	class A3_Marine_Air_F_Marine_Heli_Attack_01
	{
		addonRootClass = A3_Marine_Air_F_Marine;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis_Heli_Attack_01,
			A3_Marine_Air_F_Marine
		};
		requiredVersion = 0.1;
		units[] =
        {
            // USMC
            Marine_B_USMC_Heli_Attack_01_dynamicLoadout_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};