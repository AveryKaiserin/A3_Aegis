class CfgMarkers
{
	class flag_NATO;
	class Opf_flag_ChDKZ: flag_NATO
	{
		name = $STR_A3_O_CfgMarkers_Opf_flag_ChDKZ;
		icon = "\A3_Opf\UI_F_Opf\Data\CfgMarkers\ChDKZ_CA.paa";
		texture = "\A3_Opf\UI_F_Opf\Data\CfgMarkers\ChDKZ_CA.paa";
	};
	class Opf_flag_TKM: flag_NATO
	{
		name = $STR_A3_O_CfgMarkers_Opf_flag_TKM;
		icon = "\A3_Opf\UI_F_Opf\Data\CfgMarkers\TKM_CA.paa";
		texture = "\A3_Opf\UI_F_Opf\Data\CfgMarkers\TKM_CA.paa";
	};
    // Deprecated classes
    DEPRECATED_CLASS(flag_ChDKZ,Opf_flag_ChDKZ)
    DEPRECATED_CLASS(flag_TKM,Opf_flag_TKM)
};