class CfgPatches
{
	class A3_Atlas_Static_F_Atlas_Mortar_01
	{
		addonRootClass = A3_Atlas_Static_F_Atlas;
		requiredAddons[] =
		{
			A3_Atlas_Static_F_Atlas,
			A3_Static_F_Mortar_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_Mortar_01_F,

            // Legion
            B_L_Mortar_01_F,

            // NATO (German)
            B_E_Mortar_01_F,

            // CSAT (Takistani)
            O_C_Mortar_01_F,

            // ADF
            B_O_Mortar_01_F,
            B_O_Mortar_01_support_F,
            B_O_Mortar_01_weapon_F,

            // CDF
            I_W_Mortar_01_F,
            I_W_Mortar_01_support_F,
            I_W_Mortar_01_weapon_F,

            // IDF
            I_I_Mortar_01_F,
            I_I_Mortar_01_support_F,
            I_I_Mortar_01_weapon_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};