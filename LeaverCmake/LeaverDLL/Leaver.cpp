#include <iostream>
#include "Leaver.h"

void lvr::Leaver::leave()
{
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "\n До свидания, " << name << "!";
}