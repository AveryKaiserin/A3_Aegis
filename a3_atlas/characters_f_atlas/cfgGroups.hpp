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
		class BLU_HIDF_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_HIDF_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_HIDF_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_HIDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_HIDF_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_HIDF_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_HIDF_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_HIDF_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_HIDF_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,B_HIDF_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,B_HIDF_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_HIDF_medic_F,PRIVATE,20,-20)
				};
				class B_HIDF_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_HIDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_HIDF_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_HIDF_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_HIDF_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_HIDF_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_HIDF_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_HIDF_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_HIDF_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_HIDF_soldier_F,PRIVATE,5,-5)
				};
			};
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
					GROUP_UNIT(1,TWest,B_E_soldier_SL_F,SERGEANT,5,-5)
					GROUP_UNIT(2,TWest,B_E_RadioOperator_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_E_soldier_LAT_F,CORPORAL,10,-10)
					GROUP_UNIT(4,TWest,B_E_soldier_M_F,PRIVATE,-10,-10)
					GROUP_UNIT(5,TWest,B_E_soldier_TL_F,SERGEANT,15,-15)
					GROUP_UNIT(6,TWest,B_E_soldier_AR_F,CORPORAL,-15,-15)
					GROUP_UNIT(7,TWest,B_E_soldier_A_F,PRIVATE,20,-20)
					GROUP_UNIT(8,TWest,B_E_medic_F,PRIVATE,-20,-20)
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
		/*
		class BLU_ANZAC_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_ANZAC_F0;
		};
		*/
	};
	/*
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = TEast;
		class OPF_E_F
		{
			name = $STR_A3_A_CfgFactionClasses_OPF_E_F0;
		};
	};
	*/
	class Indep
	{
		name = $STR_A3_CfgGroups_Indep0;
		side = TGuerrila;
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
		};
	};
};