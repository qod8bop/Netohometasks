#include "Base.h"
#include "Ground.h"
#include "Aerial.h"


#pragma once
#ifdef RACEDLL_EXPORTS
#define RACEDLL_API __declspec(dllexport)
#else
#define RACEDLL_API __declspec(dllimport)
#endif

namespace  vehf
{
	void RACEDLL_API ListContestants();
	void RACEDLL_API SortContestants(veh::Base** RaceList, short pl,double length);
}