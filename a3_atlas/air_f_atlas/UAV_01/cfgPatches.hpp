class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_UAV_01
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Legion
            B_L_UAV_01_F,

            // NATO (European)
            B_E_UAV_01_F,

            // ADF
            B_O_UAV_01_backpack_F,
            B_O_UAV_01_F,

            // CDF
            I_W_UAV_01_backpack_F,
            I_W_UAV_01_F,

            // IDF
            I_I_UAV_01_backpack_F,
            I_I_UAV_01_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};