class CfgPatches
{
	class A3_Aegis_Air_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Aircrafts";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=949252631";
		requiredAddons[] = {A3_Aegis_Data_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // US
            Aegis_B_Plane_Fighter_05_Cluster_F,

            // IAF
            Aegis_O_Plane_Fighter_03_Cluster_F,

            // US (Pacific)
            Aegis_B_T_Plane_CAS_01_Cluster_F,
            Aegis_B_T_Plane_Fighter_01_Cluster_F,
            Aegis_B_T_Plane_Fighter_05_Cluster_F,

            // China
            Aegis_O_T_Plane_CAS_02_Cluster_F,
            Aegis_O_T_Plane_Fighter_02_Cluster_F,

            // Argana
            Aegis_O_A_Plane_Fighter_03_Cluster_F,

            // US (Woodland)
            Aegis_B_W_Plane_CAS_01_Cluster_F,
            Aegis_B_W_Plane_Fighter_01_Cluster_F,
            Aegis_B_W_Plane_Fighter_05_Cluster_F,

            // Russia
            Aegis_O_R_Plane_CAS_02_Cluster_ard_F,
            Aegis_O_R_Plane_CAS_02_Cluster_F,
            Aegis_O_R_Plane_Fighter_02_Cluster_ard_F,
            Aegis_O_R_Plane_Fighter_02_Cluster_F,

            // LDF
            Aegis_I_E_Plane_Fighter_04_Cluster_F,

            // BAF
            Aegis_B_B_Plane_Fighter_05_Cluster_F,
            Aegis_B_B_Plane_Fighter_05_Cluster_tna_F,
            Aegis_B_B_Plane_Fighter_05_Cluster_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};