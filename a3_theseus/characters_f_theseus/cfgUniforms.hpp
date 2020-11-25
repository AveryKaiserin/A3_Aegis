/* NAAF */
class Theseus_B_NAAF_Uniform_01_dgtl_F: I_soldier_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_dgtl_F;
	hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_co.paa"};
};
class Theseus_B_NAAF_Uniform_01_shortsleeve_dgtl_F: I_Soldier_lite_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Uniform_01_shortsleeve_dgtl_F;
	hiddenSelectionsTextures[] = {"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_co.paa"};
};
class Theseus_B_NAAF_Officer_dgtl_F: I_officer_F
{
  	scope = protected;
  	scopeCurator = private;
	uniformClass = Theseus_U_B_NAAF_Officer_dgtl_F;
	hiddenSelections[] = 
	{
		camo1,
		camo2,
		insignia
	};
	hiddenSelectionsTextures[] = 
	{
		"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_officer_spc_co.paa",
		"\A3_Theseus\Characters_F_Theseus\Uniforms\Data\theseus_ia_soldier_01_clothing_co.paa"
	};
};