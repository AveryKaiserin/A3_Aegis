class CfgWeapons
{
    // Arma 3
    class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
        {
            class player;
            class close;
            class short;
            class medium;
            class far;
        };
		class AP: autocannon_Base_F
        {
            class player;
            class close;
            class short;
            class medium;
            class far;
        };
    };
    // Arma 3 Atlas
    class autocannon_30mm_Heli_Attack_03: autocannon_30mm_CTWS
    {
		class HE: HE
		{
			class player: player
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class close: close
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class short: short
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class medium: medium
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class far: far
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
		};
		class AP: AP
		{
			class player: player
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class close: close
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class short: short
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class medium: medium
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
			class far: far
			{
                soundSetShot[] =
                {
                    Autocannon30mmBody_Shot_SoundSet,
                    Autocannon30mmBody_Tail_SoundSet
                };
			};
		};
    };
};