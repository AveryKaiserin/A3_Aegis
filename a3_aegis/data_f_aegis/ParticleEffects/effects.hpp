#define EXPLOSION_REFRACT(a) \
	class RefractExp \
	{ \
		simulation = particles; \
		type = ##a##; \
		position[] = {0,0,0}; \
		intensity = 1; \
		interval = 3*1; \
		lifeTime = 1.0; \
	};

// Explosion refractions, originally by Taro with some minor edits
class IEDMineBigExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class IEDMineSmallExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class SencondaryExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineNondirectionalExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class MineNondirectionalExplosionSmall
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MineUnderwaterExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class MineUnderwaterABExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class MineUnderwaterPDMExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class GrenadeExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class MortarExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class ExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class BasicAmmoExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ATMissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class AAMissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class MineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ATMineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class BoundingMineExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class DirectionalMineExplosion 
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class DirectionalMineExplosionBig
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class ATRocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class HERocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class HEShellExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class ArtyShellExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class BombExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class HeavyBombExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractHuge)
};
class MissileExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class HelicopterExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class HelicopterExplosionEffects2
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class VehicleExplosionEffectsBig
{
    EXPLOSION_REFRACT(ExplosionRefractHuge)
};
class VehicleExplosionEffects
{
    EXPLOSION_REFRACT(ExplosionRefractLarge)
};
class RocketExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractMed)
};
class ExploAmmoExplosion
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
class ExploAmmoExplosionPlaneCAS
{
    EXPLOSION_REFRACT(ExplosionRefractSmall)
};
// Smoke shells - UGL
class GrenadeSmokeWhiteEffect
{
	class SmokeShell
	{
		simulation = particles;
		type = GrenadeSmokeWhite;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShellUW
	{
		simulation = particles;
		type = SmokeShellWhiteUW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = particles;
		type = SmokeShellWhite2UW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class GrenadeSmokeRedEffect: GrenadeSmokeWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShellUW
	{
		simulation = particles;
		type = SmokeShellRedUW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = particles;
		type = SmokeShellRed2UW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class GrenadeSmokeGreenEffect: GrenadeSmokeWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShellUW
	{
		simulation = particles;
		type = SmokeShellGreenUW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = particles;
		type = SmokeShellGreen2UW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class GrenadeSmokeYellowEffect: GrenadeSmokeWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShellUW
	{
		simulation = particles;
		type = SmokeShellYellowUW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = particles;
		type = SmokeShellYellow2UW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class GrenadeSmokePurpleEffect: GrenadeSmokeWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShellUW
	{
		simulation = particles;
		type = SmokeShellPurpleUW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = particles;
		type = SmokeShellPurple2UW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class GrenadeSmokeBlueEffect: GrenadeSmokeWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShellUW
	{
		simulation = particles;
		type = SmokeShellBlueUW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = particles;
		type = SmokeShellBlue2UW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class GrenadeSmokeOrangeEffect: GrenadeSmokeWhiteEffect
{
	class SmokeShell: SmokeShell{};
	class SmokeShellUW
	{
		simulation = particles;
		type = SmokeShellOrangeUW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
	class SmokeShell2UW
	{
		simulation = particles;
		type = SmokeShellOrange2UW;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
// Smoke shells - artillery
/*
class SmokeShellWhiteSmall
{
	class SmokeShellWhite
	{
		simulation = particles;
		type = SmokeShellWhiteSmall;
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
*/
// Smoke dispensers