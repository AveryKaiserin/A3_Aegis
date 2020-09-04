class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_UGV_02
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] = {A3_Atlas_Soft_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Legion
            B_L_UGV_02_Demining_F,

            // NATO (German)
            B_E_UGV_02_Demining_F,

            // ADF
            B_O_UGV_02_Demining_backpack_F,
            B_O_UGV_02_Demining_F,

            // CDF
            I_W_UGV_02_Demining_backpack_F,
            I_W_UGV_02_Demining_F,

            // IDF
            I_I_UGV_02_Demining_backpack_F,
            I_I_UGV_02_Demining_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};