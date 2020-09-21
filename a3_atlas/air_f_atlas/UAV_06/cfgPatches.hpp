class CfgPatches
{
	class A3_Atlas_Air_F_Atlas_UAV_06
	{
		addonRootClass = A3_Atlas_Air_F_Atlas;
		requiredAddons[] = {A3_Atlas_Air_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (European)
            B_E_UAV_06_F,
            B_E_UAV_06_medical_F,

            // IDF
            Box_I_I_UAV_06_F,
            Box_I_I_UAV_06_medical_F,
            I_I_UAV_06_backpack_F,
            I_I_UAV_06_F,
            I_I_UAV_06_medical_backpack_F,
            I_I_UAV_06_medical_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};