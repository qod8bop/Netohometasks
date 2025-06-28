#include "Triangles.h"
#include "Exceptions.h"
#include <iostream>




	//Basetri
	 void Basetri::output()
	{
		 std::cout << name << ": \n";
		 std::cout << sides << std::endl;
		 std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		 std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}


	Basetri::Basetri(int A, int B, int C, int a, int b, int c) :Figure(A, B, C, 0, a, b, c, 0) 
	{
			if (sides != 3) {
				throw WrongFigureException("Неверное количество сторон");
			}


			if ((A + B + C) != 180) {
				throw WrongFigureException("Сумма углов не равна 180");
			}
	}




	//PRtri
	PRtri::PRtri(int A, int B, int C, int a, int b, int c) :Basetri(A, B, C, a, b, c) 
	{
		if (C != 90) {
			throw WrongFigureException("Угол С не равен 90");
		}
	}

	void PRtri::output()  
	{
		std::cout << name << ": \n";
		std::cout << sides << std::endl;
		std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}




	//RBtri
	RBtri::RBtri(int A, int B, int C, int a, int b,int c) : Basetri(A, B, C, a, b, c) 
	{
		if (A != C) {
			throw WrongFigureException("Углы A и C не равны");
		}

		if (a != c) {
			throw WrongFigureException("Стороны а и с не равны");
		}
	}

	void RBtri::output()  {
		std::cout << name << ": \n";
		std::cout << sides << std::endl;
		std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}





	//RNSTtri
	RNSTtri::RNSTtri(int A, int B, int C, int a, int b, int c) : RBtri(A, B, C, a, b, c)
	{
		if (a!=b && b!=c) {
			throw WrongFigureException("Стороны не равны между собой");
		}

		if (A != B && B != C) {
			throw WrongFigureException("Стороны не равны между собой");
		}
	
	}

	void RNSTtri::output(){
		std::cout << name << ": \n";
		std::cout << sides << std::endl;
		std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}
