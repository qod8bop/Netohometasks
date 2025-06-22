#pragma once

#include "BaseFig.h"
#include <iostream>

class Baserec : public Figure {
private:
	std::string name = "Четырёхугольник";
protected:
	int sides = 4;
public:
	virtual void output() override;

	Baserec(int A, int B, int C, int D, int a, int b, int c, int d); 
};




class Rectang : public Baserec {
private:
	std::string name = "Прямоугольник";
public:
	virtual void output() override;

	Rectang(int A, int B, int C, int D, int a, int b, int c, int d);
};




class Square : public Rectang {
private:
	std::string name = "Квадрат";
public:
	void output() override;

	Square(int A, int B, int C, int D, int a, int b, int c, int d);
};



class Pargm : public Baserec {
private:
	std::string name = "Параллелограм";
public:
	virtual void output() override;

	Pargm(int A, int B, int C, int D, int a, int b, int c, int d);
};




class Romb : public Pargm {
private:
	std::string name = "Ромб";
public:
	virtual void output() override;

	Romb(int A, int B, int C, int D, int a, int b, int c, int d);
};
