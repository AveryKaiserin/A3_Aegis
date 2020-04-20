class CfgWeapons
{
	class Rifle_Base_F;
	class UGL_F;
	/*
	// AUG 5.56 mm
	class arifle_AUG_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_reload",db0,1,10};
		changeFiremodeSound[] = {"",db0,0,0};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_Shot_SoundSet,
					AUG_Tail_SoundSet,
					AUG_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_silencerShot_SoundSet,
					AUG_silencerTail_SoundSet,
					AUG_silencerInteriorTail_SoundSet
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
					AUG_Shot_SoundSet,
					AUG_Tail_SoundSet,
					AUG_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					AUG_silencerShot_SoundSet,
					AUG_silencerTail_SoundSet,
					AUG_silencerInteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_AUG_GL_base_F: arifle_AUG_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\AUG\AUG_UGL_reload",db-2,1,10};
		};
	};
	*/
	// G36 6.5 mm
	class arifle_G36_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_reload",db0,1,10};
		changeFiremodeSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_firemode",db-15,1,5};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_Shot_SoundSet,
					G36_Tail_SoundSet,
					G36_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_silencerShot_SoundSet,
					G36_silencerTail_SoundSet,
					G36_silencerInteriorTail_SoundSet
				};
			};
	  	};
		class Burst: Mode_Burst
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_Shot_SoundSet,
					G36_Tail_SoundSet,
					G36_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_silencerShot_SoundSet,
					G36_silencerTail_SoundSet,
					G36_silencerInteriorTail_SoundSet
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
					G36_Shot_SoundSet,
					G36_Tail_SoundSet,
					G36_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					G36_silencerShot_SoundSet,
					G36_silencerTail_SoundSet,
					G36_silencerInteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_G36_GL_base_F: arifle_G36_base_F
	{
		class UGL: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\G36\G36_UGL_reload",db-2,1,10};
		};
	};
	/*
	// Mk17 SCAR 7.62 mm
	class arifle_SCAR_base_F: Rifle_Base_F
	{
		drySound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_dry",db-5,1,10};
		reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_reload",db0,1,10};
		changeFiremodeSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_firemode",db-15,1,5};
		class Single: Mode_SemiAuto
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SCAR_Shot_SoundSet,
					SCAR_Tail_SoundSet,
					SCAR_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SCAR_silencerShot_SoundSet,
					SCAR_silencerTail_SoundSet,
					SCAR_silencerInteriorTail_SoundSet
				};
			};
	  	};
		class Burst: Mode_Burst
	  	{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SCAR_Shot_SoundSet,
					SCAR_Tail_SoundSet,
					SCAR_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SCAR_silencerShot_SoundSet,
					SCAR_silencerTail_SoundSet,
					SCAR_silencerInteriorTail_SoundSet
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
					SCAR_Shot_SoundSet,
					SCAR_Tail_SoundSet,
					SCAR_InteriorTail_SoundSet
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					SCAR_silencerShot_SoundSet,
					SCAR_silencerTail_SoundSet,
					SCAR_silencerInteriorTail_SoundSet
				};
			};
	  	};
	};
	class arifle_SCAR_GL_base_F: arifle_SCAR_base_F
	{
		class EGLM: UGL_F
		{
			reloadMagazineSound[] = {"\A3_Atlas\Sounds_F_Atlas\arsenal\weapons\Rifles\SCAR\SCAR_UGL_reload",db-2,1,10};
		};
	};
	*/
};