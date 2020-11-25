class CfgPatches
{
    /* Definitions */
    #include "\A3_Aegis\macros_urls.hpp"

	class A3_Theseus_Characters_F_Theseus
	{
		author = $STR_A3_A_Heliotrope;
		name = "Arma 3 Theseus - Characters and Clothing";
		url = linkTheseus;
		requiredAddons[] =
		{
			A3_Aegis_Characters_F_Aegis,
            A3_Theseus_Data_F_Theseus
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* From "cfgNAAF.hpp" */
            Theseus_B_N_Soldier_A_F,
            Theseus_B_N_Soldier_AR_F,
            Theseus_B_N_Crew_F,
            Theseus_B_N_Medic_F,
            Theseus_B_N_Engineer_F,
            Theseus_B_N_Soldier_GL_F,
            Theseus_B_N_Helipilot_F,
            Theseus_B_N_Helicrew_F,
            Theseus_B_N_soldier_M_F,
            Theseus_B_N_Officer_F,
            Theseus_B_N_Soldier_F,
            Theseus_B_N_Soldier_LAT_F,
            Theseus_B_N_Soldier_SL_F,
            Theseus_B_N_Soldier_TL_F,
            Theseus_B_N_RadioOperator_F,
            Theseus_B_N_Soldier_unarmed_F,

            /* From "cfgBandits.hpp" */
            Theseus_O_B_Looter_Pistol_F,
            Theseus_O_B_Looter_SG_F,
            Theseus_O_B_Looter_Rifle_F,
            Theseus_O_B_Looter_SMG_F,
            Theseus_O_B_Criminal_SG_F,
            Theseus_O_B_Criminal_SMG_F,
            Theseus_O_B_Hunter_F,

            /* From "cfgIDF.hpp" */
            /*Theseus_B_I_crew_F,
            Theseus_B_I_diver_exp_F,
            Theseus_B_I_diver_F,
            Theseus_B_I_diver_TL_F,
            Theseus_B_I_engineer_F,
            Theseus_B_I_Fighter_Pilot_F,
            Theseus_B_I_helicrew_F,
            Theseus_B_I_helipilot_F,
            Theseus_B_I_medic_F,
            Theseus_B_I_officer_F,
            Theseus_B_I_pilot_F,
            Theseus_B_I_RadioOperator_F,
            Theseus_B_I_recon_AR_F,
            Theseus_B_I_recon_exp_F,
            Theseus_B_I_recon_F,
            Theseus_B_I_recon_GL_F,
            Theseus_B_I_recon_JTAC_F,
            Theseus_B_I_recon_LAT_F,
            Theseus_B_I_recon_medic_F,
            Theseus_B_I_recon_M_F,
            Theseus_B_I_recon_TL_F,
            Theseus_B_I_sniper_F,
            Theseus_B_I_soldier_AAA_F,
            Theseus_B_I_soldier_AAR_F,
            Theseus_B_I_soldier_AAT_F,
            Theseus_B_I_soldier_AA_F,
            Theseus_B_I_Soldier_AR_F,
            Theseus_B_I_soldier_AT_F,
            Theseus_B_I_Soldier_A_F,
            Theseus_B_I_Soldier_CBRN_F,
            Theseus_B_I_Soldier_CQ_F,
            Theseus_B_I_soldier_exp_F,
            Theseus_B_I_Soldier_F,
            Theseus_B_I_Soldier_GL_F,
            Theseus_B_I_Soldier_LAT_F,
            Theseus_B_I_Soldier_lite_F,
            Theseus_B_I_soldier_mine_F,
            Theseus_B_I_soldier_M_F,
            Theseus_B_I_Soldier_repair_F,
            Theseus_B_I_Soldier_SL_F,
            Theseus_B_I_Soldier_TL_F,
            Theseus_B_I_soldier_UAV_06_F,
            Theseus_B_I_soldier_UAV_06_medical_F,
            Theseus_B_I_Soldier_UAV_F,
            Theseus_B_I_soldier_UGV_02_Demining_F,
            Theseus_B_I_Soldier_unarmed_F,
            Theseus_B_I_spotter_F,
            Theseus_B_I_support_AMG_F,
            Theseus_B_I_support_AMort_F,
            Theseus_B_I_support_GMG_F,
            Theseus_B_I_support_MG_F,
            Theseus_B_I_support_Mort_F,
            Theseus_B_I_Survivor_F,*/

            /* From "cfgRemnants.hpp" */
            Theseus_O_R_Soldier_1_F,
            Theseus_O_R_Soldier_2_F,
            Theseus_O_R_Soldier_3_F,
            Theseus_O_R_Soldier_4_F,
            Theseus_O_R_Soldier_5_F,
            Theseus_O_R_Soldier_6_F,
            Theseus_O_R_Soldier_7_F,
            Theseus_O_R_Soldier_8_F,
            Theseus_O_R_Crew_F,
            Theseus_O_R_Soldier_Base_unarmed_F
        };
		weapons[] = {/* Automated */};
	};
};