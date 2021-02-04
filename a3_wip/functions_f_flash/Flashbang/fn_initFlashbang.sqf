// precompilation of functions and deffintion of genneral variables
// Version 0.2
// 2020.11.01
// Called on ArmA 3 startup once

Aegis_fnc_flashbangExploHandler = compile preprocessFileLineNumbers "A3_Wip\Functions_F_Flash\Flashbang\fn_flashbangExploHandler.sqf";
Aegis_fnc_flashbangKillSound = compile preprocessFileLineNumbers "A3_Wip\Functions_F_Flash\Flashbang\fn_flashbangKillSound.sqf";
Aegis_fnc_flashbangPlayerEffect = compile preprocessFileLineNumbers "A3_Wip\Functions_F_Flash\Flashbang\fn_flashbangPlayerEffect.sqf";
Aegis_fnc_flashbangPlayerSound = compile preprocessFileLineNumbers "A3_Wip\Functions_F_Flash\Flashbang\fn_flashbangPlayerSound.sqf";
Aegis_fnc_flashbangPlayerVisual = compile preprocessFileLineNumbers "A3_Wip\Functions_F_Flash\Flashbang\fn_flashbangPlayerVisual.sqf";
Aegis_fnc_flashbangUnitFinder = compile preprocessFileLineNumbers "A3_Wip\Functions_F_Flash\Flashbang\fn_flashbangUnitFinder.sqf";

// TODO: shift those settings to one of the configs for ease of use
Aegis_fnc_soundRangeFull = 50;		// at which range the sound has full effect
Aegis_fnc_soundRangeMax = 100;		// at which range the sound stops to have any effect
Aegis_fnc_soundBlockFactor = 10;	// by how much blocking objects (closed, ie house) reduce the sound
Aegis_fnc_soundBlockFactor2 = 3;	// by how much blocking objects (free, ie rock) reduce the sound
//not implemented: Aegis_fnc_soundTinnitusFactor = 20.0;// tinnitus loudnes factor: higher value = louder
Aegis_fnc_soundTinnitus = "combat_deafness";
Aegis_fnc_soundArray = [];
Aegis_fnc_soundHandle = _thisScript;

Aegis_fnc_visualRangeFull = 50;		// at which range the visual has full effect
Aegis_fnc_visualRangeMax = 100;		// at which range the visual stops to have any effect
Aegis_fnc_visualBlockFactor = 10;	// by how much blocking objects reduce the visual effect
Aegis_fnc_visualReduceFactor = 6;	// by how much turning away reduces the visual effect