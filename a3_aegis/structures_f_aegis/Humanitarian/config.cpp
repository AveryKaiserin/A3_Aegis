////////////////////////////////////////////////////////////////////
//DeRap: structures_f_orange\Humanitarian\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sun Oct 25 17:56:01 2020 : 'file' last modified on Thu Nov 21 13:26:32 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(13 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class A3_Structures_F_Orange_Humanitarian
	{
		addonRootClass = "A3_Structures_F_Orange";
		requiredAddons[] = {"A3_Structures_F_Orange"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
