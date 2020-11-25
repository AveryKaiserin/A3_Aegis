class CfgGroups
{
    /* Definitions */
    #include "\A3_Aegis\macros_groups.hpp"

	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = TWest;
		class Theseus_BLU_N_F
		{
			name = $STR_A3_T_CfgFactionClasses_BLU_N_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_N_infSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Theseus_BLU_N_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_N_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_N_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_N_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Theseus_B_N_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Theseus_B_N_medic_F,PRIVATE,20,-20);
				};
				class B_N_infTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Theseus_BLU_N_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_N_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_N_soldier_LAT_F,PRIVATE,10,-10);
				};
				class B_N_infSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Theseus_BLU_N_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_F,PRIVATE,5,-5);
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_N_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Theseus_BLU_N_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_MRAP_03_gmg_wdl_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_LAT_F,PRIVATE,5,-5);
				};
				class B_N_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = Theseus_BLU_N_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_Truck_02_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Theseus_B_N_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Theseus_B_N_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Theseus_B_N_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Theseus_B_N_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Theseus_B_N_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Theseus_B_N_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Theseus_B_N_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Theseus_B_N_soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Theseus_B_N_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Theseus_B_N_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Theseus_B_N_medic_F,PRIVATE,-5,-14);
				};
			};
		};
		/*
		class Theseus_BLU_I_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_I_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_I_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_RadioOperator_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_LAT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TWest,Theseus_B_I_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Theseus_B_I_medic_F,PRIVATE,20,-20);
				};
				class B_I_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_GL_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_M_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_I_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_I_soldier_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Theseus_B_I_soldier_A_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TWest,Theseus_B_I_medic_F,PRIVATE,20,-20);
				};
				class B_I_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_LAT_F,PRIVATE,10,-10);
				};
				class B_I_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_AT_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_F,PRIVATE,10,-10);
				};
				class B_I_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_AA_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_F,PRIVATE,10,-10);
				};
				class B_I_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_GL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_F,PRIVATE,5,-5);
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_I_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_recon_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_I_recon_JTAC_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_I_recon_exp_F,PRIVATE,15,-15);
				};
				class B_I_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_recon_M_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_recon_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_recon_F,PRIVATE,10,-10);
				};
				class B_I_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_recon_M_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_recon_F,PRIVATE,5,-5);
				};
				class B_I_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_sniper_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_spotter_F,CORPORAL,5,-5);
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class B_I_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_medic_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_medic_F,PRIVATE,10,-10);
				};
				class B_I_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_exp_F,PRIVATE,10,-10);
				};
				class B_I_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_engineer_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_engineer_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_repair_F,PRIVATE,10,-10);
				};
				class B_I_Recon_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_recon_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_recon_exp_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_recon_exp_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_recon_F,PRIVATE,10,-10);
				};
				class B_I_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_support_MG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_support_AMG_F,PRIVATE,-5,-5);
				};
				class B_I_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_support_GMG_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_support_AMG_F,PRIVATE,-5,-5);
				};
				class B_I_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mortar.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_support_Mort_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_support_AMort_F,PRIVATE,-5,-5);
				};
			};
			/*
			/*class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_I_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MRAP_01_gmg_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_LAT_F,PRIVATE,-5,-5);
				};
				class B_I_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AT_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_AT_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_AAT_F,PRIVATE,0,-10);
				};
				class B_I_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_AA_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_AA_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_AAA_F,PRIVATE,0,-10);
				};
				class B_I_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_support_MG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_support_AMG_F,PRIVATE,0,-10);
				};
				class B_I_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_support_GMG_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_support_AMG_F,PRIVATE,0,-10);
				};
				class B_I_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MRAP_01_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_support_Mort_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_support_AMort_F,PRIVATE,0,-10);
				};
				class B_I_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_Truck_01_transport_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,5,0);
					GROUP_UNIT(2,TWest,Theseus_B_I_RadioOperator_F,PRIVATE,5,-2);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_LAT_F,CORPORAL,5,-4);
					GROUP_UNIT(4,TWest,Theseus_B_I_soldier_M_F,PRIVATE,5,-6);
					GROUP_UNIT(5,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,5,-8);
					GROUP_UNIT(6,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,5,-10);
					GROUP_UNIT(7,TWest,Theseus_B_I_soldier_A_F,PRIVATE,5,-12);
					GROUP_UNIT(8,TWest,Theseus_B_I_medic_F,PRIVATE,5,-14);
					GROUP_UNIT(9,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,-5,0);
					GROUP_UNIT(10,TWest,Theseus_B_I_RadioOperator_F,PRIVATE,-5,-2);
					GROUP_UNIT(11,TWest,Theseus_B_I_soldier_LAT_F,CORPORAL,-5,-4);
					GROUP_UNIT(12,TWest,Theseus_B_I_soldier_M_F,PRIVATE,-5,-6);
					GROUP_UNIT(13,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,-5,-8);
					GROUP_UNIT(14,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,-5,-10);
					GROUP_UNIT(15,TWest,Theseus_B_I_soldier_A_F,PRIVATE,-5,-12);
					GROUP_UNIT(16,TWest,Theseus_B_I_medic_F,PRIVATE,-5,-14);
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_I_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_RadioOperator_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_LAT_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_I_soldier_M_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,Theseus_B_I_soldier_A_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,Theseus_B_I_medic_F,PRIVATE,-20,-20);
				};
				class B_I_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_AT_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_I_soldier_AT_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_I_soldier_AT_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,Theseus_B_I_soldier_AAT_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,Theseus_B_I_soldier_AAT_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,Theseus_B_I_soldier_AAT_F,PRIVATE,-20,-20);
				};
				class B_I_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_AA_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_I_soldier_AA_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_I_soldier_AA_F,SERGEANT,15,-15);
					GROUP_UNIT(6,TWest,Theseus_B_I_soldier_AAA_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,Theseus_B_I_soldier_AAA_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,Theseus_B_I_soldier_AAA_F,PRIVATE,-20,-20);
				};
				class B_I_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_soldier_SL_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TWest,Theseus_B_I_soldier_TL_F,SERGEANT,-5,-5);
					GROUP_UNIT(3,TWest,Theseus_B_I_soldier_repair_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TWest,Theseus_B_I_engineer_F,PRIVATE,-10,-10);
					GROUP_UNIT(5,TWest,Theseus_B_I_medic_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TWest,Theseus_B_I_soldier_AR_F,CORPORAL,-15,-15);
					GROUP_UNIT(7,TWest,Theseus_B_I_soldier_exp_F,PRIVATE,20,-20);
					GROUP_UNIT(8,TWest,Theseus_B_I_soldier_A_F,PRIVATE,-20,-20);
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class B_I_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MBT_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_MBT_01_cannon_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Theseus_B_I_MBT_01_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,Theseus_B_I_MBT_01_cannon_F,CORPORAL,20,-20);
				};
				class B_I_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MBT_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_APC_Tracked_01_aa_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Theseus_B_I_MBT_01_cannon_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,Theseus_B_I_APC_Tracked_01_aa_F,CORPORAL,20,-20);
				};
				class B_I_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MBT_01_cannon_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_MBT_01_cannon_F,SERGEANT,10,-10);
				};
				class B_I_SPGPlatoon_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MBT_01_arty_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_MBT_01_arty_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TWest,Theseus_B_I_MBT_01_arty_F,SERGEANT,-10,-10);
					GROUP_UNIT(3,TWest,Theseus_B_I_MBT_01_arty_F,CORPORAL,20,-20);
				};
				class B_I_SPGSection_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0;
					side = TWest;
					faction = Theseus_BLU_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";
					GROUP_UNIT(0,TWest,Theseus_B_I_MBT_01_arty_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,Theseus_B_I_MBT_01_arty_F,SERGEANT,10,-10);
				};
			};
		};*/
	};
	class East
	{
		class Theseus_OPF_B_F
		{
			name = $STR_A3_T_CfgFactionClasses_OPF_B_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_B_BanditGang
				{
					name = $STR_A3_T_CfgGroups_East_OPF_B_F_Infantry_O_B_BanditGang0;
					side = TEast;
					faction = Theseus_OPF_B_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_B_Looter_Pistol_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_B_Looter_SG_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_B_Looter_Rifle_F,CORPORAL,-5,-5);
				};
				class O_B_CriminalGang
				{
					name = $STR_A3_T_CfgGroups_East_OPF_B_F_Infantry_O_B_CriminalGang0;
					side = TEast;
					faction = Theseus_OPF_B_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_B_Criminal_SMG_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_B_Hunter_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_B_Criminal_SG_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_B_Looter_SMG_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Theseus_O_B_Looter_Rifle_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,Theseus_O_B_Looter_SG_F,PRIVATE,15,-15);
					GROUP_UNIT(6,TEast,Theseus_O_B_Looter_Pistol_F,PRIVATE,-15,-15);
				};
			};
		};
		class Theseus_OPF_R_F
		{
		  	name = $STR_A3_T_CfgFactionClasses_OPF_R_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class RemnantsFireTeam
				{
					name = "Remnants Fire Team";
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Soldier_2_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_4_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_1_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_3_F,PRIVATE,10,-10);
				};
				class RemnantsShockTeam
				{
					name = "Remnants Shock Team";
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Soldier_6_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_5_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_7_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_8_F,PRIVATE,10,-10);
				};
				class RemnantsCombatGroup
				{
					name = "Remnants Combat Group";
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Soldier_2_F,SERGEANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_4_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_6_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_1_F,PRIVATE,10,-10);
					GROUP_UNIT(4,TEast,Theseus_O_R_Soldier_7_F,SERGEANT,-10,-10);
					GROUP_UNIT(5,TEast,Theseus_O_R_Soldier_5_F,CORPORAL,15,-15);
					GROUP_UNIT(6,TEast,Theseus_O_R_Soldier_8_F,PRIVATE,-15,-15);
					GROUP_UNIT(7,TEast,Theseus_O_R_Soldier_3_F,PRIVATE,20,-20);
				};
            };
			class Motorized_MTP
			{
				name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP0;
				class Theseus_O_R_MotInf_Team
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_MotInfTeam0;
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Offroad_01_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Soldier_2_F,SERGEANT,5,-5);
					GROUP_UNIT(2,TEast,Theseus_O_R_Soldier_4_F,CORPORAL,-5,-5);
					GROUP_UNIT(3,TEast,Theseus_O_R_Soldier_5_F,CORPORAL,10,-10);
					GROUP_UNIT(4,TEast,Theseus_O_R_Soldier_3_F,CORPORAL,-10,-10);
					GROUP_UNIT(5,TEast,Theseus_O_R_Soldier_1_F,CORPORAL,15,-15);
				};
				class Theseus_O_R_Technicals
				{
					name = $STR_A3_CfgGroups_Indep_Guerilla_Motorized_MTP_IRG_Technicals0;
					side = TEast;
					faction = Theseus_OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,Theseus_O_R_Offroad_01_armed_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TEast,Theseus_O_R_Offroad_01_armed_F,SERGEANT,10,-10);
					GROUP_UNIT(2,TEast,Theseus_O_R_Offroad_01_AT_F,CORPORAL,-10,-10);
				};
			};
		};
	};
};