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
		class Theseus_BLU_N_F
		{
			name = $STR_A3_T_CfgFactionClasses_BLU_N_F0;
			class Infantry
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Infantry0;
				class B_N_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_soldier_SL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Theseus_B_N_RadioOperator_F,PRIVATE,5,-5)
					GROUP_UNIT(2,TWest,Theseus_B_N_soldier_LAT_F,CORPORAL,-5,-5)
					GROUP_UNIT(3,TWest,Theseus_B_N_soldier_M_F,PRIVATE,10,-10)
					GROUP_UNIT(4,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,-10,-10)
					GROUP_UNIT(5,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,15,-15)
					GROUP_UNIT(6,TWest,Theseus_B_N_soldier_A_F,PRIVATE,-15,-15)
					GROUP_UNIT(7,TWest,Theseus_B_N_medic_F,PRIVATE,20,-20)
				};
				class B_N_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_soldier_TL_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_AR_F,CORPORAL,5,-5)
					GROUP_UNIT(2,TWest,Theseus_B_N_soldier_GL_F,PRIVATE,-5,-5)
					GROUP_UNIT(3,TWest,Theseus_B_N_soldier_LAT_F,PRIVATE,10,-10)
				};
				class B_N_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_soldier_GL_F,CORPORAL,0,0)
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_F,PRIVATE,5,-5)
				};
			};
			/*class Motorized
			{
				name = $STR_A3_CfgGroups_West_BLU_F_Motorized0;
				class B_N_MotInf_Team
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0;
					side = TWest;
					faction = Atlas_BLU_L_F;
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_motor_inf.paa";
					GROUP_UNIT(0,TWest,Theseus_B_N_LSV_01_armed_F,SERGEANT,0,0)
					GROUP_UNIT(1,TWest,Theseus_B_N_soldier_LAT_F,PRIVATE,5,-5)
				};
			};*/
		};
		
	};
};