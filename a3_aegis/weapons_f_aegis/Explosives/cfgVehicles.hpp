class CfgVehicles
{
	// Arma 3
	class MineGeneric;
	class MineBase;
	// Arma 3 Aegis
	class FlareTripMine: MineBase
	{
		author = $STR_A3_A_AveryTheKitty;
		mapSize = 3.06;
		editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\FlareTripMine.jpg";
		scope = public;
		scopeCurator = public;
		ammo = FlareTripMine_Wire_Ammo;
		displayName = "Tripwire Flare";
		icon = iconExplosiveAP;
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\A3\Weapons_F\Explosives\Flare_tripwire.p3d";
		descriptionShort = "Type: Tripwire flare<br />Rounds: 1<br />Used on: Ground";
		class Library
		{
			libTextDesc = "Tripwire flares consist of a dug-in flare and a 5 m wire. They are very hard to spot, and are used to secure an area and to guard against infiltration.";
		};
	};
};