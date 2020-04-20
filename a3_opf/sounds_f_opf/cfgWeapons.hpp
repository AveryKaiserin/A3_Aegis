class CfgWeapons
{
	// Arma 3
	class Rifle_Base_F;
	// Arma 3 Opposing Forces
	class arifle_SKS_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Opf\Sounds_F_Opf\arsenal\weapons\Rifles\SKS\SKS_reload",db0,1,10};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SKS_Shot_SoundSet,
					SKS_Tail_SoundSet,
					SKS_InteriorTail_SoundSet
				};
			};
	  	};
	  	class FullAuto: Mode_FullAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SKS_Shot_SoundSet,
					SKS_Tail_SoundSet,
					SKS_InteriorTail_SoundSet
				};
			};
	  	};
	};
};