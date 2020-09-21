class CfgPatches
{
	class A3_Opf_Air_F_Opf_Heli_Light_02
	{
		addonRootClass = A3_Opf_Air_F_Opf;
		requiredAddons[] =
		{
			A3_Opf_Air_F_Opf,
			A3_Air_F_Heli_Light_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // Russia
            I_R_Heli_Light_02_dynamicLoadout_F,
            I_R_Heli_Light_02_unarmed_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};