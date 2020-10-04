class CfgSoundSets
{
	// Arma 3
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class Pistol_Shot_Base_SoundSet;
	class Pistol_Tail_Base_SoundSet;
	class Pistol_InteriorTail_Base_SoundSet;
	class Pistol_silencerShot_Base_SoundSet;
	class Pistol_silencerTail_Base_SoundSet;
	class Pistol_silencerInteriorTail_Base_SoundSet;
	// Arma 3 Opposing Forces
	class Opf_SKS_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] =
		{
			Opf_SKS_closure_SoundShader,
			Opf_SKS_closeShot_SoundShader,
			Opf_SKS_midShot_SoundShader,
			Opf_SKS_distShot_SoundShader
		};
	};
	class Opf_SKS_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] =
		{
			Opf_SKS_tailDistant_SoundShader,
			Opf_SKS_tailForest_SoundShader,
			Opf_SKS_tailHouses_SoundShader,
			Opf_SKS_tailMeadows_SoundShader,
			Opf_SKS_tailTrees_SoundShader
		};
	};
	class Opf_SKS_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {Opf_SKS_tailInterior_SoundShader};
	};
};