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
		class Marine_BLU_USMC_F
		{
			name = $STR_A3_M_CfgFactionClasses_Marine_BLU_USMC_F0;
			class Infantry
			{
				name = $STR_A3_M_CfgGroups_West_Marine_BLU_USMC_F_Infantry0;
				class B_USMC_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Marine_BLU_USMC_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Marine_B_USMC_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Marine_B_USMC_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Marine_B_USMC_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Marine_B_USMC_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Marine_B_USMC_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Marine_B_USMC_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Marine_B_USMC_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Marine_B_USMC_medic_F,PRIVATE,20,-20)
				};
				class B_USMC_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Marine_BLU_USMC_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Marine_B_USMC_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Marine_B_USMC_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Marine_B_USMC_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Marine_B_USMC_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_USMC_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Marine_BLU_USMC_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Marine_B_USMC_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Marine_B_USMC_soldier_F,PRIVATE,5,-5)
				};
			};
			class Infantry_W
			{
				name = $STR_A3_M_CfgGroups_West_Marine_BLU_USMC_F_Infantry_W0;
				class B_USMC_InfSquad_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Marine_BLU_USMC_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Marine_B_USMC_soldier_SL_wdl_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Marine_B_USMC_RadioOperator_wdl_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Marine_B_USMC_soldier_LAT_wdl_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Marine_B_USMC_soldier_M_wdl_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Marine_B_USMC_soldier_TL_wdl_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Marine_B_USMC_soldier_AR_wdl_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Marine_B_USMC_soldier_A_wdl_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Marine_B_USMC_medic_wdl_F,PRIVATE,20,-20)
				};
				class B_USMC_InfTeam_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Marine_BLU_USMC_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Marine_B_USMC_soldier_TL_wdl_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Marine_B_USMC_soldier_AR_wdl_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Marine_B_USMC_soldier_GL_wdl_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Marine_B_USMC_soldier_LAT_wdl_F,PRIVATE,10,-10)
				};
				class B_USMC_InfSentry_W
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Marine_BLU_USMC_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Marine_B_USMC_soldier_GL_wdl_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Marine_B_USMC_soldier_wdl_F,PRIVATE,5,-5)
				};
			};
		};
	};
};