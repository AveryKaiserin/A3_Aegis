class CfgPatches
{
	class A3_Aegis_Supplies_F_Aegis_CargoNets
	{
		addonRootClass = A3_Aegis_Supplies_F_Aegis;
		requiredAddons[] =
		{
			A3_Aegis_Supplies_F_Aegis,
			A3_Supplies_F_Heli_CargoNets
		};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO (Pacific)
            B_T_CargoNet_01_ammo_F,
            
            // CSAT (Pacific)
            O_T_CargoNet_01_ammo_F,

            // NATO (Woodland)
            B_W_CargoNet_01_ammo_F,

            // Russia
            O_R_CargoNet_01_ammo_arid_F,
            O_R_CargoNet_01_ammo_F,

            // NATO (British)
            B_A_CargoNet_01_ammo_F,
            B_A_CargoNet_01_ammo_tropic_F,
            B_A_CargoNet_01_ammo_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};