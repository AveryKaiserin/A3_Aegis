class ArmoredDivision1
{
	type = "Armored";
	textureSize = 0.65;
	size = "Division";
	side = "East";
	commander = "TakistaniMen";
	commanderRank = "GENERAL";
	tags[] = {BIS,IAF};
};
class ArmoredDivision2: ArmoredDivision1
{
};
class ArmoredDivision3: ArmoredDivision1
{
};
class ArmoredDivision4: ArmoredDivision1
{
};
class ArmoredDivision5: ArmoredDivision1
{
};

class InfantryDivision1
{
	type = "Infantry";
	textureSize = 0.65;
	size = "Division";
	side = "East";
	commander = "TakistaniMen";
	commanderRank = "GENERAL";
	tags[] = {BIS,IAF};
};
class InfantryDivision2: InfantryDivision1
{

	class InfantryBrigade1
	{
		type = "Infantry";
		textureSize = 0.65;
		size = "Brigade";
		side = "East";
		commander = "TakistaniMen";
		commanderRank = "GENERAL";
		tags[] = {BIS,IAF};
	};
	class InfantryBrigade2: InfantryBrigade1
	{
		class ArmoredBattalion1
		{
			type = "Armored";
			textureSize = 0.65;
			size = "Battalion";
			side = "East";
			commander = "TakistaniMen";
			tags[] = {BIS,IAF};
			//assets[] = {{O_T100M,8},{O_T100M,8}};
		};
		class MechanizedBattalion1: ArmoredBattalion1
		{
			type = "MechanizedInfantry";
			commander = "Namdar";

			class MechanizedCompany1
			{
				type = "MechanizedInfantry";
				textureSize = 0.65;
				size = "Company";
				side = "East";
				tags[] = {BIS,IAF};
			};
			class MechanizedCompany2: MechanizedCompany1
			{
			};
			class InfantryCompany1: MechanizedCompany1
			{
				type = "Infantry";
			};
			class InfantryCompany2: InfantryCompany1
			{
				class InfantryPlatoon1
				{
					type = "Infantry";
					textureSize = 0.65;
					size = "Platoon";
					side = "East";
					tags[] = {BIS,IAF};

					class InfantrySquad1
					{
						text = "%1 %2";
						type = "Infantry";
						textureSize = 0.65;
						size = "Squad";
						side = "East";
						tags[] = {BIS,IAF};
					};
					class InfantrySquad2: InfantrySquad1
					{
					};
					class InfantrySquad3: InfantrySquad1
					{
					};
					class InfantrySquad4: InfantrySquad1
					{
					};
				};
				class InfantryPlatoon2: InfantryPlatoon1
				{
				};
				class InfantryPlatoon3: InfantryPlatoon1
				{
				};
				class InfantryPlatoon4: InfantryPlatoon1
				{
				};
			};
		};
		class MechanizedBattalion2: ArmoredBattalion1
		{
			type = "MechanizedInfantry";
		};
		class ArtilleryBattalion1: ArmoredBattalion1
		{
			type = "Artillery";
		};
		class AirBattalion2: ArmoredBattalion1
		{
			type = "Helicopter";
			assets[] = {{O_Mi48_F,4},{O_Ka60_F,8}};
		};
		class SupportBattalion1: ArmoredBattalion1
		{
			type = "Support";
		};
	};
	class InfantryBrigade3: InfantryBrigade1
	{
		type = "Infantry";
	};
	class InfantryBrigade4: InfantryBrigade1
	{
		type = "Infantry";
	};
};
class InfantryDivision3: InfantryDivision1
{
};
class InfantryDivision4: InfantryDivision1
{
};
class InfantryDivision5: InfantryDivision1
{
};
class InfantryDivision6: InfantryDivision1
{
};
class InfantryDivision7: InfantryDivision1
{
};