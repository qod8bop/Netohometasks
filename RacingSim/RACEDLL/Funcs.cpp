#include "Base.h"
#include "Ground.h"
#include "Aerial.h"

#include "Funcs.h"
#include <iostream>

namespace vehf
{
	void ListContestants()
	{
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "1. Ботинки-вездеходы\n";
		std::cout << "2. Метла\n";
		std::cout << "3. Верблюд\n";
		std::cout << "4. Кентавр\n";
		std::cout << "5. Орёл\n";
		std::cout << "6. Верблюд-быстроход\n";
		std::cout << "7. Ковёр-самолёт\n";
		std::cout << "0. Закончить Регистрацию\n";
		std::cout << "Выберите траснпорт или 0 для окончания регистрации: ";

	}




	void SortContestants(veh::Base** Racelist, short pl, double length)
	{
		for(int i=0; i<pl; i++)
		{
			Racelist[i]->TimeCalc(length);
		}
		

		for (int i=1; i<pl; i++)
		{
			while(i > 0 && Racelist[i]->time < Racelist[i - 1]->time)
			{
				Racelist[7] = Racelist[i - 1];
				Racelist[i - 1] = Racelist[i];
				Racelist[i] = Racelist[7];
			}
		}

		for (int i = 0; i < pl; i++)
		{
			std::cout << i+1 << ". " << Racelist[i]->name << "   Время: " << Racelist[i]->time << std::endl;
		}

	}
}