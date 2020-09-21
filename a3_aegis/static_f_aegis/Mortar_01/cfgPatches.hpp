class CfgPatches
{
	class A3_Aegis_Static_F_Aegis_Mortar_01
	{
		addonRootClass = A3_Aegis_Static_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Static_F_Aegis,
			A3_Static_F_Enoch_Mortar_01,
			A3_Static_F_Exp_Mortar_01,
			A3_Static_F_Mortar_01,
			A3_Supplies_F_Enoch_Bags,
			A3_Supplies_F_Exp
		};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Pacific)
            O_T_Mortar_01_F,
            O_T_Mortar_01_weapon_F,

            // CSAT (African)
            O_A_Mortar_01_F,

            // NATO (Woodland)
            B_W_Mortar_01_F,

            // Russia
            O_R_Mortar_01_ard_F,
            O_R_Mortar_01_F,
            O_R_Mortar_01_support_F,
            O_R_Mortar_01_Weapon_F,

            // NATO (British)
            B_A_Mortar_01_F,
            B_A_Mortar_01_tna_F,
            B_A_Mortar_01_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};