class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Designator_02
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Mark_Designator_02
		};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Pacific)
            O_T_Static_Designator_02_F,
            O_T_Static_Designator_02_weapon_F,
            
            // Russia
            O_R_Static_Designator_02_ard_F,
            O_R_Static_Designator_02_F,
            O_R_Static_Designator_02_weapon_F
        };
		weapons[] = {/* Automated */};
	};
};