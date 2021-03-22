/* Venezuela */
class Atlas_O_VZ_Man_Base_F: I_Soldier_F
{
    scope = private;
	faction = Atlas_OPF_V_F;
	genericNames = GreekMen;
	//genericNames = VZmen;
	side = TEast;
	identityTypes[] =
	{
		LanguageGRE_F,
		Head_Greek,
		G_HAF_default
	};
};
class Atlas_O_VZ_Soldier_Base_F: Atlas_O_VZ_Man_Base_F
{
	uniformClass = Atlas_O_VZ_Officer_oli_CO_F;
};
