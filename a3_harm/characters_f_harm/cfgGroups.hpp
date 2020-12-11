class CfgGroups
{
    /* Definitions */
    #include "\A3_Aegis\macros_groups.hpp"

	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = TWest;
		delete BLU_T_F;
		delete Marine_BLU_USMC_F;
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
			class HARM_Infantry_Marines
			{
				name = $STR_A3_CfgGroups_West_BLU_F_HARMMarines0;
				class BUS_MarineDInfSquad
				{
					// thats a thicc squad
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_Soldier_MarineD_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_Soldier_MarineD_TL_F,CORPORAL,-5,0);
					GROUP_UNIT(2,TWest,B_soldier_MarineD_UAV_F,PRIVATE,-10,0);
					GROUP_UNIT(3,TWest,B_Soldier_MarineD_TL_F,CORPORAL,0,-10);
					GROUP_UNIT(4,TWest,B_soldier_MarineD_AR_F,PRIVATE,-5,-10);
					GROUP_UNIT(5,TWest,B_Soldier_MarineD_GL_F,PRIVATE,-10,-10);
					GROUP_UNIT(6,TWest,B_soldier_MarineD_M_F,PRIVATE,-15,-10);
					GROUP_UNIT(7,TWest,B_Soldier_MarineD_TL_F,CORPORAL,0,-15);
					GROUP_UNIT(8,TWest,B_soldier_MarineD_AR_F,PRIVATE,-5,-15);
					GROUP_UNIT(9,TWest,B_Soldier_MarineD_GL_F,PRIVATE,-10,-15);
					GROUP_UNIT(10,TWest,B_soldier_MarineD_LAT_F,PRIVATE,-15,-15);
					GROUP_UNIT(11,TWest,B_Soldier_MarineD_TL_F,CORPORAL,0,-20);
					GROUP_UNIT(12,TWest,B_soldier_MarineD_AR_F,PRIVATE,-5,-20);
					GROUP_UNIT(13,TWest,B_Soldier_MarineD_GL_F,PRIVATE,-10,-20);
					GROUP_UNIT(14,TWest,B_Soldier_MarineD_F,PRIVATE,-15,-20);
				};
				class BUS_MarineDInfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_Soldier_MarineD_TL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_soldier_MarineD_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_Soldier_MarineD_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_soldier_MarineD_LAT_F,PRIVATE,10,-10);
				};
				class BUS_MarineDInfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_Soldier_MarineD_TL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_soldier_MarineD_AR_F,PRIVATE,5,-5);
				};
			};
		};
		class BLU_W_F
		{
			name = $STR_A3_A_CfgFactionClasses_BLU_W_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_W_InfSquad
				{
					class Unit1
					{
						vehicle = B_W_Soldier_MG_F;
					};
					class Unit3
					{
						vehicle = B_W_Soldier_GL_F;
					};
					class Unit5
					{
						vehicle = B_W_Soldier_MG_F;
					};
					class Unit6
					{
						vehicle = B_W_Soldier_GL_F;
					};
				};
				class B_W_InfTeam_Light
				{
					name = $STR_A3_CfgGroups_FireTeamLight;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_W_soldier_TL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_W_soldier_AR_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_soldier_LAT2_F,PRIVATE,10,-10);
				};
				class B_W_InfTeam
				{
					class Unit1
					{
						vehicle = B_W_Soldier_MG_F;
					};
				};
				class B_W_InfSquad_Weapons
				{
					class Unit1
					{
						vehicle = B_W_HeavyGunner_F;
						rank = PRIVATE;
					};
					class Unit2
					{
						vehicle = B_W_HeavyGunner_F;
						rank = PRIVATE;
					};
					class Unit3
					{
						vehicle = B_W_soldier_AAR_F;
						rank = CORPORAL;
					};
					class Unit4
					{
						vehicle = B_W_Soldier_TL_F;
						rank = SERGEANT;
					};
					class Unit5
					{
						vehicle = B_W_soldier_AT_F;
						rank = PRIVATE;
					};
					class Unit6
					{
						vehicle = B_W_soldier_AT_F;
						rank = PRIVATE;
					};
					class Unit7
					{
						vehicle = B_W_Soldier_AAT_F;
						rank = CORPORAL;
					};
				};
				class B_W_hqelement
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_HqElement0;
					side = TWest;
					faction = BLU_W_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_hq.paa";
					GROUP_UNIT(0,TWest,B_W_officer_combat_F,LIEUTENANT,0,0);
					GROUP_UNIT(1,TWest,B_W_RadioOperator_F,CORPORAL,5,-5);
					GROUP_UNIT(2,TWest,B_W_soldier_UAV_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_W_Soldier_GL_F,PRIVATE,10,-10);
				};
			};
			class HARM_Infantry_Marines
			{
				name = $STR_A3_CfgGroups_West_BLU_F_HARMMarines0;
				class BUS_MarineWInfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_Soldier_MarineW_SL_F,SERGEANT,0,0);
					GROUP_UNIT(1,TWest,B_Soldier_MarineW_TL_F,CORPORAL,-5,0);
					GROUP_UNIT(2,TWest,B_soldier_MarineW_UAV_F,PRIVATE,-10,0);
					GROUP_UNIT(3,TWest,B_Soldier_MarineW_TL_F,CORPORAL,0,-10);
					GROUP_UNIT(4,TWest,B_soldier_MarineW_AR_F,PRIVATE,-5,-10);
					GROUP_UNIT(5,TWest,B_Soldier_MarineW_GL_F,PRIVATE,-10,-10);
					GROUP_UNIT(6,TWest,B_soldier_MarineW_M_F,PRIVATE,-15,-10);
					GROUP_UNIT(7,TWest,B_Soldier_MarineW_TL_F,CORPORAL,0,-15);
					GROUP_UNIT(8,TWest,B_soldier_MarineW_AR_F,PRIVATE,-5,-15);
					GROUP_UNIT(9,TWest,B_Soldier_MarineW_GL_F,PRIVATE,-10,-15);
					GROUP_UNIT(10,TWest,B_soldier_MarineW_LAT_F,PRIVATE,-15,-15);
					GROUP_UNIT(11,TWest,B_Soldier_MarineW_TL_F,CORPORAL,0,-20);
					GROUP_UNIT(12,TWest,B_soldier_MarineW_AR_F,PRIVATE,-5,-20);
					GROUP_UNIT(13,TWest,B_Soldier_MarineW_GL_F,PRIVATE,-10,-20);
					GROUP_UNIT(14,TWest,B_Soldier_MarineW_F,PRIVATE,-15,-20);
				};
				class BUS_MarineWInfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_Soldier_MarineW_TL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_soldier_MarineW_AR_F,PRIVATE,5,-5);
					GROUP_UNIT(2,TWest,B_Soldier_MarineW_GL_F,PRIVATE,-5,-5);
					GROUP_UNIT(3,TWest,B_soldier_MarineW_LAT_F,PRIVATE,10,-10);
				};
				class BUS_MarineWInfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = BLU_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,B_Soldier_MarineW_TL_F,CORPORAL,0,0);
					GROUP_UNIT(1,TWest,B_soldier_MarineW_AR_F,PRIVATE,5,-5);
				};
			};
		};
	};
};