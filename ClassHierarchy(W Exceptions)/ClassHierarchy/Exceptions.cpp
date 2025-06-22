#include "Exceptions.h"
#include <iostream>


void wrongsides::what() {
	std::cout << "Неверное количество сторон";
}

void wronganglesTRI::what() {
	std::cout << "Сумма углов не равна 180";
}

void wronganglesREC::what() {
	std::cout << "Сумма углов не равна 360";
}

void WrongC::what() {
	std::cout << "Угол C не равен 90";
}

void acnoteq::what() {
	std::cout << "Cтороны а и с не равны";
}

void ACnoteq::what() {
	std::cout << "Углы A и C не равны";
}

void ANGSnoteq::what() {
	std::cout << "Углы не равны между собой";
}

void sidesnoteq::what() {
	std::cout << "Стороны не равны между собой";
}

void OneBadAngle::what() {
	std::cout << "Как минимум 1 угол не равен 90";
}

void bdnoteq::what() {
	std::cout << "Стороны b и d не равны между собой";
}

void BDnoteq::what() {
	std::cout << "Углы B и D не равны";
}