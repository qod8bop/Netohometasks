#include<iostream>
#include"BaseFig.h"
#include"Rect.h"
using namespace std;

	//Baserec
	 void Baserec::output()
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	 Baserec::Baserec(int A, int B, int C, int D, int a, int b, int c, int d) :Figure(A, B, C, D, a, b, c, d) {
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}



	 //Rectangle
	void Rectang::output()
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Rectang::Rectang(int a, int b) :Baserec(90, 90, 90, 90, a, b, a, b) {
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;

		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
	}



	//Square
	void Square::output() 
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Square::Square(int a) :Rectang(a, a) {
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;

		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
	}


	//Paralleogram
	void Pargm::output() 
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Pargm::Pargm(int A, int B, int a, int b) : Baserec(A, B, A, B, a, b, a, b) {
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;

		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
	}



	//Romb

	 void Romb::output()
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	 Romb::Romb(int A, int B, int a) : Pargm(A, B, a, a) {
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;

		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
	}
