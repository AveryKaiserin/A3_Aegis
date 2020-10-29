class B_Plane_Fighter_05_Cluster_F: B_Plane_Fighter_05_F
{
	scope = protected;
	scopeCurator = public;
	displayName = $STR_A3_A_CfgVehicles_Plane_Fighter_05_Cluster_F0;
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3{};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = PylonRack_2Rnd_BombCluster_01_F;
				};
				class pylons6: pylons6
				{
					attachment = PylonRack_2Rnd_BombCluster_01_F;
				};
				class pylonBayRight1: pylonBayRight1{};
				class pylonBayLeft1: pylonBayLeft1{};
				class pylonBayRight2: pylonBayRight2
				{
					attachment = PylonMissile_1Rnd_BombCluster_01_F;
				};
				class pylonBayLeft2: pylonBayLeft2
				{
					attachment = PylonMissile_1Rnd_BombCluster_01_F;
				};
				class pylonCenter1: pylonCenter1{};
			};
		};
	};
};