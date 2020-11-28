class CfgGroups
{
    /* Definitions */
    #include "\A3_Aegis\macros_groups.hpp"

	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = TWest;
		class BLU_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class BUS_InfSquad
				{
					class Unit1
					{
						vehicle = B_Soldier_MG_F;
					};
					class Unit3
					{
						vehicle = B_Soldier_GL_F;
					};
					class Unit5
					{
						vehicle = B_Soldier_MG_F;
					};
					class Unit6
					{
						vehicle = B_Soldier_GL_F;
					};
				};
				class BUS_InfSquad_Weapons
				{
					class Unit1
					{
						vehicle = B_HeavyGunner_F;
						rank = PRIVATE;
					};
					class Unit2
					{
						vehicle = B_HeavyGunner_F;
						rank = PRIVATE;
					};
					class Unit3
					{
						vehicle = B_soldier_AAR_F;
						rank = CORPORAL;
					};
					class Unit4
					{
						vehicle = B_Soldier_TL_F;
						rank = SERGEANT;
					};
					class Unit5
					{
						vehicle = B_soldier_AT_F;
						rank = PRIVATE;
					};
					class Unit6
					{
						vehicle = B_soldier_AT_F;
						rank = PRIVATE;
					};
					class Unit7
					{
						vehicle = B_Soldier_AAT_F;
						rank = CORPORAL;
					};
				};
				class BUS_InfTeam
				{
					class Unit1
					{
						vehicle = B_Soldier_MG_F;
					};
				};
				class BUS_hqelement
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_HqElement0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_hq.paa";
					GROUP_UNIT(0,TWest,B_officer_combat_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_RadioOperator_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_soldier_UAV_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_Soldier_GL_F,PRIVATE,10,-10);
				};
			};
		};
	};
};