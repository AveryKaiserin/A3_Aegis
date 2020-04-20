class CfgRecoils
{
	class recoil_default;
	// Arma 3 Atlas
	class recoil_AUG: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.8,
			0.3,
			0.2
		};
		kickBack[] =
		{
			0.02,
			0.04
		};
		temporary = 0.01;
	};
	class recoil_G36: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			0.8,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.03
		};
		temporary = 0.01;
	};
	class recoil_SCAR: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1.5,
			0.5,
			0.5
		};
		kickBack[] =
		{
			0.03,
			0.07
		};
		temporary = 0.005;
	};
};