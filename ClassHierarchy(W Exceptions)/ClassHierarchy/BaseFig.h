#pragma once

#include <iostream>


class Figure {
private:
	std::string name;
protected:

	int A;
	int B;
	int C;
	int D;

	int a;
	int b;
	int c;
	int d;

	int sides = 0;
public:
	virtual void output();


	Figure(int A, int B, int C, int D, int a, int b, int c, int d);
};