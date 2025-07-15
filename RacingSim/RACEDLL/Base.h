#pragma once
#include <iostream>

#ifdef RACEDLL_EXPORTS
#define RACEDLL_API __declspec(dllexport)
#else
#define RACEDLL_API __declspec(dllimport)
#endif


namespace veh
{

	class RACEDLL_API Base
	{
	protected:
		short speed = 0;
		short TimeToRest = 0;
		double coef = 0;
	public:
		std::string name = "Base";
		double time = 0;

		Base();
		Base(std::string name, short speed, short TTR, short coef);
		void ListInfo();
		void ClearTime();

		virtual void TimeCalc(double length);
	};
}