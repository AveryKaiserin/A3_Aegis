class CfgORBAT
{
	text = "";
	texture = "\A3\ui_f\data\logos\arma3_ca.paa";
	color[] = {1,1,1,1};
	size = "";

	class BLUFOR
	{
		text = "BLUFOR";
		textShort = "BLUFOR";
		type = "Unknown";
		side = "West";
		color = "colorBLUFOR";

		#include "BLUFOR_NATO.hpp"

	};
	class OPFOR
	{
		text = "OPFOR";
		textShort = "OPFOR";
		type = "Unknown";
		textureSize = 0.7;
		size = "";
		side = "East";
		class Iran
		{
			text = "Iran";
			textShort = "Iran";
			texture = "flag_iran";
			tags[] = {BIS,IAF};

			class IAF
			{
				text = "Iranian Armed Forces";
				textShort = "IAF";
				texture = "flag_iranArmy";
				insignia = "\A3\missions_f\data\orbat\IAF_ca.paa";
				commander = "TakistaniMen";
				commanderRank = "GENERAL";
				tags[] = {BIS,IAF};

				#include "OPFOR_IAF.hpp"
			};
		};
	};
};