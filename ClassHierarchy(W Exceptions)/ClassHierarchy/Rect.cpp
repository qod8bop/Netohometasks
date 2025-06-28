#include <iostream>
#include "BaseFig.h"
#include "Rect.h"
#include "Exceptions.h"


	//Baserec
	 void Baserec::output()
	{
		 std::cout << name << ": \n";
		 std::cout << sides << std::endl;
		 std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		 std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	 Baserec::Baserec(int A, int B, int C, int D, int a, int b, int c, int d) :Figure(A, B, C, D, a, b, c, d)
	 {
		 if (sides != 4) {
			 throw WrongFigureException("Неверное количество сторон");
		 }


		 if ((A + B + C + D) != 360) {
			 throw WrongFigureException("Сумма углов не равна 360");
		 }

	 }



	 //Rectangle
	void Rectang::output()
	{
		std::cout << name << ": \n";
		std::cout << sides << std::endl;
		std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	Rectang::Rectang(int A, int B, int C, int D, int a, int b, int c, int d) :Baserec(A, B, C, D, a, b, c, d)
	{
		if (a != c ){
			throw WrongFigureException("стороны а и с не равны");
			}
		if (b != d) {
			throw WrongFigureException("стороны b и d не равны");
		}
		if (A != B || B != C || C != D) {
			throw WrongFigureException("Углы не равны");
		}
	
	}



	//Square
	void Square::output() 
	{
		std::cout << name << ": \n";
		std::cout << sides << std::endl;
		std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	Square::Square(int A, int B, int C, int D, int a, int b, int c, int d) :Rectang(A, B, C, D, a, b, c, d) {}


	//Paralleogram
	void Pargm::output() 
	{
		std::cout << name << ": \n";
		std::cout << sides << std::endl;
		std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	Pargm::Pargm(int A, int B, int C, int D, int a, int b, int c, int d) : Baserec(A, B, A, B, a, b, a, b)
	{
		if (a != c) {
			throw WrongFigureException("стороны а и с не равны");
		}
		if (b != d) {
			throw WrongFigureException("стороны b и d не равны");
		}
		if (A != C) {
			throw WrongFigureException("Углы А и С не равный");
		}
		if (B != D) {
			throw WrongFigureException("Углы B и D не равны");
		}

	}



	//Romb

	 void Romb::output()
	{
		 std::cout << name << ": \n";
		 std::cout << sides << std::endl;
		 std::cout << "Углы: " << "A = " << A << "  B= " << B << "  C= " << C << std::endl;
		 std::cout << "Стороны: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	 Romb::Romb(int A, int B, int C, int D, int a, int b, int c, int d) : Pargm(A, B, C, D, a, b, c, d)
	 {
	 
	 
	 }
