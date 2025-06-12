#include"BaseFig.h"
#include<iostream>

using namespace std;

	void Figure::output()
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
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
