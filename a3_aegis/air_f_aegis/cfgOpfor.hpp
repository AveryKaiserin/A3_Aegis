class O_Plane_Fighter_03_Cluster_F: O_Plane_Fighter_03_dynamicLoadout_F
{
	scope = protected;
	scopeCurator = public;
    displayName = $STR_A3_CfgVehicles_I_Plane_Fighter_03_Cluster_F0;
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylons1: pylons1{};
				class pylons2: pylons2{};
				class pylons3: pylons3
				{
					attachment = PylonMissile_1Rnd_BombCluster_02_cap_F;
				};
				class pylons4: pylons4{};
				class pylons5: pylons5
				{
					attachment = PylonMissile_1Rnd_BombCluster_02_cap_F;
				};
				class pylons6: pylons6{};
				class pylons7: pylons7{};
			};
		};
	};
};