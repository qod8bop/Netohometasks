#pragma once

#include "BaseFig.h"
#include <iostream>
#include <cstring>



class Basetri : public Figure {
private:
	std::string name = "Треугольник";
protected:
	int sides = 3;
public:

	virtual void output() override;



	Basetri(int A, int B, int C, int a, int b, int c);
};



class PRtri : public Basetri {
private:
	std::string name = "Прямоугольный треугольник";
public:
	PRtri(int A, int B, int C, int a, int b, int c);

	void output() override;
};





class RBtri : public Basetri {
private:
	std::string name = "Равнобедренный треугольник";
public:
	RBtri(int A, int B, int C, int a, int b, int c);
	
	void output() override;
};




class RNSTtri : public RBtri {
private:
	std::string name = "Равносторонний треугольник";
public:
	RNSTtri(int A, int B, int C, int a, int b, int c);

	void output() override;
};