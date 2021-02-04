// function to kill a array of sounds in fixed timeintervals
// Version 0.1
// 2020.11.07
// Called to kill of array of sounds

params ["_originalSoundArray", "_timer", "_killAll"];

//copy sound array to work on it
_soundArray = _originalSoundArray;

if ( !_killAll ) then { // remove one sound from array (if we don't kill all)
	_soundArray deleteAt 0;
};

// now we emter the killing loop
while { (count _soundArray) > 0} do { // repeat as long we have at least one sound in the array
	deleteVehicle (_soundArray deleteAt 0); // remove sound of array and kill it
	sleep _timer; // wait one
};
