class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_UGV_01
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] = {A3_Atlas_Soft_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Legion
            B_L_UGV_01_F,
            B_L_UGV_01_medical_F,
            B_L_UGV_01_rcws_F,

            // NATO (German)
            B_E_UGV_01_F,
            B_E_UGV_01_medical_F,
            B_E_UGV_01_rcws_F,

            // ADF
            B_O_UGV_01_F,
            B_O_UGV_01_medical_F,
            B_O_UGV_01_rcws_F,

            // CDF
            I_W_UGV_01_F,
            I_W_UGV_01_medical_F,
            I_W_UGV_01_rcws_F,

            // IDF
            I_I_UGV_01_F,
            I_I_UGV_01_medical_F,
            I_I_UGV_01_rcws_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};