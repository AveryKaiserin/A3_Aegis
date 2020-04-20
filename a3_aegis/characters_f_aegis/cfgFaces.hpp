class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		// Arma 3
		class Default{};
		class PersianHead_A3_01;
		class WhiteHead_01: Default{};
		class GreekHead_A3_01: Default{};
		class Nikos: GreekHead_A3_01
		{
			disabled = false;
		};
		class Miller: Default
		{
			disabled = false;
		};
		class Kerry;
		class Kerry_A_F: Kerry
		{
			displayName = "Kerry (Survive)";
			disabled = false;
		};
		class kerry_B1_F: Kerry
		{
			displayName = "Kerry (Adapt 1)";
			disabled = false;
		};
		class kerry_B2_F: Kerry
		{
			displayName = "Kerry (Adapt 2)";
			disabled = false;
		};
		class Kerry_C_F: Kerry
		{
			displayName = "Kerry (Win)";
			disabled = false;
		};
		class IG_Leader: Default
		{
			disabled = false;
		};
		class O_Colonel: Default
		{
      		disabled = false;
		};
		class Jay: Default
		{
			disabled = false;
		};
		class Ivan: Default
		{
			disabled = false;
		};
		class Pettka: Default
		{
			disabled = false;
		};
		class Dwarden: Default
		{
			disabled = false;
		};
		class Hladas: Default
		{
			disabled = false;
		};
		// Arma 3 Apex
		class TanoanHead_A3_01;
		// Arma 3 Oldman
		class TanoanHead_A3_09: TanoanHead_A3_01
		{
			identityTypes[] = {Head_Tanoan};
		};
		// Arma 3 Aegis
		class PersianHead_A3_05: PersianHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_TakistaniMen_LastNames36;
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_05_injury.rvmat";
		};
		class PersianHead_A3_06: PersianHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_TakistaniMen_LastNames23;
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_06_injury.rvmat";
		};
		class PersianHead_A3_07: PersianHead_A3_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_TakistaniMen_LastNames47;
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07.rvmat";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_Persian_07_injury.rvmat";
		};
		class WhiteHead_33: WhiteHead_01
		{
			author = $STR_A3_A_AveryTheKitty;
			displayname = $STR_A3_NATOMen_lastnames44;
			texture = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33_CO.paa";
			material = "\A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_CO.paa";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_CO.paa";
			materialWounded1 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33_injury.rvmat";
			materialWounded2 = "A3_Aegis\Characters_F_Aegis\Heads\Data\M_White_33_injury.rvmat";
		};
  	};
};