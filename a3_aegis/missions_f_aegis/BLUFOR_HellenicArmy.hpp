class HellenicArmy
{
	text = "Hellenic Army";
	textShort = "HAF";
	type = "HQ";
	size = "ArmyGroup";
	side = "West";
	commander = "GreekMen";
	tags[] = {BIS,HAF};

	class FirstArmy
	{
		id = 1;
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "GreekMen";
		tags[] = {BIS,HAF};

		class IArmyCorps
		{
			id = 1;
			idType = 1;
			type = "HQ";
			size = "Corps";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class IVArmyCorps
		{
			id = 4;
			idType = 1;
			type = "HQ";
			size = "Corps";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
	};
	class IIArmyCorps
	{
		id = 2;
		idType = 1;
		type = "HQ";
		size = "Corps";
		side = "West";
		commander = "GreekMen";
		tags[] = {BIS,HAF};

		class IInfantryDivision
		{
			id = 2;
			idType = 1;
			text = "I Infantry Division";
			textShort = "I ID";
			type = "Infantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class IIMechanizedInfantryDivision
		{
			id = 2;
			idType = 1;
			text = "II Mechanized Infantry Division";
			textShort = "II MID";
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class 1stArmyAviationBrigade
		{
			id = 1;
			text = "1st Army Aviation Brigade";
			textShort = "1st AAB";
			type = "CombatAviation";
			size = "Brigade";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
	};
	class ASDEN
	{
		text = "Supreme Military Command of Interior and Islands";
		textShort = "ASDEN";
		type = "HQ";
		size = "Corps";
		side = "West";
		commander = "GreekMen";
		tags[] = {BIS,HAF};

		class 5thCretanDivision
		{
			text = "%1 Cretan %3";
			id = 5;
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class 79thNationalGuardHigherCommand
		{
			text = "%1 National Guard Higher Command";
			textShort = "%1 NG";
			id = 79;
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class 80thNationalGuardHigherCommand
		{
			text = "%1 National Guard Higher Command";
			textShort = "%1 NG";
			id = 80;
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class 88thMilitaryCommand
		{
			text = "%1 Military Command";
			textShort = "%1 MC";
			id = 88;
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};

			class 388thArmoredBattalion
			{
				id = 388;
				type = "Armored";
				size = "Battalion";
				side = "West";
				commander = "GreekMen";
				tags[] = {BIS,HAF};
			};
			class 285thMechanizedInfantryBattalion
			{
				id = 285;
				type = "MechanizedInfantry";
				size = "Battalion";
				side = "West";
				commander = "GreekMen";
				tags[] = {BIS,HAF};
			};
			class 290thMechanizedInfantryBattalion
			{
				id = 290;
				type = "MechanizedInfantry";
				size = "Battalion";
				side = "West";
				commander = "GreekMen";
				tags[] = {BIS,HAF};
			};
			class 224thMechanizedInfantryBattalion
			{
				id = 224;
				type = "MechanizedInfantry";
				size = "Battalion";
				side = "West";
				commander = "GreekMen";
				tags[] = {BIS,HAF};
			};
			class 101stArtilleryBattalion
			{
				id = 101;
				type = "Artillery";
				size = "Battalion";
				side = "West";
				commander = "GreekMen";
				tags[] = {BIS,HAF};
			};
		};
		class 95thNationalGuardHigherCommand
		{
			text = "95th National Guard Higher Command";
			textShort = "95th NG";
			id = 95;
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class 96thNationalGuardHigherCommand
		{
			text = "96th National Guard Higher Command";
			textShort = "96th NG";
			id = 96;
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
		class 98thNationalGuardHigherCommand
		{
			text = "98th National Guard Higher Command";
			textShort = "98th NG";
			id = 98;
			type = "MechanizedInfantry";
			size = "Division";
			side = "West";
			commander = "GreekMen";
			tags[] = {BIS,HAF};
		};
	};
};