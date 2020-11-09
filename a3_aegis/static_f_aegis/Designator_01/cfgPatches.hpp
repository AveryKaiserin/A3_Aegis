class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Designator_01
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Enoch_Designator_01,
			A3_Static_F_Mark_Designator_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // AAF
            I_Static_Designator_01_F,
            I_Static_Designator_01_weapon_F,

            // NATO (Pacific)
            B_T_Static_Designator_01_F,
            B_T_Static_Designator_01_Weapon_F,

            // LDF
            I_E_Static_Designator_01_F,
            I_E_Static_Designator_01_weapon_F,

            // NATO (British)
            B_A_Static_Designator_01_F,
            B_A_Static_Designator_01_tna_F,
            B_A_Static_Designator_01_wdl_F
        };
		weapons[] = {/* Automated */};
	};
};