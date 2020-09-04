class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_Heli_Light_02
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_Heli_Light_02_dynamicLoadout_F,
            O_W_Heli_Light_02_unarmed_F,

            // CSAT (Caspian)
            O_C_Heli_Light_02_dynamicLoadout_F,
            O_C_Heli_Light_02_unarmed_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};