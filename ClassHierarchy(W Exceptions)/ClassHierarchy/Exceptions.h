#pragma once
#include <iostream>
#include <cstring>

class WrongFigureException : public std::exception {  
private:
	std::string msg;
public:
	WrongFigureException(std::string msg) ;

	std::string what();
};