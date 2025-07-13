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
		virtual void TimeCalc(int length);
	};



	//Bistriy Camel
	class RACEDLL_API FCamel : public Camel
	{
	public:
		FCamel(int a); //int a ничего не делает, но без этого костыля, невозможно вызывать методы. Почему-то
		void TimeCalc(int length) override;
	};


	 

	//Centaur
	class RACEDLL_API Centaur : public Camel
	{
	public:
		Centaur(int a); //int a ничего не делает, но без этого костыля, невозможно вызывать методы
		void TimeCalc(int length) override;
	};



	//Hali Gali Sapogi Sandali
	class RACEDLL_API Tapki : public Camel
	{
	public:
		Tapki(int a);
		void TimeCalc(int length) override;
	};
}