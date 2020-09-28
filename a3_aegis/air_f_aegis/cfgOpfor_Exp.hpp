class Aegis_O_T_Plane_CAS_02_Cluster_F: O_Plane_CAS_02_Cluster_F
{
	scope = protected;
	scopeCurator = public;
	faction = OPF_T_F;
	crew = Aegis_O_T_Fighter_Pilot_F;
	typicalCargo[] = {Aegis_O_T_Fighter_Pilot_F};
	textureList[] =
	{
		Grey,0,
		GreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_CAS_02\Data\Fighter02_ext02_ghex_CO.paa"
	};
    class EjectionSystem: EjectionSystem
    {
        EjectionSeatClass = Aegis_O_T_Ejection_Seat_Plane_CAS_02_F;
    };
};
class Aegis_O_T_Plane_Fighter_02_Cluster_F: O_Plane_Fighter_02_Cluster_F
{
	scope = protected;
	scopeCurator = public;
	faction = OPF_T_F;
	crew = Aegis_O_T_Fighter_Pilot_F;
	typicalCargo[] = {Aegis_O_T_Fighter_Pilot_F};
	textureList[] =
	{
		CamoGreyHex,0,
		CamoGreenHex,1
	};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_02_ghex_CO.paa",
		"\A3_Aegis\Air_F_Aegis\Plane_Fighter_02\Data\Fighter_02_fuselage_01_ghex_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_02_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_00_CO.paa",
		"\A3\Air_F_Jets\Plane_Fighter_02\Data\Numbers\Fighter_02_number_01_CO.paa",
		"\A3\Data_F\clear_empty.paa"
	};
	class EjectionSystem: EjectionSystem
	{
		EjectionSeatClass = Aegis_O_T_Ejection_Seat_Plane_Fighter_02_F;
	};
};