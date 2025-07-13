#include "Base.h"
#include "Ground.h"
#include "Aerial.h"
#include "Funcs.h"
#include <iostream>

int main()
{
	int pl = 0; //место транспорта в массиве
	int length;
	std::cout << "Добро пожаловать в гоночный симулятор" << std::endl;
	
	while (true)
	{
		short choice;
		short RaceType;
		std::cout << "1.  Гонка для наземного транспорта" << std::endl;
		std::cout << "2.  Гонка для воздушного транспорта" << std::endl;
		std::cout << "3.  Гонка для наземного и воздушного транспорта" << std::endl;

		while (true)
		{
			std::cout << "Выберите тип гонки: ";
			std::cin >> choice;
			std::cout << std::endl;

			if (choice < 1 || choice > 3)
			{
				std::cout << "Неверный выбор" << std::endl;
				continue;
			}
			RaceType = choice;

			break;
		}
		std::cout << std::endl;
		


		while(true)
		{
			std::cout << "Введите длину дистанции (Должна быть положительна): ";
			std::cin >> length;
			std::cout << std::endl;

			if (length < 0) 
			{
				std::cout << "Длина должна быть положительна" << std::endl;
				continue;
			}
			break;
		}
		std::cout << std::endl;
		std::cout << std::endl;



		std::cout << "Должно быть зарегестрировано хотя бы 2 транспортных средства\n";
		while(true)
		{
			std::cout << "1. Зарегестрировать транспорт\n";
			std::cout << "Выберите действие: ";
			std::cin >> choice;
			std::cout << std::endl;

			if (choice != 1) 
			{
				std::cout << "Неверный выбор\n";
				continue;
			}
			break;
		}
		std::cout << std::endl;
		std::cout << std::endl;

		veh::Base* RaceList = new veh::Base[8];

		while (true)
		{
			bool BootsPicked = false;
			bool BroomPicked = false;
			bool CamelPicked = false;
			bool CentuPicked = false;
			bool EaglePicked = false;
			bool FCamePicked = false;
			bool CarpePicked = false;

			switch (RaceType)
			{
			case 1:
				std::cout << "Гонка для наземного транспорта. ";
				break;
			case 2:
				std::cout << "Гонка для воздушного транспорта. ";
				break;
			case 3:
				std::cout << "Гонка для наземного и воздушного транспорта. ";
				break;
			default:
				std::cerr << "Неизвестная ошибка. ";
				break;
			}

			std::cout << "Дистанция: " << length << std::endl;
			std::cout << "Зарегестрированные участники: ";
			for(int i=0; i<pl; i++)
			{
			std::cout << RaceList[pl].name;
			if(i != pl-1){ std::cout << ", "; }
			}
			vehf::ListContestants();
			std::cin >> choice;

			
			
			if(choice == 1 && BootsPicked == false)
			{
				veh::Tapki boots(1);
				RaceList[pl] = boots;
				pl++;
			}
			if (choice == 2 && BroomPicked == false)
			{
				veh::Broom broom(1);
				RaceList[pl] = broom;
				pl++;
			}
			if (choice == 3 && CamelPicked == false)
			{
				veh::Camel camel("Camel", 10, 30);
				RaceList[pl] = camel;
				pl++;
			}
			if (choice == 4 && CentuPicked == false)
			{
				veh::Centaur cent(1);
				RaceList[pl] = cent;
				pl++;
			}
			if (choice == 5 && EaglePicked == false)
			{
				veh::Eagle eagle(1);
				RaceList[pl] = eagle;
				pl++;
			}
			if (choice == 6 && FCamePicked == false)
			{
				veh::FCamel fcamel(1);
				RaceList[pl] = fcamel;
				pl++;
			}
			if (choice == 7 && CarpePicked == false)
			{
				veh::Carpet carpet("Magic carpet", 10, 0);
				RaceList[pl] = carpet;
				pl++;
			}
			else if (choice>8 || choice<1) { std::cout << "Неверный выбор\n"; }
			std::cout << std::endl;
			
		}
	}
}


