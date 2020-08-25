class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Heli_Attack_02
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_Heli_Attack_02_dynamicLoadout_F,

            // CSAT (Caspian)
            O_C_Heli_Attack_02_dynamicLoadout_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};