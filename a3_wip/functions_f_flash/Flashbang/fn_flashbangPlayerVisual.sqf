// function for sound handling of flashbang
// Version 0.1
// 2020.11.31
// Called for player in range of flashbang

//intensityBright:		1.0-0.0	how much the screen is whitened (1.0 for full effect)
//TODO: make the brightnes depending on enviroment? is 1.0 good for any situation?
//intensityDisortion:	1.0-0.0	how much disortion is applied (1.0 for full effect)
//coreTime:				0.0+	time of full muffeling effect (5.0 atm at full)
//fadeTime:				0.0+	time of the muffeling fading out (10.0 atm at full)
params ["_intensityBright", "_intensityDisortion", "_coreTime", "_fadeTime"];

systemChat "Visual";

/*

	_hndlCor = ppEffectCreate ["colorCorrections", 1501];
	_hndlCor ppEffectEnable true;
	_hndlCor ppEffectAdjust [1.3, 1.0, 0.85, [0.0, 0.0, 0.0, 0.0], [1.0, 1.0, 1.0, 1.0], [0.299, 0.587, 0.114, 0.0]];
	_hndlCor ppEffectCommit 0.1;
	_hndlDis = ppEffectCreate ["ChromAberration", 201];
	_hndlDis ppEffectEnable true;
	_hndlDis ppEffectAdjust [0.05, 0.05, false];
	_hndlDis ppEffectCommit 0.1;
	sleep 5;
	_hndlCor ppEffectAdjust [1.0, 1.0, 0.0, [0.0, 0.0, 0.0, 0.0], [1.0, 1.0, 1.0, 1.0], [0.299, 0.587, 0.114, 0.0]];
	_hndlCor ppEffectCommit 10;
	_hndlDis ppEffectAdjust [0.0, 0.0, false];
	_hndlDis ppEffectCommit 5;
	sleep 10;
	ppEffectDestroy _hndlCor;
	ppEffectDestroy _hndlDis;

	*/