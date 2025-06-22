#include "BaseFig.h"
#include <iostream>



	void Figure::output()
	{
		std::cout << name << ": \n";
		std::cout << sides << std::endl;
		std::cout << "Углы: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << std::endl;
		std::cout << "Стороны: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}



	Figure::Figure(int A, int B, int C, int D, int a, int b, int c, int d) {
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
