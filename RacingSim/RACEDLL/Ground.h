#include "Base.h"

#pragma once

#ifdef RACEDLL_EXPORTS
#define RACEDLL_API __declspec(dllexport)
#else
#define RACEDLL_API __declspec(dllimport)
#endif


namespace veh
{
	//Camel
	class RACEDLL_API Camel : public Base
	{
	public:
		Camel(std::string name, short speed, short TTR);
		void TimeCalc(double length) override;
	};



	//Bistriy Camel
	class RACEDLL_API FCamel : public Camel
	{
	public:
		FCamel(int a); //int a ничего не делает, но без этого костыля, невозможно вызывать методы. Почему-то
		virtual void TimeCalc(double length) override;
	};


	 

	//Centaur
	class RACEDLL_API Centaur : public Camel
	{
	public:
		Centaur(int a); //int a ничего не делает, но без этого костыля, невозможно вызывать методы
		virtual void TimeCalc(double length) override;
	};



	//Hali Gali Sapogi Sandali
	class RACEDLL_API Tapki : public Camel
	{
	public:
		Tapki(int a);
		virtual void TimeCalc(double length) override;
	};
}