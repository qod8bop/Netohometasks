#include "Base.h"
#include "Ground.h"
#include "Aerial.h"
#include "Funcs.h"
#include <iostream>

int main()
{
	short pl = 0; //место транспорта в массиве
	double length;
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

		veh::Base** RaceList = new veh::Base*[8];

		bool BootsPicked = false;
		bool BroomPicked = false;
		bool CamelPicked = false;
		bool CentuPicked = false;
		bool EaglePicked = false;
		bool FCamePicked = false;
		bool CarpePicked = false;

		bool Selection = true;

		while (Selection)
		{


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
				std::cout << RaceList[i]->name; //Имена почему-то не отображаются;
			}
			vehf::ListContestants();
			std::cin >> choice;

			
			
			if(choice == 1 && BootsPicked == false && (RaceType == 1 || RaceType == 3))
			{
				veh::Tapki boots(1);
				RaceList[pl] = &boots;
				pl++;
				BootsPicked = true;
			}
			if (choice == 2 && BroomPicked == false && (RaceType == 2 || RaceType == 3))
			{
				veh::Broom broom(1);
				RaceList[pl] = &broom;
				pl++;
				BroomPicked = true;
			}
			if (choice == 3 && CamelPicked == false && (RaceType == 1 || RaceType == 3))
			{
				veh::Camel camel("Camel", 10, 30);
				RaceList[pl] = &camel;
				pl++;
				CamelPicked = true;
			}
			if (choice == 4 && CentuPicked == false && (RaceType == 1 || RaceType == 3))
			{
				veh::Centaur cent(1);
				RaceList[pl] = &cent;
				pl++;
				CentuPicked = true;
			}
			if (choice == 5 && EaglePicked == false && (RaceType == 2 || RaceType == 3))
			{
				veh::Eagle eagle(1);
				RaceList[pl] = &eagle;
				pl++;
				EaglePicked = true;
			}
			if (choice == 6 && FCamePicked == false && (RaceType == 1 || RaceType == 3))
			{
				veh::FCamel fcamel(1);
				RaceList[pl] = &fcamel;
				pl++;
				FCamePicked = true;
			}
			if (choice == 7 && CarpePicked == false && (RaceType == 2 || RaceType == 3))
			{
				veh::Carpet carpet("Magic carpet", 10, 0);
				RaceList[pl] = &carpet;
				pl++;
				CarpePicked = true;
			}
			else { std::cout << "Неверный выбор\n"; } //Это сообщение выводится при любом выборе, кроме 7го. почему-то
			std::cout << std::endl;

			if(choice == 0)
			{
				while (true)
				{

					std::cout << "1. Зарегистрировать транспорт";
					std::cout << "\n2. Начать гонку\n";
					std::cout << "Выберите действие: ";
					std::cin >> choice;
					std::cout << std::endl;

					if (choice < 1 || choice > 2){std::cout << "Неверный выбор\n";}
					if (choice == 1){break;}
					if (choice == 2) 
					{ 
						Selection = false;
						break;
					}
				}
			}
		}


		std::cout << "Реузльтаты гонки: \n";
		vehf::SortContestants(RaceList, pl, length);  //Имена почему-то не отображаются;

		std::cout << std::endl << std::endl << std::endl;
		break;
	}

}


