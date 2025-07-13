#pragma once
#ifdef RACEDLL_EXPORTS
#define RACEDLL_API __declspec(dllexport)
#else
#define RACEDLL_API __declspec(dllimport)
#endif

namespace  vehf
{
	void RACEDLL_API ListContestants();
}