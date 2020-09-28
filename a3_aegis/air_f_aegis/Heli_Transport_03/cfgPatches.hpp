class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Transport_03
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Heli_Heli_Transport_03
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US (Pacific)
            B_T_Heli_Transport_03_F,
            B_T_Heli_Transport_03_unarmed_F,

            // US (Woodland)
            B_W_Heli_Transport_03_F,
            B_W_Heli_Transport_03_unarmed_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};