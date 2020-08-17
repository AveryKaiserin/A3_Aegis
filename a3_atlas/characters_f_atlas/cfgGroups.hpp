#define GROUP_UNIT(a,b,c,d,e,f) \
	class Unit##a## \
	{ \
		side = ##b##; \
		vehicle = ##c##; \
		rank = ##d##; \
		position[] = {##e##,##f##,0}; \
	};

class CfgGroups
{
	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = TWest;
		class BLU_L_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_O_F0;
		};
		class BLU_E_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_E_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_E_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_E_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,B_E_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,B_E_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_E_medic_F,PRIVATE,20,-20)
				};
				class B_E_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_E_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,B_E_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TWest,B_E_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_E_medic_F,PRIVATE,20,-20)
				};
				class B_E_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_E_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_F,PRIVATE,10,-10)
				};
				class B_E_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_F,PRIVATE,10,-10)
				};
				class B_E_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_F,PRIVATE,5,-5)
				};
			};
			class Infantry_A
			{
				name = "Infantry (Czech Army)";
				class B_E_InfSquad_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_SL_acr_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_RadioOperator_acr_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_LAT_acr_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_M_acr_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_E_soldier_TL_acr_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,B_E_soldier_AR_acr_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,B_E_soldier_A_acr_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_E_medic_acr_F,PRIVATE,20,-20)
				};
				class B_E_InfTeam_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_TL_acr_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_AR_acr_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_GL_acr_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_LAT_acr_F,PRIVATE,10,-10)
				};
				class B_E_InfSentry_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_E_soldier_GL_acr_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_acr_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class B_E_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_E_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_recon_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,B_E_recon_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,B_E_recon_exp_F,PRIVATE,15,-15)
				};
				class B_E_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_E_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_recon_F,PRIVATE,10,-10)
				};
				class B_E_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					GROUP_UNIT(0,TWest,B_E_recon_M_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_E_recon_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_E_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_E_MRAP_03_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_LAT_F,CORPORAL,5,-5)
				};
				class B_E_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_E_MRAP_03_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_AT_F,CORPORAL,-5,-5)
				};
				class B_E_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_E_MRAP_03_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_E_soldier_AA_F,CORPORAL,-5,-5)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class B_E_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_mech_inf.paa";
					GROUP_UNIT(0,TWest,B_E_APC_Wheeled_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_soldier_SL_acr_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,B_E_RadioOperator_acr_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_LAT_acr_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,B_E_soldier_M_acr_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,B_E_soldier_TL_acr_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,B_E_soldier_AR_acr_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,B_E_soldier_A_acr_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,B_E_medic_acr_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class B_E_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_MBT_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_MBT_03_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,B_E_MBT_03_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,B_E_MBT_03_cannon_F,CORPORAL,20,-20)
				};
				class B_E_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_MBT_03_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_MBT_03_cannon_F,SERGEANT,10,-10)
				};
				class B_E_LTankSection_Assault
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_Assault0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_LT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_LT_01_cannon_F,SERGEANT,10,-10)
				};
				class B_E_LTankSection_Recon
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_Recon0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_LT_01_scout_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_LT_01_cannon_F,SERGEANT,10,-10)
				};
				class B_E_LTankSection_AA
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_AA0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_LT_01_AA_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_LT_01_AA_F,SERGEANT,10,-10)
				};
				class B_E_LTankSection_AT
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankSection_AT0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_LT_01_AT_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_LT_01_AT_F,SERGEANT,10,-10)
				};
				class B_E_LTankPlatoon_combined
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankPlatoon_combined0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_LT_01_scout_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_LT_01_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,B_E_LT_01_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,B_E_LT_01_AT_F,CORPORAL,20,-20)
				};
				class I_LTankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_Indep_IND_F_Armored_I_LTankPlatoon_AA0;
					side = TWest;
					faction = BLU_E_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_armor.paa";
					GROUP_UNIT(0,TWest,B_E_LT_01_scout_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TWest,B_E_LT_01_AA_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TWest,B_E_LT_01_AA_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TWest,B_E_LT_01_AA_F,CORPORAL,20,-20)
				};
			};
		};
		class BLU_O_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_O_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_O_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_O_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_O_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_O_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_O_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_O_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_O_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,B_O_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,B_O_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_O_medic_F,PRIVATE,20,-20)
				};
				class B_O_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TWest;
					faction = BLU_O_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_O_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_O_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_O_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_O_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_O_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,B_O_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TWest,B_O_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_O_medic_F,PRIVATE,20,-20)
				};
				class B_O_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_O_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_O_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_O_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_O_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_O_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_O_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TWest;
					faction = BLU_O_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_O_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_O_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_O_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_O_soldier_F,PRIVATE,10,-10)
				};
				class B_O_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TWest;
					faction = BLU_O_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_O_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_O_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_O_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_O_soldier_F,PRIVATE,10,-10)
				};
				class B_O_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_O_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_O_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_O_soldier_F,PRIVATE,5,-5)
				};
			};
		};
		class BLU_H_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_H_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_H_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_H_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_H_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_H_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_H_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_H_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,B_H_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,B_H_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_H_medic_F,PRIVATE,20,-20)
				};
				class B_H_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_H_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_H_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_H_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_H_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_H_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_H_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_H_soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_H_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_H_Offroad_02_LMG_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_H_soldier_LAT_F,PRIVATE,5,-5)
				};
				class B_H_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TWest;
					faction = BLU_H_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,B_H_Truck_02_transport_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_H_soldier_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TWest,B_H_RadioOperator_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TWest,B_H_soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TWest,B_H_soldier_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TWest,B_H_soldier_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TWest,B_H_soldier_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TWest,B_H_soldier_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TWest,B_H_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TWest,B_H_soldier_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TWest,B_H_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TWest,B_H_soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TWest,B_H_soldier_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TWest,B_H_soldier_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TWest,B_H_soldier_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TWest,B_H_soldier_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TWest,B_H_medic_F,PRIVATE,-5,-14)
				};
			};
		};
	};
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = TEast;
		class OPF_W_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_W_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_W_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_W_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_W_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,O_W_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,O_W_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,O_W_medic_F,PRIVATE,20,-20)
				};
				class O_W_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_W_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_W_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_W_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,O_W_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,O_W_medic_F,PRIVATE,20,-20)
				};
				class O_W_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_W_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_LAT_F,PRIVATE,10,-10)
				};
				class O_W_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_W_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_F,PRIVATE,10,-10)
				};
				class O_W_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_W_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_F,PRIVATE,10,-10)
				};
				class O_W_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_W_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class O_W_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_W_MRAP_02_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_LAT_F,PRIVATE,-5,-5)
				};
				class O_W_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_W_MRAP_02_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_AT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_F,PRIVATE,0,-10)
				};
				class O_W_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_W_MRAP_02_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_AA_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_F,PRIVATE,0,-10)
				};
				class O_W_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_W_Truck_02_transport_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TEast,O_W_RadioOperator_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TEast,O_W_soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TEast,O_W_soldier_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TEast,O_W_soldier_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TEast,O_W_soldier_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TEast,O_W_soldier_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TEast,O_W_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TEast,O_W_soldier_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TEast,O_W_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TEast,O_W_soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TEast,O_W_soldier_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TEast,O_W_soldier_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TEast,O_W_soldier_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TEast,O_W_soldier_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TEast,O_W_medic_F,PRIVATE,-5,-14)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_W_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_W_APC_Wheeled_02_rcws_v2_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_W_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,O_W_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_W_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,O_W_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,O_W_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,O_W_medic_F,PRIVATE,-20,-20)
				};
				class O_W_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_W_APC_Tracked_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_AT_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_W_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_W_soldier_AT_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,O_W_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,O_W_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,O_W_soldier_F,PRIVATE,-20,-20)
				};
				class O_W_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_W_APC_Tracked_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_W_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_W_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_W_soldier_AA_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_W_soldier_AA_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_W_soldier_AA_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,O_W_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,O_W_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,O_W_soldier_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_W_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_W_MBT_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_W_MBT_02_cannon_ghex_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,O_W_MBT_02_cannon_ghex_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TEast,O_W_MBT_02_cannon_ghex_F,CORPORAL,20,-20)
				};
				class O_W_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = OPF_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_W_MBT_02_cannon_ghex_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_W_MBT_02_cannon_ghex_F,SERGEANT,10,-10)
				};
			};
		};
		class OPF_C_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_C_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class O_C_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_C_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_C_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,O_C_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,O_C_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,O_C_medic_F,PRIVATE,20,-20)
				};
				class O_C_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_C_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_C_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_C_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TEast,O_C_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,O_C_medic_F,PRIVATE,20,-20)
				};
				class O_C_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_C_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_LAT_F,PRIVATE,10,-10)
				};
				class O_C_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_C_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_F,PRIVATE,10,-10)
				};
				class O_C_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_C_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_F,PRIVATE,10,-10)
				};
				class O_C_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_C_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_F,PRIVATE,5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class O_C_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_C_MRAP_02_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_LAT_F,PRIVATE,-5,-5)
				};
				class O_C_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_C_MRAP_02_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_AT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_F,PRIVATE,0,-10)
				};
				class O_C_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_C_MRAP_02_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_AA_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_F,PRIVATE,0,-10)
				};
				class O_C_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_motor_inf.paa";
					GROUP_UNIT(0,TEast,O_C_Truck_02_transport_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TEast,O_C_RadioOperator_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TEast,O_C_soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TEast,O_C_soldier_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TEast,O_C_soldier_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TEast,O_C_soldier_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TEast,O_C_soldier_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TEast,O_C_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TEast,O_C_soldier_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TEast,O_C_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TEast,O_C_soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TEast,O_C_soldier_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TEast,O_C_soldier_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TEast,O_C_soldier_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TEast,O_C_soldier_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TEast,O_C_medic_F,PRIVATE,-5,-14)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class O_C_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_C_APC_Wheeled_02_rcws_v2_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_C_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TEast,O_C_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_C_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,O_C_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,O_C_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,O_C_medic_F,PRIVATE,-20,-20)
				};
				class O_C_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_C_APC_Tracked_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_AT_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_C_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_C_soldier_AT_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,O_C_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,O_C_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,O_C_soldier_F,PRIVATE,-20,-20)
				};
				class O_C_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_mech_inf.paa";
					GROUP_UNIT(0,TEast,O_C_APC_Tracked_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_C_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TEast,O_C_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_C_soldier_AA_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_C_soldier_AA_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TEast,O_C_soldier_AA_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TEast,O_C_soldier_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TEast,O_C_soldier_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TEast,O_C_soldier_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class O_C_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_C_MBT_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_C_MBT_02_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TEast,O_C_MBT_02_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TEast,O_C_MBT_02_cannon_F,CORPORAL,20,-20)
				};
				class O_C_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TEast;
					faction = OPF_C_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_armor.paa";
					GROUP_UNIT(0,TEast,O_C_MBT_02_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TEast,O_C_MBT_02_cannon_F,SERGEANT,10,-10)
				};
			};
		};
		class OPF_S_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_S_F0;
		};
	};
	class Indep
	{
		name = $STR_A3_CfgGroups_Indep0;
		side = TGuerrila;
		class IND_W_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_W_F0;
		};
		class IND_I_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_I_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class I_I_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,I_I_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_I_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TGuerrila,I_I_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_I_medic_F,PRIVATE,20,-20)
				};
				class I_I_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AR_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_GL_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,I_I_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_I_soldier_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TGuerrila,I_I_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_I_medic_F,PRIVATE,20,-20)
				};
				class I_I_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_LAT_F,PRIVATE,10,-10)
				};
				class I_I_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_AT_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_F,PRIVATE,10,-10)
				};
				class I_I_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_AA_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_F,PRIVATE,10,-10)
				};
				class I_I_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_F,PRIVATE,5,-5)
				};
			};
			class SpecOps
			{
				name = $STR_A3_CfgGroups_West_BLU_F_SpecOps0;
				class I_I_ReconTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_I_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_recon_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,I_I_recon_JTAC_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_I_recon_exp_F,PRIVATE,15,-15)
				};
				class I_I_ReconPatrol
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_I_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_recon_M_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_recon_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_recon_F,PRIVATE,10,-10)
				};
				class I_I_ReconSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_I_recon_M_F,CORPORAL,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_recon_F,PRIVATE,5,-5)
				};
				class I_I_SniperTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_SniperTeam0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_recon.paa";
					GROUP_UNIT(0,TGuerrila,I_I_sniper_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_spotter_F,CORPORAL,5,-5)
				};
			};
			class Support
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Support0;
				class I_I_Support_CLS
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_CLS0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_medic_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_medic_F,PRIVATE,10,-10)
				};
				class I_I_Support_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_EOD0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_engineer_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_exp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_exp_F,PRIVATE,10,-10)
				};
				class I_I_Support_ENG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_ENG0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_engineer_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_engineer_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_repair_F,PRIVATE,10,-10)
				};
				class I_I_Recon_EOD
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Recon_EOD0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_recon_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_recon_exp_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_recon_exp_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_recon_F,PRIVATE,10,-10)
				};
				class I_I_Support_MG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_MG0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_support_MG_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_support_AMG_F,PRIVATE,-5,-5)
				};
				class I_I_Support_GMG
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_GMG0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_support_GMG_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_support_AMG_F,PRIVATE,-5,-5)
				};
				class I_I_Support_Mort
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Support_BUS_Support_Mort0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mortar.paa";
					GROUP_UNIT(0,TGuerrila,I_I_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_support_Mort_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_support_AMort_F,PRIVATE,-5,-5)
				};
			};
			class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class I_I_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MRAP_01_gmg_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_LAT_F,PRIVATE,-5,-5)
				};
				class I_I_MotInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AT_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_AT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_AAT_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_AA_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_AA_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_AAA_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_MGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MGTeam0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_TL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_support_MG_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_support_AMG_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_GMGTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_GMGTeam0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_TL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_support_GMG_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_support_AMG_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_MortTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_MortTeam0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MRAP_01_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_TL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_support_Mort_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_support_AMort_F,PRIVATE,0,-10)
				};
				class I_I_MotInf_Reinforcements
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Reinforce0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_motor_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_Truck_01_transport_F,SERGEANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_SL_F,SERGEANT,5,0)
					GROUP_UNIT(2,TGuerrila,I_I_RadioOperator_F,PRIVATE,5,-2)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_LAT_F,CORPORAL,5,-4)
					GROUP_UNIT(4,TGuerrila,I_I_soldier_M_F,PRIVATE,5,-6)
					GROUP_UNIT(5,TGuerrila,I_I_soldier_TL_F,SERGEANT,5,-8)
					GROUP_UNIT(6,TGuerrila,I_I_soldier_AR_F,CORPORAL,5,-10)
					GROUP_UNIT(7,TGuerrila,I_I_soldier_A_F,PRIVATE,5,-12)
					GROUP_UNIT(8,TGuerrila,I_I_medic_F,PRIVATE,5,-14)
					GROUP_UNIT(9,TGuerrila,I_I_soldier_SL_F,SERGEANT,-5,0)
					GROUP_UNIT(10,TGuerrila,I_I_RadioOperator_F,PRIVATE,-5,-2)
					GROUP_UNIT(11,TGuerrila,I_I_soldier_LAT_F,CORPORAL,-5,-4)
					GROUP_UNIT(12,TGuerrila,I_I_soldier_M_F,PRIVATE,-5,-6)
					GROUP_UNIT(13,TGuerrila,I_I_soldier_TL_F,SERGEANT,-5,-8)
					GROUP_UNIT(14,TGuerrila,I_I_soldier_AR_F,CORPORAL,-5,-10)
					GROUP_UNIT(15,TGuerrila,I_I_soldier_A_F,PRIVATE,-5,-12)
					GROUP_UNIT(16,TGuerrila,I_I_medic_F,PRIVATE,-5,-14)
				};
			};
			class Mechanized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Mechanized0;
				class I_I_MechInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInfSquad0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,I_I_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_I_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TGuerrila,I_I_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_I_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,I_I_medic_F,PRIVATE,-20,-20)
				};
				class I_I_MechInf_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AT0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_AT_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,I_I_soldier_AT_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_I_soldier_AT_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TGuerrila,I_I_soldier_AAT_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_I_soldier_AAT_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,I_I_soldier_AAT_F,PRIVATE,-20,-20)
				};
				class I_I_MechInf_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_AA0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_AR_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_AA_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TGuerrila,I_I_soldier_AA_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_I_soldier_AA_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TGuerrila,I_I_soldier_AAA_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_I_soldier_AAA_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,I_I_soldier_AAA_F,PRIVATE,-20,-20)
				};
				class I_I_MechInf_Support
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Mechanized_BUS_MechInf_Support0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_mech_inf.paa";
					GROUP_UNIT(0,TGuerrila,I_I_APC_Tracked_01_rcws_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TGuerrila,I_I_soldier_TL_F,SERGEANT,-5,-5)
					GROUP_UNIT(3,TGuerrila,I_I_soldier_repair_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TGuerrila,I_I_engineer_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TGuerrila,I_I_medic_F,PRIVATE,15,-15)
					GROUP_UNIT(6,TGuerrila,I_I_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TGuerrila,I_I_soldier_exp_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TGuerrila,I_I_soldier_A_F,PRIVATE,-20,-20)
				};
			};
			class Armored
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Armored0;
				class I_I_TankPlatoon
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MBT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_MBT_01_cannon_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,I_I_MBT_01_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TGuerrila,I_I_MBT_01_cannon_F,CORPORAL,20,-20)
				};
				class I_I_TankPlatoon_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankPlatoon_AA0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MBT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_APC_Tracked_01_aa_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,I_I_MBT_01_cannon_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TGuerrila,I_I_APC_Tracked_01_aa_F,CORPORAL,20,-20)
				};
				class I_I_TankSection
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_TankSection0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_armor.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MBT_01_cannon_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_MBT_01_cannon_F,SERGEANT,10,-10)
				};
				class I_I_SPGPlatoon_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGPlatoon_Scorcher0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MBT_01_arty_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_MBT_01_arty_F,SERGEANT,10,-10)
					GROUP_UNIT(2,TGuerrila,I_I_MBT_01_arty_F,SERGEANT,-10,-10)
					GROUP_UNIT(3,TGuerrila,I_I_MBT_01_arty_F,CORPORAL,20,-20)
				};
				class I_I_SPGSection_Scorcher
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Armored_BUS_SPGSection_Scorcher0;
					side = TGuerrila;
					faction = IND_I_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\n_art.paa";
					GROUP_UNIT(0,TGuerrila,I_I_MBT_01_arty_F,LIEUTENANT,0,0)
					GROUP_UNIT(1,TGuerrila,I_I_MBT_01_arty_F,SERGEANT,10,-10)
				};
			};
		};
		class IND_UNO_F
		{
			name = $STR_A3_A_CfgFactionClasses_IND_UNO_F0;
		};
	};
};