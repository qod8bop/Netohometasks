#include <iostream>
#include "MathFuncs.h"
using namespace std;

enum Comands{Exit = 0, Addition, Subtraction, Multiplication, Division, Exponentiation};

int main() {
	int num1;
	int num2;
	int input;


	while (true) {
		cout << "num1: ";
		cin >> num1;
		cout << endl;

		cout << "num2: ";
		cin >> num2;
		cout << endl;


		cout << "1 - Addition(num1 + num2) \n";
		cout << "2 - Subtraction (num1 - num2) \n";
		cout << "3 - Multiplication (num1 * num2) \n";
		cout << "4 - Division (num1 / num2) \n";
		cout << "5 - Exponentiation (num1 ^ num2)\n";
		cout << "0 - Exit\n";

		while (true) {
			cin >> input;

			if (input < 0 || input>5) {
				cout << "Oshibka";
			}
			else { break; }
		}
		
		if (input == 0) {
			break;
		}

		Comands in = static_cast<Comands>(input);
		switch (in) {
		case Addition:
			cout << Add(num1, num2);
			break;
		case Subtraction:
			cout << Subt(num1, num2);
			break;
		case Multiplication:
			cout << Mult(num1, num2);
			break;
		case Division:
			cout << Div(num1, num2);
			break;
		case Exponentiation:
			cout << Exp(num1, num2);
		}

		cout << endl << endl;
	}



	return 0;
}