/*
- Soldiers, civilians, and such
- Placed in CfgVehicles
*/

// BLUFOR smoke shells and grenades
#define SMOKESHELLS_BLUFOR \
SmokeShellGreen, \
SmokeShellBlue, \
SmokeShellOrange

#define SMOKEGRENADES_BLUFOR \
1Rnd_SmokeBlue_Grenade_shell, \
1Rnd_SmokeGreen_Grenade_shell, \
1Rnd_SmokeOrange_Grenade_shell

#define SMOKESHELLS_BAG_BLUFOR \
mag_xx(SmokeShellGreen,1); \
mag_xx(SmokeShellBlue,1); \
mag_xx(SmokeShellOrange,1);

// OPFOR smoke shells and grenades
#define SMOKESHELLS_OPFOR \
SmokeShellRed, \
SmokeShellOrange, \
SmokeShellYellow

#define SMOKEGRENADES_OPFOR \
1Rnd_SmokeRed_Grenade_shell, \
1Rnd_SmokeOrange_Grenade_shell, \
1Rnd_SmokeYellow_Grenade_shell

#define SMOKESHELLS_BAG_OPFOR \
mag_xx(SmokeShellRed,1); \
mag_xx(SmokeShellYellow,1); \
mag_xx(SmokeShellOrange,1);

// Independent smoke shells and grenades
#define SMOKESHELLS_INDEP \
SmokeShellGreen, \
SmokeShellOrange, \
SmokeShellPurple

#define SMOKEGRENADES_INDEP \
1Rnd_SmokeGreen_Grenade_shell, \
1Rnd_SmokeOrange_Grenade_shell, \
1Rnd_SmokePurple_Grenade_shell

#define SMOKESHELLS_BAG_INDEP \
mag_xx(SmokeShellGreen,1); \
mag_xx(SmokeShellOrange,1); \
mag_xx(SmokeShellPurple,1);

// Sideless smoke shells and grenades
#define SMOKESHELLS_DEFAULT \
SmokeShellGreen, \
SmokeShellRed, \
SmokeShellBlue

#define SMOKEGRENADES_DEFAULT \
1Rnd_SmokeGreen_Grenade_shell, \
1Rnd_SmokeRed_Grenade_shell, \
1Rnd_SmokeBlue_Grenade_shell

#define SMOKESHELLS_BAG_INDEP \
mag_xx(SmokeShellGreen,1); \
mag_xx(SmokeShellRed,1); \
mag_xx(SmokeShellBlue,1);

// Medic smoke shells
#define SMOKESHELLS_MEDIC \
SmokeShellRed, \
SmokeShellBlue, \
SmokeShellOrange

#define SMOKESHELLS_BAG_MEDIC \
mag_xx(SmokeShellRed,1); \
mag_xx(SmokeShellBlue,1); \
mag_xx(SmokeShellOrange,1);



#define INJURY_PERSONALITY_MATERIALS \
"A3\Characters_F\Common\Data\basicbody.rvmat", \
"A3\Characters_F\Common\Data\basicbody_injury.rvmat", \
"A3\Characters_F\Common\Data\basicbody_injury.rvmat", \
\
"A3\Characters_F\Heads\Data\hl_white.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_injury.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_injury.rvmat", \
\
"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat", \
\
"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat", \
\
"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat", \
"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", \
"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat", \
\
"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat", \
\
"A3\Characters_F\Heads\Data\hl_white_old.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", \
"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat", \
\
"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat", \
"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", \
"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat", \
\
"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat", \
"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", \
"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat", \
\
"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat", \
"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat", \
"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"



#define LOAD(weight,capacity) \
maximumLoad = capacity; \
mass = weight;