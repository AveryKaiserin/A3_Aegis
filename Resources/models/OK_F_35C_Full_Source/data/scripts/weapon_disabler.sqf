_gearState = _this select 1;	// true = gear lowered, false = gear raised
_plane = _this select 0;
_cannonMag = "OK_F_35C_CANNON_M";
_mgAmmo = _plane getVariable ["cannonAmmo", nil]; //gets the last ammocount. If this returns nil, it means the gear are being lowered/raised for the first time.
if (weapons _plane find "OK_F_35C_CANNON_W" >= 0 ) then { //check if the plane has the cannon weapon. If not, just scipt this script.
	if (isNil "_mgAmmo") then { //should only run on the first time
		if (!_gearState) then 
		{
			_plane setVariable ["cannonAmmo", 180, true];
			_plane addMagazine _cannonMag; // give magazine because plane spawned with gear down so did not get mag from init script
		} else {
			_plane setVariable ["cannonAmmo", 180, true];
		};
	};

	if (_gearstate) then 
	{
		_currentAmmo = _plane ammo "OK_F_35C_CANNON_W";
		_plane setVariable ["cannonAmmo", _currentAmmo, true];
		_plane removeMagazine _cannonMag;
	} 
	else 
	{
		_plane addMagazine [_cannonMag, _mgAmmo];
	};
};