class SHAPE
{
	text = "SHAPE (Supreme Headquarters Allied Powers Europe)";
	textShort = "SHAPE";
	type = "HQ";
	size = "ArmyGroup";
	side = "West";
	commander = "NATOMen";
	tags[] = {BIS,SHAPE,Miller};

	class JFCNaples
	{
		text = "JFC Naples (Allied Joint Force Command Naples)";
		textShort = "JFC";
		type = "HQ";
		size = "Army";
		side = "West";
		commander = "NATOMen";
		tags[] = {BIS,SHAPE,Miller};

		class CCLandMadrid 
		{
			text = "CC-Land Madrid";
			textShort = "CC-Land";
			type = "HQ";
			size = "Division";
			side = "West";
			commander = "NATOMen";
			tags[] = {BIS,SHAPE,Miller};

			class CTRG
			{
				text = "CTRG (Combat Technology Research Group)";
				textShort = "CTRG";
				type = "Recon";
				size = "Company";
				side = "West";
				commander = "NATOMen";
				commanderRank = "COLONEL";
				tags[] = {BIS,SHAPE,Miller};

				class SecurityTeamA
				{
					text = "Security Team A";
					textShort = "Team A";
					type = "Recon";
					size = "Squad";
					side = "West";
					commander = "Miller";
					commanderRank = "CAPTAIN";
					tags[] = {BIS,SHAPE,Miller};
				};
				class SecurityTeamB
				{
					text = "Security Team B";
					textShort = "Team B";
					type = "Recon";
					size = "Squad";
					side = "West";
					commander = "Illing";
					tags[] = {BIS,SHAPE};
				};
				class ResearchTeam
				{
					text = "Research Team";
					textShort = "R Team";
					type = "Support";
					size = "Squad";
					side = "West";
					commander = "Novak";
					commanderRank = "Major";
					tags[] = {BIS,SHAPE};
				};
			};
		};
	};
};