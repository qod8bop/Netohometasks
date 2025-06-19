#include <iostream>
#include "BaseFig.h"
#include "Rect.h"


	//Baserec
	 void Baserec::output()
	{
		 std::cout << name << ": \n";
		 std::cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << std::endl;
		 std::cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	 Baserec::Baserec(int A, int B, int C, int D, int a, int b, int c, int d) :Figure(A, B, C, D, a, b, c, d){}



	 //Rectangle
	void Rectang::output()
	{
		std::cout << name << ": \n";
		std::cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << std::endl;
		std::cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Rectang::Rectang(int a, int b) :Baserec(90, 90, 90, 90, a, b, a, b) {}



	//Square
	void Square::output() 
	{
		std::cout << name << ": \n";
		std::cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << std::endl;
		std::cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Square::Square(int a) :Rectang(a, a) {}


	//Paralleogram
	void Pargm::output() 
	{
		std::cout << name << ": \n";
		std::cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << std::endl;
		std::cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Pargm::Pargm(int A, int B, int a, int b) : Baserec(A, B, A, B, a, b, a, b) {}



	//Romb

	 void Romb::output()
	{
		 std::cout << name << ": \n";
		 std::cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << std::endl;
		 std::cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	 Romb::Romb(int A, int B, int a) : Pargm(A, B, a, a) {}
