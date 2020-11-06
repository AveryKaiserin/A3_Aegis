//building macros
#define RUINEFFECT(x)                                    \
class DestructionEffects: DestructionEffects             \
{                                                        \
   class Ruin1                                           \
   {                                                     \
      simulation = ruin;                                 \
      type=\lxWS\Structures_f\##x##_ruins_EP1_lxWS;      \
      position="";                                       \
      intensity = 1;                                     \
      interval = 1;                                      \
      lifeTime = 1;                                      \
   };                                                    \
};
      
//door animsource

#define DOOR_ANIMSOURCE(DOORNUM)             \
class door_##DOORNUM##_sound_source          \
{                                            \
	source = "user";                          \
	animPeriod = 1;                           \
	initPhase = 0;                            \
	sound = "OldWoodDoorsSound";              \
	soundPosition = door_##DOORNUM##_trigger; \
};                                           \
class Door_##DOORNUM##_noSound_source        \
{                                            \
   source = "user";                          \
   initPhase = 0;                            \
   animPeriod = 1;                           \
};                                           \
class Door_##DOORNUM##_locked_source         \
{                                            \
   source = "user";                          \
   initPhase = 0;                            \
   animPeriod = 0.8;                         \
};

//glass animsource
#define GLASS_ANIMSOURCE(GLASSNUM) \
class glass_##GLASSNUM##_source \
{\
	source = "Hit";\
	hitpoint = glass_##GLASSNUM##_hitpoint;\
	raw = 1;\
};

#define HITPOINTS_HIT(x,y) class Hit##x               \
{                                                     \
   armor=y;                                           \
   material=-1;                                       \
   name=dam##x;                                       \
   visual=damT##x;                                    \
   passThrough=0;                                     \
   convexComponent=dam##x;                            \
   class DestructionEffects                           \
   {                                                  \
      class Dust {simulation = "particles"; type = "HousePartDust"; position = "";intensity = 1;interval = 1; lifeTime = 0.01;};\
      class Dust2:Dust {type = "HousePartDustLong";}; \
      class Walls:Dust {type = "HousePartWall";};     \
   };                                                 \
};

//glass hitpoint
#define GLASS_HITPOINT(GLASSNUM) \
class glass_##GLASSNUM##_hitpoint \
{ \
	armor = 0.001; \
	material = -1; \
	name = glass_##GLASSNUM; \
	visual = glass_##GLASSNUM; \
	passThrough = 0; \
	radius = 0.4; \
	convexComponent = glass_##GLASSNUM; \
	class DestructionEffects \
	{ \
		class BrokenGlass1 \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass1N_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass2 \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass2N_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass3 \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass3N_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass4 \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass4N_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass5 \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass5N_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass6 \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass6N_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass7 \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass7N_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass1S \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass1S_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass2S \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass2S_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass3S \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass3S_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass4S \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass4S_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass5S \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass5S_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass6S \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass6S_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
		class BrokenGlass7S \
		{ \
			simulation = "particles"; \
			type = "BrokenGlass7S_0900_1300"; \
			position = glass_##GLASSNUM##_effects; \
			intensity = 0.15; \
			interval = 1; \
			lifeTime = 0.05; \
		}; \
	}; \
};

//house lightbulb
#define LIGHTPOINT(LIGHTNUM) \
class light_##LIGHTNUM \
{ \
	color[] = {1000, 500, 300}; \
	ambient[] = {10, 5, 3}; \
	intensity = 7; \
	size = 1; \
	innerAngle = 90; \
	outerAngle = 150; \
	coneFadeCoef = 2; \
	position = light_##LIGHTNUM##_pos; \
	direction = light_##LIGHTNUM##_dir; \
	hitpoint = light_##LIGHTNUM##_pos; \
	selection = ""; \
	useFlare = 1; \
	flareSize = 2; \
	flareMaxDistance = 220; \
	class Attenuation \
	{ \
		start = 0; \
		constant = 0; \
		linear = 0; \
		quadratic = 0.3; \
		hardLimitStart = 30; \
		hardLimitEnd = 60; \
	}; \
};

//door useractions, could be inside an hpp file too perhaps
#define DOOR_USERACTION_1 \
class OpenDoor_1 \
{ \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
	displayName = $STR_DN_OUT_O_DOOR; \
	position = door_1_trigger; \
	priority = 11; \
	radius = 1.75; \
	aiMaxRange = 5.25; \
	onlyForPlayer = 0; \
	condition = "((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')"; \
	statement = "([this, 1, 1] call BIS_fnc_Door)"; \
}; \
class CloseDoor_1: OpenDoor_1 \
{ \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
	displayName = $STR_DN_OUT_C_DOOR; \
	priority = 11; \
   condition = "((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')"; \
	statement = "([this, 1, 0] call BIS_fnc_Door)"; \
};

#define DOOR_USERACTION_2 \
class OpenDoor_2 \
{ \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
	displayName = $STR_DN_OUT_O_DOOR; \
	position = door_2_trigger; \
	priority = 11; \
	radius = 1.75; \
	aiMaxRange = 5.25; \
	onlyForPlayer = 0; \
	condition = "((this animationSourcePhase 'door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')"; \
	statement = "([this, 2, 1] call BIS_fnc_Door)"; \
}; \
class CloseDoor_2: OpenDoor_2 \
{ \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
	displayName = $STR_DN_OUT_C_DOOR; \
	priority = 11; \
   condition = "((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')"; \
	statement = "([this, 2, 0] call BIS_fnc_Door)"; \
};

#define DOOR_USERACTION_3 \
class OpenDoor_3 \
{ \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
	displayName = $STR_DN_OUT_O_DOOR; \
	position = door_3_trigger; \
	priority = 11; \
	radius = 1.75; \
	aiMaxRange = 5.25; \
	onlyForPlayer = 0; \
	condition = "((this animationSourcePhase 'door_3_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')"; \
	statement = "([this, 3, 1] call BIS_fnc_Door)"; \
}; \
class CloseDoor_3: OpenDoor_3 \
{ \
	displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; \
	displayName = $STR_DN_OUT_C_DOOR; \
	priority = 11; \
   condition = "((this animationSourcePhase 'Door_3_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')"; \
	statement = "([this, 3, 0] call BIS_fnc_Door)"; \
};
