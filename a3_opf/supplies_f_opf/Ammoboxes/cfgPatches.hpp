class CfgPatches
{
	class A3_Supplies_F_Ammoboxes
	{
		addonRootClass = A3_Supplies_F_Opf;
		requiredAddons[] = {A3_Supplies_F_Opf};
		requiredVersion = 0.1;
		units[] =
        {
            // Paramilitary
            Box_Para_Wps_F,
            Box_Para_Ammo_F,
            Box_Para_WpsLaunch_F,

            // Raven
            Box_IR_Equip_F,

            // Separatists
            Box_ChDKZ_Ammo_F,
            Box_ChDKZ_Wps_F,
            Box_ChDKZ_WpsLaunch_F,

            // Insurgents
            Box_TKM_Ammo_F,
            Box_TKM_Wps_F,
            Box_TKM_WpsLaunch_F

            // Patriots
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};