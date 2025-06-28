#include <iostream>
#include "Print_info.h"
#include "Basefig.h"
#include "Exceptions.h"

int main() {
	Figure* ptr = nullptr;
	try {
		Print_info(ptr);
	}

	catch(WrongFigureException& egor)
	{
		std::cerr << egor.What();
	}

	std::cout << std::endl;

	return 0;
}