#pragma once
#include <iostream>
#include <cstring>

class WrongFigureException {  // Здравствуйте, а можете, пожалуйста объяснить зачем нужно создавать этот класс как наследника от std::exception?
private:
	std::string msg;
public:
	WrongFigureException(std::string msg) ;

	std::string What();
};