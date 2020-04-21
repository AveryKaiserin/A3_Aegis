_OK_F_35C = _this select 0;
_weaponAmraam = "OK_F_35C_AIM120D_int_W";
_weaponGbu = "OK_F_35C_GBU32_int_W";
_weaponSdb = "OK_F_35C_GBU53_int_W";

if(isNil "loadout") then { loadout="jsf"; };
if(isNil "gun") then { gun="n"; };
_loadout_l = toLower(loadout);
_gun_l = toLower(gun);
switch (_gun_l) do {
	case "y" : {
		_OK_F_35C animate["station_06_gun", 0];
		_OK_F_35C addWeapon "OK_F_35C_CANNON_W";
		if (getPosATL _OK_F_35C select 2 > 10) // if the object is over 10 meters above terrain when it spawns, assume it is flying, meaning gears are up so give the cannon ammo
		then {
		_OK_F_35C addMagazine "OK_F_35C_CANNON_M";
		};
	};
	case "n" : {
		_OK_F_35C animate["station_06_gun", 1];
	};
};
if(OK_foldWings) then {
		_OK_F_35C animate ["wingtipR",1];
		_OK_F_35C animate ["wingtipR_2",1];
		_OK_F_35C animate ["wingtipR_1",1];
		_OK_F_35C animate ["wingtipR_lip",1];
		_OK_F_35C animate ["wingtipL",1];
		_OK_F_35C animate ["wingtipL_2",1];
		_OK_F_35C animate ["wingtipL_1",1];
		_OK_F_35C animate ["wingtipL_lip",1];
};
_OK_F_35C animate["ext_stations", 1];
_OK_F_35C animate["ext_station_R", 1];
_OK_F_35C animate["ext_station_L", 1];
switch (_loadout_l) do {
	case "jsf": {
		_OK_F_35C animate["station_01_aim9x", 1];
		_OK_F_35C animate["station_02_aim120d", 1];
		_OK_F_35C animate["station_03_gbu32", 1];
		_OK_F_35C animate["station_04_gbu53", 1];
		_OK_F_35C animate["mfd_double_amraam_1", 1];
		_OK_F_35C animate["mfd_double_amraam_2", 1];
		_OK_F_35C animate["mfd_double_gbu_1", 1];
		_OK_F_35C animate["mfd_double_gbu_2", 1];
		_OK_F_35C animate["mfd_double_amraam_int_1", 1];
		_OK_F_35C animate["mfd_double_amraam_int_2", 1];
		_OK_F_35C animate["single_sidewinder", 1];
		_OK_F_35C animate["single_sdb", 1];
		_OK_F_35C animate["single_jdam", 1];
		_OK_F_35C animate["single_amraam", 1];
		_OK_F_35C addWeapon "OK_F_35C_AIM9X_W";
		_OK_F_35C addWeapon "OK_F_35C_AIM120D_W";
		_OK_F_35C addWeapon "OK_F_35C_GBU32_W";
		_OK_F_35C addWeapon "OK_F_35C_AIM120D_int_W";
		_OK_F_35C addWeapon "OK_F_35C_GBU53_int_W";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_AIM9X_M";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_AIM120D_M";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_AIM120D_int_M";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_GBU32_M";
		_OK_F_35C addMagazine "OK_F_35C_8Rnd_GBU53_M";
	};
	case "cap": {
		_OK_F_35C animate["station_01_aim9x", 1];
		_OK_F_35C animate["station_02_aim120d", 1];
		_OK_F_35C animate["station_03_aim120d", 1];
		_OK_F_35C animate["station_04_gbu53", 1];
		_OK_F_35C animate["mfd_double_amraam_1", 1];
		_OK_F_35C animate["mfd_double_amraam_2", 1]; //this is a comment, lets see if it breaks something
		_OK_F_35C animate["mfd_double_amraam_int_1", 1]; //reporting back, nothing broke.. seems like comments work
		_OK_F_35C animate["mfd_double_amraam_int_2", 1];
		_OK_F_35C animate["single_sidewinder", 1];
		_OK_F_35C animate["single_amraam", 1];
		_OK_F_35C animate["double_amraam", 1];
		_OK_F_35C animate["single_sdb", 1];
		_OK_F_35C addWeapon "OK_F_35C_AIM9X_W";
		_OK_F_35C addWeapon "OK_F_35C_4Rnd_AIM120D_W";
		_OK_F_35C addWeapon "OK_F_35C_AIM120D_int_W";
		_OK_F_35C addWeapon "OK_F_35C_GBU53_int_W";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_AIM9X_M";
		_OK_F_35C addMagazine "OK_F_35C_4Rnd_AIM120D_M";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_AIM120D_int_M";
		_OK_F_35C addMagazine "OK_F_35C_8Rnd_GBU53_M";
	};
	case "atg": {
		_OK_F_35C animate["station_01_aim9x", 1];
		_OK_F_35C animate["station_02_gbu32", 1];
		_OK_F_35C animate["station_03_gbu32", 1];
		_OK_F_35C animate["station_04_gbu53", 1];
		_OK_F_35C animate["mfd_double_gbu_1", 1];
		_OK_F_35C animate["mfd_double_gbu_2", 1];
		_OK_F_35C animate["mfd_double_amraam_int_1", 1];
		_OK_F_35C animate["mfd_double_amraam_int_2", 1];
		_OK_F_35C animate["single_sidewinder", 1];
		_OK_F_35C animate["single_jdam", 1];
		_OK_F_35C animate["double_jdam", 1];
		_OK_F_35C animate["single_sdb", 1];
		_OK_F_35C addWeapon "OK_F_35C_AIM9X_W";
		_OK_F_35C addWeapon "OK_F_35C_4Rnd_GBU32_W";
		_OK_F_35C addWeapon "OK_F_35C_AIM120D_int_W";
		_OK_F_35C addWeapon "OK_F_35C_GBU53_int_W";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_AIM9X_M";
		_OK_F_35C addMagazine "OK_F_35C_4Rnd_GBU32_M";
		_OK_F_35C addMagazine "OK_F_35C_2Rnd_AIM120D_int_M";
		_OK_F_35C addMagazine "OK_F_35C_8Rnd_GBU53_M";
	};
};

