#include <iostream>
#include "Greeter.h"

void grtr::Greeter::greet() 
{
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "\nЗдравствуйте, " << name << "!";
}