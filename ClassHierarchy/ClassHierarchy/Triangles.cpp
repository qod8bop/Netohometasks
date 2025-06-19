#include "Triangles.h"
#include <iostream>




	//Basetri
	 void Basetri::output()
	{
		std::cout << name << ": \n";
		std::cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	Basetri::Basetri(int A, int B, int C, int a, int b, int c) :Figure(A, B, C, 0, a, b, c, 0) {}




	//PRtri
	PRtri::PRtri(int A, int B, int a, int b, int c) : Basetri(A, B, 90, a, b, c) {}

	void PRtri::output()  
	{
		std::cout << name << ": \n";
		std::cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}




	//RBtri
	RBtri::RBtri(int A, int B, int a, int b) : Basetri(A, B, A, a, b, a) {}

	void RBtri::output()  {
		std::cout << name << ": \n";
		std::cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}





	//RNSTtri
	RNSTtri::RNSTtri(int A) : RBtri(A, A, 60, 60) {}

	void RNSTtri::output(){
		std::cout << name << ": \n";
		std::cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}
