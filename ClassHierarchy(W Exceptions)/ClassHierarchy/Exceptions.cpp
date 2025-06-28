#include "Exceptions.h"
#include <iostream>





WrongFigureException::WrongFigureException(std::string msg)
{
	this->msg = msg;
}

std::string WrongFigureException::What()
{
	return msg;
}

