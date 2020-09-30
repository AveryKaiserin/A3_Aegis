class NATO2035
{
	text = "NATO";
	textShort = "NATO";
	texture = "flag_NATO";
	insignia = "\A3\missions_f\data\orbat\NATO_ca.paa";
	colorBackground[] = {0,0,0,1};
	commander = "NATOMen";
	commanderRank = "GENERAL";
	tags[] = {BIS,Country,USArmy,HAF,Miller,Kerry,Hutchison,Larkin};

	#define FLAG(STATE)\
		class ##STATE##\
		{\
			text = ##STATE##;\
			textShort = ##STATE##;\
			texture = flag_##STATE##;\
			tags[] = {BIS,Country};\
		};

	FLAG(Belgium)
	FLAG(Canada)
	FLAG(Catalonia)
	FLAG(Croatia)
	FLAG(CzechRepublic)
	FLAG(Denmark)
	FLAG(France)
	FLAG(Georgia)
	FLAG(Germany)
	class Greece
	{
		text = "Greece";
		textShort = "Greece";
		texture = "flag_Greece";
		tags[] = {BIS,Country,HAF};

		#include "BLUFOR_HellenicArmy.hpp"
	};
	FLAG(Hungary)
	FLAG(Iceland)
	FLAG(Italy)
	FLAG(Luxembourg)
	FLAG(Netherlands)
	FLAG(Norway)
	FLAG(Poland)
	FLAG(Portugal)
	FLAG(Slovakia)
	FLAG(Slovenia)
	FLAG(Spain)
	FLAG(UK)
	class USA
	{
		text = "United States of America";
		textShort = "USA";
		texture = "flag_USA";
		tags[] = {BIS,Country,USArmy,Miller,Kerry,Hutchison,Larkin};

		#include "BLUFOR_USArmy.hpp"
	};
	#include "BLUFOR_SHAPE.hpp"
};