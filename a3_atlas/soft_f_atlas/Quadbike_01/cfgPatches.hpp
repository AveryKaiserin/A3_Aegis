class CfgPatches
{
	class A3_Atlas_Soft_F_Atlas_Quadbike_01
	{
		addonRootClass = A3_Atlas_Soft_F_Atlas;
		requiredAddons[] =
		{
			A3_Aegis_Soft_F_Aegis_Quadbike_01,
			A3_Atlas_Soft_F_Atlas,
			A3_Soft_F_Exp_Quadbike_01
		};
		requiredVersion = 0.1;
		units[] =
        {
            // CSAT (Woodland)
            O_W_Quadbike_01_F,

            // Legion
            B_L_Quadbike_01_F,

            // NATO (German)
            B_E_Quadbike_01_F,

            // CSAT (Takistani)
            O_C_Quadbike_01_F,

            // ADF
            B_O_Quadbike_01_F,

            // HIMF
            B_H_Quadbike_01_F,
        
            // CDF
            I_W_Quadbike_01_F,
        
            // IDF
            I_I_Quadbike_01_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};