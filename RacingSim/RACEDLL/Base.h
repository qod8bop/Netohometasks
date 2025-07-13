#pragma once
#include <iostream>

#ifdef RACEDLL_EXPORTS
#define RACEDLL_API __declspec(dllexport)
#else
#define RACEDLL_API __declspec(dllimport)
#endif


namespace veh
{
	enum typ {null = 0,ground = 1, aerial = 2};

	class RACEDLL_API Base
	{
	protected:
		typ type = null;
		short speed = 0;
		short TimeToRest = 0;
		double coef = 0;
	public:
		std::string name = "Base";
		double time = 0;

		Base();
		Base(std::string name, typ type, short speed, short TTR, short coef);
		void ListInfo();
		void ClearTime();
	};
}