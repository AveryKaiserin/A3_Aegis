class CfgPatches
{
	class A3_Atlas_Supplies_F_Atlas_Ammoboxes
	{
		addonRootClass = A3_Atlas_Supplies_F_Atlas;
		requiredAddons[] = {A3_Atlas_Supplies_F_Atlas};
		requiredVersion = 0.1;
		units[] =
        {
            // Legion
            L_supplyCrate_F,

            // CSAT (Woodland)
            O_W_supplyCrate_F,

            // NATO (German)
            B_E_supplyCrate_F,

            // CSAT (Takistani)
            Box_C_East_Ammo_F,
            Box_C_East_Wps_F,
            Box_C_East_WpsLaunch_F,
            O_C_supplyCrate_F,

            // HIMF
            Box_Tanoan_Ammo_F,
            Box_Tanoan_Wps_F,
            Box_Tanoan_WpsLaunch_F,
            H_supplyCrate_F,

            // IDF
            I_I_supplyCrate_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};