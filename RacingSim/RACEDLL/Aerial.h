#include "Base.h"

#pragma once

#ifdef RACEDLL_EXPORTS
#define RACEDLL_API __declspec(dllexport)
#else
#define RACEDLL_API __declspec(dllimport)
#endif


namespace veh
{
	//Covrik
	class RACEDLL_API Carpet : public Base  //Зачем перед название класса нужно писать RACEDLL_API?
	{
	public:
		Carpet(std::string name, short speed, double coef);
		virtual void TimeCalc(double length);
	};


	//orel
	class RACEDLL_API Eagle : public Carpet
	{
	public:
		Eagle(int a); //int a ничего не делает, но без этого костыля, невозможно вызывать методы
		void TimeCalc(double length) override;
	};


	//metla
	class RACEDLL_API Broom: public Carpet
	{
	public:
		Broom(int a);
		void TimeCalc(double length) override;
	};
}