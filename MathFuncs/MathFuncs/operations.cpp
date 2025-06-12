#include"MathFuncs.h"
#include <iostream>

double Add(double num1, double num2) {
	std::cout << "num1 + num2 = ";
	return num1 + num2;
}

double Subt(double num1, double num2) {
	std::cout << "num1 - num2 = ";
	return num1 - num2;
}

double Mult(double num1, double num2) {
	std::cout << "num1 * num2 = ";
	return num1 * num2;
}

double Div(double num1, double num2) {
	std::cout << "num1/num2 = ";
	return num1 / num2;
}

double Exp(double num1, double num2) {
	for (int i = 0; i < num2 - 1; i++) {
		num1 *= num1;
	}
	std::cout << "num1 ^ num2 = ";
	return num1;
}