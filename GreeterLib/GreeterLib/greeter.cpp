#include <iostream>
#include "greeter.h"

void grtr::Greeter::greet() 
{
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "\n Здравствуйте, " << name << "!";
}