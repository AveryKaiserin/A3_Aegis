class CfgPatches
{
	class A3_Aegis_Air_F_Aegis
	{
		author = $STR_A3_A_AveryTheKitty;
		name = "Arma 3 Aegis - Aircrafts";
		url = "https://forums.bistudio.com/forums/topic/205858-arma-3-aegis-alpha";
		requiredAddons[] = {A3_Aegis_Data_F_Aegis};
		requiredVersion = 0.1;
		units[] =
        {
            // NATO
            B_Plane_Fighter_05_Cluster_F,

            // CSAT
            O_Plane_Fighter_03_Cluster_F,

            // NATO (Pacific)
            B_T_Plane_CAS_01_Cluster_F,
            B_T_Plane_Fighter_01_Cluster_F,
            B_T_Plane_Fighter_05_Cluster_F,

            // CSAT (Pacific)
            O_T_Plane_CAS_02_Cluster_F,
            O_T_Plane_Fighter_02_Cluster_F,

            // CSAT (African)
            O_A_Plane_Fighter_03_Cluster_F,

            // NATO (Woodland)
            B_W_Plane_CAS_01_Cluster_F,
            B_W_Plane_Fighter_01_Cluster_F,
            B_W_Plane_Fighter_05_Cluster_F,

            // Russia
            O_R_Plane_CAS_02_Cluster_ard_F,
            O_R_Plane_CAS_02_Cluster_F,
            O_R_Plane_Fighter_02_Cluster_ard_F,
            O_R_Plane_Fighter_02_Cluster_F,

            // LDF
            I_E_Plane_Fighter_04_Cluster_F,

            // NATO (British)
            B_A_Plane_Fighter_05_Cluster_F,
            B_A_Plane_Fighter_05_Cluster_tna_F,
            B_A_Plane_Fighter_05_Cluster_wdl_F
        };
		weapons[] = {/* Auto-compiled by pboProject */};
	};
};