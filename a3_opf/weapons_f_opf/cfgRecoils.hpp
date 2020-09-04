class CfgRecoils
{
	class recoil_default;
	// SKS 7.62 mm
	class recoil_sks: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1.0,
			0.4,
			0.3
		};
		kickBack[] =
		{
			0.04,
			0.08
		};
		temporary = 0.015;
	};
};