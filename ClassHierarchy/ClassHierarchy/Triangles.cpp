#include"Triangles.h"
#include<iostream>

using namespace std;


	//Basetri
	 void Basetri::output()
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	Basetri::Basetri(int A, int B, int C, int a, int b, int c) :Figure(A, B, C, 0, a, b, c, 0) {
		this->A = A;
		this->B = B;
		this->C = C;

		this->a = a;
		this->b = b;
		this->c = c;
	}




	//PRtri
	PRtri::PRtri(int A, int B, int a, int b, int c) : Basetri(A, B, 90, a, b, c) {
		this->A = A;
		this->B = B;
		this->C = 90;

		this->a = a;
		this->b = b;
		this->c = c;
	}
	void PRtri::output()  
	{
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}




	//RBtri
		RBtri::RBtri(int A, int B, int a, int b) : Basetri(A, B, A, a, b, a) {
			this->A = A;
			this->B = B;
			this->C = A;

			this->a = a;
			this->b = b;
			this->c = a;
	}
	void RBtri::output()  {
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}





	//RNSTtri
	RNSTtri::RNSTtri(int A) : RBtri(A, A, 60, 60) {
		this->A = A;
		this->B = A;
		this->C = A;

		this->a = 60;
		this->b = 60;
		this->c = 60;
	}
	void RNSTtri::output(){
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}
