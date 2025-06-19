#pragma once

#include "BaseFig.h"
#include <iostream>
#include <cstring>



class Basetri : public Figure {
private:
	std::string name = "Treug";
public:

	virtual void output() override;


	Basetri(int A, int B, int C, int a, int b, int c);
};



class PRtri : public Basetri {
private:
	std::string name = "PR treug";
public:
	PRtri(int A, int B, int a, int b, int c);

	void output() override;
};





class RBtri : public Basetri {
private:
	std::string name = "RB treug";
public:
	RBtri(int A, int B, int a, int b);
	
	void output() override;
};




class RNSTtri : public RBtri {
private:
	std::string name = "Ravnostor treug";
public:
	RNSTtri(int A);

	void output() override;
};