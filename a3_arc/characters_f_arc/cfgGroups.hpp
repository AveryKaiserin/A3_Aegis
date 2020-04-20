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
		class BLU_A_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_BLU_A_F0;
			class Infantry_A
			{
				name = $STR_A3_A_CfgGroups_West_BLU_A_F_Infantry_A0;
				class B_A_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_SL_arc_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_A_RadioOperator_arc_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_A_soldier_LAT_arc_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_A_soldier_M_arc_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_A_soldier_TL_arc_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,B_A_soldier_AR_arc_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,B_A_soldier_A_arc_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_A_medic_arc_F,PRIVATE,20,-20)
				};
				class B_A_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_TL_arc_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_A_soldier_AR_arc_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_A_soldier_GL_arc_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_A_soldier_LAT_arc_F,PRIVATE,10,-10)
				};
				class B_A_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_A_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_A_soldier_GL_arc_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_A_soldier_arc_F,PRIVATE,5,-5)
				};
			};
		};
		class BLU_WA_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_BLU_WA_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_WA_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_WA_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_WA_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_WA_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,B_WA_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,B_WA_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,B_WA_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,B_WA_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,B_WA_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,B_WA_medic_F,PRIVATE,20,-20)
				};
				class B_WA_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_WA_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_WA_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,B_WA_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,B_WA_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,B_WA_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_WA_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_WA_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_WA_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,B_WA_soldier_F,PRIVATE,5,-5)
				};
			};
		};
    };
	class East
	{
		name = $STR_A3_CfgGroups_East0;
		side = TEast;
		class OPF_R_F
		{
		  	name = $STR_A3_A_CfgFactionClasses_OPF_R_F0;
			class Infantry_A
			{
				name = $STR_A3_A_CfgGroups_West_BLU_A_F_Infantry_A0;
				class O_R_InfSquad_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_SL_arc_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_R_RadioOperator_arc_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TEast,O_R_soldier_LAT_arc_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TEast,O_R_soldier_M_arc_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TEast,O_R_soldier_TL_arc_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TEast,O_R_soldier_AR_arc_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TEast,O_R_soldier_A_arc_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TEast,O_R_medic_arc_F,PRIVATE,20,-20)
				};
				class O_R_InfTeam_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_TL_arc_F,SERGEANT,0,0)
					GROUP_UNIT(1,TEast,O_R_soldier_AR_arc_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TEast,O_R_soldier_GL_arc_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TEast,O_R_soldier_LAT_arc_F,PRIVATE,10,-10)
				};
				class O_R_InfSentry_A
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TEast;
					faction = OPF_R_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\o_inf.paa";
					GROUP_UNIT(0,TEast,O_R_soldier_GL_arc_F,CORPORAL,0,0)
					GROUP_UNIT(1,TEast,O_R_soldier_arc_F,PRIVATE,5,-5)
				};
			};
        };
    };
};