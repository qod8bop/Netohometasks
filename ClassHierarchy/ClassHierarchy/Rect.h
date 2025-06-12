#pragma once
#include"BaseFig.h"
#include<iostream>

class Baserec : public Figure {
private:
	string name = "Baserec";
public:
	virtual void output() override;

	Baserec(int A, int B, int C, int D, int a, int b, int c, int d); 
};




class Rectang : public Baserec {
private:
	string name = "Rectangle";
public:
	virtual void output() override;

	Rectang(int a, int b); 
};




class Square : public Rectang {
private:
	string name = "Square";
public:
	void output() override;

	Square(int a); 
};



class Pargm : public Baserec {
private:
	string name = "Pargm";
public:
	virtual void output() override;

	Pargm(int A, int B, int a, int b); 
};




class Romb : public Pargm {
private:
	string name = "Romb";
public:
	virtual void output() override;

	Romb(int A, int B, int a); 
};
