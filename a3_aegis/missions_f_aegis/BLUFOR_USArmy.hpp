class USArmy
{
	text = "United States Army";
	textShort = "US Army";
	type = "HQ";
	insignia = "\A3\missions_f\data\orbat\USArmy_ca.paa";
	size = "ArmyGroup";
	side = "West";
	colorBackground[] = {0,0,0,1};
	commander = "NATOMen";
	tags[] = {BIS,USArmy,Kerry,Hutchison,Larkin};

	class FORSCOM
	{
		text = "FORSCOM (United States Army Forces Command)";
		textShort = "FORSCOM";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy,Kerry,Hutchison,Larkin};

		class ICorps
		{
			id = 1;
			idType = 1;
			type = "HQ";
			insignia = "\A3\missions_f\data\orbat\ICorps_ca.paa";
			size = "Corps";
			side = "West";
			colorBackground[] = {0,0,0,1};
			commander = "NATOMen";
			tags[] = {BIS,USArmy,Kerry,Hutchison,Larkin};

			class 7thInfantry
			{
				id = 7;
				// Full group name displayed in tooltip
				//text = "7th Infantry Division";
				// Short name displayed next to the icon
				//textShort = "7th ID";
				// Icon texture - can be either absolute path, or class from CfgMarkers
				type = "Infantry";
				// Icon texture size multiplier - default is 1
				textureSize = 1;
				// Background texture
				insignia = "\A3\missions_f\data\orbat\7thInfantry_ca.paa";
				// Icon Color - can be either RGBA array, or class from CfgMarkerColors
				side = "West";
				// Unit size (see table in A3 Chain Of Command, column "Game ID"). Use -1 for empty texture.
				size = "Division";
				// Name of unit commander
				// - can be either direct name, or class from CfgWords >> GenericNames (random name from the list is then selected)
				commander = "Armstrong";
				// Rank of unit commander (by default selected based on unit size)
				commanderRank = "GENERAL";
				// Group tags. When opening ORBAT viewer, user can define what tags will be accepted.
				tags[] = {BIS,USArmy,Kerry,Hutchison,Larkin};

				// Sub-units with the same params follow. They can have their own subs - number of tiers is not limited.
				class 1stBCT
				{
					id = 1;
					type = "Armored";
					size = "BCT";
					side = "West";
					commander = "NATOMen";
					tags[] = {BIS,USArmy};

					class 7thSquadron
					{
						id = 7;
						type = "Armored";
						size = "Squadron";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 3rdBattalion
					{
						id = 3;
						type = "MechanizedInfantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 2ndBattalion
					{
						id = 2;
						type = "MechanizedInfantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 1stBattalion
					{
						id = 1;
						type = "Artillery";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 4thBattalion
					{
						id = 4;
						type = "Support";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
				};
				class 2ndBCT
				{
					id = 2;
					//text = "2nd Brigade Combat Team";
					//textShort = "2nd BCT";
					type = "Armored";
					size = "BCT";
					side = "West";
					commander = "NATOMen";
					tags[] = {BIS,USArmy,Hutchison};

					class 3rdSquadron
					{
						id = 3;
						type = "Armored";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy,Hutchison};
					};
					class 2ndBattalion
					{
						id = 2;
						type = "MechanizedInfantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 5thBattalion
					{
						id = 5;
						type = "MechanizedInfantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 3rdBattalion
					{
						id = 3;
						type = "Artillery";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 42ndBattalion
					{
						id = 42;
						type = "Support";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
				};
				class 3rdBCT
				{
					id = 3;
					type = "Infantry";
					size = "BCT";
					side = "West";
					commander = "NATOMen";
					tags[] = {BIS,USArmy};

					class 6thSquadron
					{
						id = 6;
						type = "Recon";
						size = "Squadron";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 1stBattalion
					{
						id = 1;
						type = "Infantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 2ndBattalion
					{
						id = 2;
						type = "Infantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 4thBattalion
					{
						id = 4;
						type = "Artillery";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 204thBattalion
					{
						id = 204;
						type = "Support";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
				};
				class 4thBCT
				{
					id = 4;
					type = "Infantry";
					size = "BCT";
					side = "West";
					commander = "NATOMen";
					tags[] = {BIS,USArmy,Kerry};

					class 1stBattalion
					{
						id = 1;
						type = "Infantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 2ndBattalion
					{
						id = 2;
						type = "Infantry";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 1stSquadron
					{
						id = 1;
						type = "Recon";
						size = "Squadron";
						side = "West";
						commander = "Grover";
						tags[] = {BIS,USArmy,Kerry};

						class ATroop
						{
							id = 1;
							idType = 2;
							type = "Recon";
							size = "Troop";
							side = "West";
							commander = "NATOMen";
							tags[] = {BIS,USArmy};
						};
						class BTroop
						{
							id = 2;
							idType = 2;
							type = "Recon";
							size = "Troop";
							side = "West";
							commander = "NATOMen";
							tags[] = {BIS,USArmy};
						};
						class CTroop
						{
							id = 3;
							idType = 2;
							type = "Recon";
							size = "Troop";
							side = "West";
							commander = "NATOMen";
							tags[] = {BIS,USArmy,Kerry};

							class Platoon1
							{
								id = 1;
								type = "Recon";
								size = "Platoon";
								side = "West";
								commander = "NATOMen";
								tags[] = {BIS,USArmy};
							};
							class Platoon2
							{
								id = 2;
								type = "Recon";
								size = "Platoon";
								side = "West";
								commander = "NATOMen";
								tags[] = {BIS,USArmy,Kerry};

								class Squad1
								{
									id = 1;
									type = "Recon";
									size = "Squad";
									side = "West";
									commander = "NATOMen";
									tags[] = {BIS,USArmy,Kerry};

									class Fireteam1
									{
										id = 1;
										idType = 3;
										type = "Recon";
										size = "FireTeam";
										side = "West";
										commander = "Kerry";
										assets[] = {B_Soldier_TL_F,B_Soldier_F,B_Soldier_GL_F,B_Soldier_AR_F};
										tags[] = {BIS,USArmy,Kerry};
									};
									class Fireteam2
									{
										id = 2;
										idType = 3;
										type = "Recon";
										size = "FireTeam";
										side = "West";
										commander = "NATOMen";
										assets[] = {B_Soldier_TL_F,B_Soldier_F,B_Soldier_GL_F,B_Soldier_AR_F};
										tags[] = {BIS,USArmy};
									};
								};
								class Squad2
								{
									id = 2;
									type = "Recon";
									size = "Squad";
									side = "West";
									commander = "NATOMen";
									tags[] = {BIS,USArmy};
								};
								class Squad3
								{
									id = 3;
									type = "Recon";
									size = "Squad";
									side = "West";
									commander = "NATOMen";
									tags[] = {BIS,USArmy};
								};
								class Squad4
								{
									id = 4;
									type = "Recon";
									size = "Squad";
									side = "West";
									commander = "NATOMen";
									tags[] = {BIS,USArmy};
								};
							};
							class Platoon3
							{
								id = 3;
								type = "Recon";
								size = "Platoon";
								side = "West";
								commander = "NATOMen";
								tags[] = {BIS,USArmy};
							};
							class Platoon4
							{
								id = 4;
								type = "Recon";
								size = "Platoon";
								side = "West";
								commander = "NATOMen";
								tags[] = {BIS,USArmy};
							};
						};
					};
					class 4thBattalion
					{
						id = 4;
						type = "Artillery";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 505thBattalion
					{
						id = 505;
						type = "Support";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
				};
				class CAB
				{
					type = "CombatAviation";
					size = "Brigade";
					side = "West";
					commander = "NATOMen";
					tags[] = {BIS,USArmy,Larkin};

					class 1stAttackReconBattalion
					{
						id = 1;
						type = "AttackRecon";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						assets[] = {{B_RAH66_F,8},{I_CH49_F,10},{B_AH9_F,12}};
						tags[] = {BIS,USArmy,Larkin};
					};
					class 2ndGeneralSupportBattalion
					{
						id = 2;
						type = "GeneralSupport";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 3rdReconSquadron
					{
						id = 3;
						type = "Recon";
						size = "Squadron";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 4thAssaultBattalion
					{
						id = 4;
						type = "Assault";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
					class 312thAviationSupportBattalion
					{
						id = 312;
						type = "AviationSupport";
						size = "Battalion";
						side = "West";
						commander = "NATOMen";
						tags[] = {BIS,USArmy};
					};
				};
			};
		};
		class IIICorps
		{
			id = 3;
			idType = 1;
			type = "HQ";
			size = "Corps";
			side = "West";
			commander = "NATOMen";
			tags[] = {BIS,USArmy};
		};
		class IVIIAirborneCorps
		{
			id = 18;
			idType = 1;
			type = "HQ";
			size = "Corps";
			side = "West";
			commander = "NATOMen";
			tags[] = {BIS,USArmy};
		};
	};
	class USARAF
	{
		text = "USARAF (United States Army Africa)";
		textShort = "USARAF";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class ARCENT
	{
		text = "ARCENT (United States Army Central)";
		textShort = "ARCENT";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class ARNORTH
	{
		text = "ARNORTH (United States Army North)";
		textShort = "ARNORTH";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class ARSOUTH
	{
		text = "ARSOUTH (United States Army South)";
		textShort = "ARSOUTH";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class USAREUR
	{
		text = "USAREUR (United States Army Europe)";
		textShort = "USAREUR";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class USARPAC
	{
		text = "USARPAC (United States Army Pacific)";
		textShort = "USARPAC";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class USASOC
	{
		text = "USASOC (United States Army Special Operations Command)";
		textShort = "USASOC";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class SDDC
	{
		text = "SDDC (Surface Deployment and Distribution Command)";
		textShort = "SDDC";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
	class USASMDC
	{
		text = "USASMDC (United States Army Space and Missile Defense Command)";
		textShort = "USASMDC";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,USArmy};
	};
};