while {true} do
{
	_internalAmraamCount = _OK_F_35C ammo _weaponAmraam;
	_internalGbuCount = _OK_F_35C ammo _weaponGbu;
	_internalSdbCount = _OK_F_35C ammo _weaponSdb;

	if	(
	(((currentWeapon _OK_F_35C) == _weaponAmraam) and (_internalAmraamCount > 0)) ||
	(((currentWeapon _OK_F_35C) == _weaponGbu) and (_internalGbuCount > 0 )) ||
	(((currentWeapon _OK_F_35C) == _weaponSdb) and (_internalSdbCount > 0 )) 
	)
	then
	{
	_OK_F_35C animate ["bayL_hatch_1",1];
	_OK_F_35C animate ["bayL_hatch_1_w",1];
	_OK_F_35C animate ["bayL_hatch_1_b",1];
	_OK_F_35C animate ["bayR_hatch_1",1];
	_OK_F_35C animate ["bayR_hatch_1_w",1];
	_OK_F_35C animate ["bayR_hatch_1_b",1];
	
	if (
		(((currentWeapon _OK_F_35C) == _weaponGbu) and (_internalGbuCount > 0 )) ||
		(((currentWeapon _OK_F_35C) == _weaponSdb) and (_internalSdbCount > 0 )) 
		)
		then 
		{
		_OK_F_35C animate ["bayL_hatch_2",1];
		_OK_F_35C animate ["bayL_hatch_2_b",1];
		_OK_F_35C animate ["bayR_hatch_2",1];
		_OK_F_35C animate ["bayR_hatch_2_b",1];
		}
		else
		{
		_OK_F_35C animate ["bayL_hatch_2",0];
		_OK_F_35C animate ["bayL_hatch_2_b",0];
		_OK_F_35C animate ["bayR_hatch_2",0];
		_OK_F_35C animate ["bayR_hatch_2_b",0];
		};
	}
	else
	{
	_OK_F_35C animate ["bayL_hatch_1",0];
	_OK_F_35C animate ["bayL_hatch_1_w",0];
	_OK_F_35C animate ["bayL_hatch_1_b",0];
	_OK_F_35C animate ["bayR_hatch_1",0];
	_OK_F_35C animate ["bayR_hatch_1_w",0];
	_OK_F_35C animate ["bayR_hatch_1_b",0];
	_OK_F_35C animate ["bayL_hatch_2",0];
	_OK_F_35C animate ["bayL_hatch_2_b",0];
	_OK_F_35C animate ["bayR_hatch_2",0];
	_OK_F_35C animate ["bayR_hatch_2_b",0];
	};
	sleep 0.2;
	if (velocityModelSpace _OK_F_35C select 1 > 5)
	then {
		_OK_F_35C animate ["wingtipR",0];
		_OK_F_35C animate ["wingtipR_2",0];
		_OK_F_35C animate ["wingtipR_1",0];
		_OK_F_35C animate ["wingtipR_lip",0];
		_OK_F_35C animate ["wingtipL",0];
		_OK_F_35C animate ["wingtipL_2",0];
		_OK_F_35C animate ["wingtipL_1",0];
		_OK_F_35C animate ["wingtipL_lip",0];
	};
};