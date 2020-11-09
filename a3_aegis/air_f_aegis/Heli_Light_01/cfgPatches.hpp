class CfgPatches
{
	class A3_Aegis_Air_F_Aegis_Heli_Light_01
	{
		addonRootClass = A3_Aegis_Air_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Air_F_Aegis,
			A3_Air_F_Heli_Light_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // US
            B_Heli_Light_01_recon_F,

            // AAF
            I_Heli_Light_01_dynamicLoadout_F,
            I_Heli_Light_01_F,
            I_Heli_Light_01_recon_F,

            // US (Pacific)
            B_T_Heli_Light_01_dynamicLoadout_F,
            B_T_Heli_light_01_F,
            B_T_Heli_light_01_recon_F,

            // US (Woodland)
            B_W_Heli_Light_01_dynamicLoadout_F,
            B_W_Heli_light_01_F,
            B_W_Heli_light_01_recon_F,

            // ION
            B_ION_Heli_Light_01_civil_F
        };
		weapons[] = {/* Automated */};
	};
};