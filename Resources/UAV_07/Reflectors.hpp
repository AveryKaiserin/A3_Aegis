class Reflectors : Reflectors {
	class l_headlight
	{
		color[] = {7000, 7500, 10000};
		ambient[] = {70, 75, 100};
		intensity = 5;
		size = 1;
		innerAngle = 15;
		outerAngle = 65;
		coneFadeCoef = 8;
		position = "l_headlight_pos";
		direction = "l_headlight_dir";
		hitpoint = "l_headlight_hp";
		selection = "l_headlight";
		useFlare = true;
		flareSize = 3;
		flareMaxDistance = 120;
		dayLight = false;

		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 50;
			hardLimitEnd = 100;
		};
	};
	class r_headlight : l_headlight
	{
		position = "r_headlight_pos";
		direction = "r_headlight_dir";
		hitpoint = "r_headlight_hp";
		selection = "r_headlight";
	};

	class l_cargolight : l_headlight
	{
		position = "l_cargolight_pos";
		direction = "l_cargolight_dir";
		hitpoint = "l_cargolight_hp";
		selection = "l_cargolight";
		intensity = 0.5;
		useFlare = false;
		innerAngle = 25;
		outerAngle = 85;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 5;
			hardLimitEnd = 20;
		};
	};

	class r_cargolight : l_cargolight
	{
		position = "r_cargolight_pos";
		direction = "r_cargolight_dir";
		hitpoint = "r_cargolight_hp";
		selection = "r_cargolight";
	};

};