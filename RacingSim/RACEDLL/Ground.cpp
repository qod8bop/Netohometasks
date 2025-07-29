#include "Base.h"
#include "Ground.h"

namespace veh 
{
	//Camel
	Camel::Camel(const char* name, short speed, short TTR) :Base(name, speed, TTR, 0) {};

	void Camel::TimeCalc(double length)
	{
		time = length / speed;
		int amount = time / TimeToRest;
		amount--;

		switch(amount)
		{
		case 1:
			time += 5;
			break;
		default:
			time += 5;
			for (int i = 1; i < amount; i++) {
				time += 8;
			}
		}
	}




	//Bistriy Camel
	FCamel::FCamel(int a) :Camel("Быстрый верблюд", 40, 10) {};
	
	void FCamel::TimeCalc(double length)
	{
		time = length / speed;
		int amount = time / TimeToRest;

		switch (amount)
		{
		case 1:
			time += 5;
			break;
		case 2:
			time += 11.5;
			break;
		default:
			time += 11.5;
			for (int i = 2; i < amount; i++) {
				time += 8;
			}
		}
	}




	//Centaur
	Centaur::Centaur(int a) :Camel("Кентавр", 15, 8) {};

	void Centaur::TimeCalc(double length)
	{
		time = length / speed;
		int amount = time / TimeToRest;
		for(int i=0; i< amount; i++)
		{
			time += 2;
		}
	}



	//SAPOGI
	Tapki::Tapki(int a) :Camel("Тапки", 6, 60) {};

	void Tapki::TimeCalc(double length)
	{
		time = length / speed;
		int amount = time / TimeToRest;

		switch (amount)
		{
		case 1:
			time += 10;
			break;
		default:
			time += 10;
			for (int i = 1; i < amount; i++) {
				time += 5;
			}
		}
	}
}