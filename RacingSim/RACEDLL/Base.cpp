#include <iostream>

#include "Base.h"

namespace veh
{
	Base::Base() {};

	Base::Base(std::string name, typ type, short speed, short TTR, short coef)
	{
		this->name = name;
		this->type = type;
		this->speed = speed;
		TimeToRest = TTR;
		this->coef = coef;
	}

	void Base::ListInfo()
	{
		std::cout << "Name: " << name << std::endl;
		std::cout << "Type: " << type << std::endl;
		std::cout << "Speed: " << speed << std::endl;
		std::cout << "Initial Time to Rest: " << TimeToRest << std::endl;
		std::cout << "coef: " << coef << std::endl;
		std::cout << "time: " << time;
	}

	void Base::ClearTime()
	{
		time = 0;
	}

}