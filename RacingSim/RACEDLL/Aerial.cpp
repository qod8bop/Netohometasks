#include "Base.h"
#include "Aerial.h"

namespace veh
{
	//Covrik
	Carpet::Carpet(std::string name, short speed, double coef) :Base("Magic Carpet", veh::aerial, 10, 0, 0) {};

	void Carpet::TimeCalc(double length)
	{
		if (length < 1000) { coef = 0; }
		else if (length < 5000 && length >= 1000) { coef = 3; }
		else if (length < 10000 && length >= 5000) { coef = 10; }
		else { coef = 5; }

		length *= ((100 - coef) / 100);
		
		time = length / speed;
	}




	//Orel 
	Eagle::Eagle(int a) :Carpet("Eagle", 8, 6) {};

	void Eagle::TimeCalc(double length)
	{
		length *= ((100 - coef) / 100);

		time = length / speed;
	}



	//Venik
	Broom::Broom(int a) :Carpet("Broom", 20, 0) {};

	void Broom::TimeCalc(double length)
	{
		coef = static_cast<int>(length / 1000);
		std::cout << coef;
		
		length *= ((100 - coef) / 100);

		time = length / speed;
	}
}