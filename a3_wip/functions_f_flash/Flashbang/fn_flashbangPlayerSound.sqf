// function for sound effect of flashbang for player
// Version 0.2
// 2020.11.07
// Called for player in range of flashbang

//muffeling: 	1.0-0.05	amout of sound reduction of overall sounds (full muffeling atm 0.05)
//coreTime:		0.0+		time of full muffeling effect (5.0 atm at full)
//fadeTime:		0.0+		time of the muffeling fading out (10.0 atm at full)
params ["_muffeling", "_coreTime", "_fadeTime"];

// pre calculations
_usedFactor = 1 / _muffeling;
_fadeKillTime = _fadeTime / _usedFactor;

// test for still running sound effect
if ( !(scriptDone Aegis_fnc_soundHandle) ) then { // we have old sound (form a flashbang)
	_toKillSounds = Aegis_fnc_soundArray;
	terminate Aegis_fnc_soundHandle;
	[_toKillSounds, 0.1, true] spawn Aegis_fnc_flashbangKillSound;
};
// attach new sound handle (as old one is killed of now)
Aegis_fnc_soundHandle = _thisScript;
// reset array
Aegis_fnc_soundArray = [];

systemChat str(soundVolume);
// muffle the sounds and play tinnitus
0.1 fadeSound _muffeling;
for "_i" from 1 to _usedFactor do { // play the corect amound of sound effect
	Aegis_fnc_soundArray pushBack (playSound Aegis_fnc_soundTinnitus);
};
// now wait the core time
sleep _coreTime;
// start killing off unneeded sounds and resume sounds
_fadeTime fadeSound 1;
[Aegis_fnc_soundArray, _fadeKillTime, true] call Aegis_fnc_flashbangKillSound;
// wait for sound killer to finish

systemChat "sound effect done";