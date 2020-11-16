class CfgRecoils
{
    /* Inheritance Tree */
	class recoil_default;
    
	/* 9M135 Vorona */
	class recoil_vorona: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.3,
			0.25,
			0.12
		};
		kickBack[] =
		{
			0.1,
			0.12
		};
		temporary = 0.12;
	};
	// Warfare-50 12.7 mm
	class recoil_wf50: recoil_default
	{
		muzzleOuter[] =
		{
			1.3,
			3.3,
			0.6,
			0.7
		};
		kickBack[] =
		{
			0.1,
			0.1
		};
		temporary = 0.025;
	};
	// C-1911 .45 ACP
	class recoil_pistol_c1911: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			1.5,
			0.2,
			0.3
		};
		kickBack[] =
		{
			0.04,
			0.08
		};
		temporary = 0.04;
	};
	// G17 9 mm
	class recoil_pistol_g17: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			1,
			0.2,
			0.3
		};
		kickBack[] =
		{
			0.03,
			0.06
		};
		temporary = 0.03;
	};
	// Mk26 12.7 mm
	class recoil_pistol_mk26: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1.5,
			0.4,
			0.3
		};
		kickBack[] =
		{
			0.06,
			0.08
		};
		temporary = 0.06;
	};
	// AK-12 5.45 mm
	class recoil_ak12_545: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.7,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.05
		};
		temporary = 0.01;
	};
	// AKU-12 5.45 mm
	class recoil_ak12u_545: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.7,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.05
		};
		temporary = 0.01;
	};
	// Grot 5.56 mm
	class recoil_MSBS556: recoil_default
	{
		muzzleOuter[] =
		{
			0.25,
			0.65,
			0.25,
			0.22
		};
		kickBack[] =
		{
			0.01,
			0.027
		};
		temporary = 0.01;
	};
	// L85A3 6.5 mm
	class recoil_sa80: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1,
			0.3,
			0.3
		};
		kickBack[] =
		{
			0.02,
			0.04
		};
		temporary = 0.01;
	};
	// Mk17 7.62 mm
	class recoil_scar: recoil_default
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
	// RFL 7.62 mm
	class recoil_rfb: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1.2,
			0.5,
			0.3
		};
		kickBack[] =
		{
			0.03,
			0.05
		};
		temporary = 0.01;
	};
	// RPK 7.62 mm
	class recoil_rpk: recoil_default
	{
		muzzleOuter[] =
		{
			0.3,
			1,
			0.3,
			0.4
		};
		kickBack[] =
		{
			0.04,
			0.08
		};
		temporary = 0.01;
	};
	// AA-40 12G
	class recoil_aa40: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			2.8,
			0.8,
			0.5
		};
		kickBack[] =
		{
			0.04,
			0.06
		};
		temporary = 0.015;
	};
	// Bulldog 12G
	class recoil_ksg: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			3,
			0.6,
			0.6
		};
		kickBack[] =
		{
			0.08,
			0.1
		};
		temporary = 0.02;
	};
	// M4 SSAS 12G
	class recoil_m4: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			3,
			0.6,
			0.6
		};
		kickBack[] =
		{
			0.08,
			0.1
		};
		temporary = 0.02;
	};
	// BK-153 12G
	class recoil_mp153: recoil_default
	{
		muzzleOuter[] =
		{
			1,
			3,
			0.6,
			0.6
		};
		kickBack[] =
		{
			0.08,
			0.1
		};
		temporary = 0.02;
	};
	// MP7 4.6 mm
	class recoil_smg_04: recoil_default
	{
		muzzleOuter[] =
		{
			0.2,
			0.5,
			0.2,
			0.2
		};
		kickBack[] =
		{
			0.01,
			0.03
		};
		temporary = 0.01;
	};
};