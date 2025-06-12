#include<iostream>

using namespace std;



class Figure {
private:
	string name = "Figure";
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
	string pravilnost = "nepravilnaya";


public:
	virtual void pravcheck(){
		if (A == B && B == C && C == D && a == b && b == c && c == d) {
			pravilnost = "pravilnaya";
		}
	}

	virtual void output()
	{
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
	}

	Figure(int A, int B, int C, int D, int a, int b, int c, int d) {
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
};

class Basetri : public Figure {
private:
	string name = "Treug";

protected:
	int sides = 3;
	string pravilnost = "nepravilnaya";
public:

	void pravcheck()override {
		if (A == B && B == C && a == b && b == c) {
			pravilnost = "pravilnaya";
		}
	}

	virtual void output() override
	{
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}

	Basetri(int A, int B, int C, int a, int b, int c) :Figure(A, B, C, 0, a, b, c, 0) {
		this->A = A;
		this->B = B;
		this->C = C;

		this->a = a;
		this->b = b;
		this->c = c;


	}

};

class PRtri : public Basetri {
private:
	string name = "PR treug";
public:
	PRtri(int A, int B, int a, int b, int c) : Basetri(A, B, 90, a, b, c) {
		this->A = A;
		this->B = B;
		this->C = 90;

		this->a = a;
		this->b = b;
		this->c = c;
	}
	void output() override {
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}
};

class RBtri : public Basetri {
private:
	string name = "RB treug";
public:
	RBtri(int A, int B, int a, int b) : Basetri(A, B, A, a, b, a) {
		this->A = A;
		this->B = B;
		this->C = A;

		this->a = a;
		this->b = b;
		this->c = a;
	}
	void output() override {
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}
};

class RNSTtri : public RBtri {
private:
	string name = "Ravnostor treug";
public:
	RNSTtri(int A) : RBtri(A, A, 60, 60) {
		this->A = A;
		this->B = A;
		this->C = A;

		this->a = 60;
		this->b = 60;
		this->c = 60;
	}
	void output() override {
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;
	}
};

class Baserec : public Figure {
private:
	string name = "Baserec";
protected:
	string pravilnost = "nepravilnaya";
	int sides = 4;
public:

	void pravcheck() override {
		if (A == B && B == C && C == D && a == b && b == c && c == d) {
			pravilnost = "pravilnaya";
		}
	}

	virtual void output() override
	{
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Baserec(int A, int B, int C, int D, int a, int b, int c, int d) :Figure(A, B, C, D, a, b, c, d) {
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;


	}
};

class Rectang : public Baserec {
private:
	string name = "Rectangle";
public:
	virtual void output() override
	{
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Rectang(int a, int b) :Baserec(90, 90, 90, 90, a, b, a, b) {
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;

		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
	}
};

class Square : public Rectang {
private:
	string name = "Square";
public:
	void output() override
	{
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Square(int a) :Rectang(a, a) {
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;

		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
	}
};

class Pargm : public Baserec {
private:
	string name = "Pargm";
public:
	virtual void output() override
	{
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Pargm(int A, int B, int a, int b) : Baserec(A, B, A, B, a, b, a, b) {
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;

		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
	}
};

class Romb : public Pargm {
private:
	string name = "Romb";
public:
	virtual void output() override
	{
		cout << name << ": \n";
		cout << "Sides: " << sides << endl;
		cout << pravilnost << endl;
		cout << "Angles: " << "A = " << A << "  B = " << B << "  C = " << C << "  D = " << D << endl;
		cout << "Sides: " << "a = " << a << "  b = " << b << "  c = " << c << "  d = " << d;
	}

	Romb(int A, int B, int a) : Pargm(A, B, a, a) {
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;

		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
	}
};



void Print_info(Figure* ptr) {
	Figure figura(0,0,0,0,0,0,0,0);
	figura.pravcheck();
	figura.output();
	cout << endl << endl << endl;

	Basetri treug(120, 40, 20, 6, 2, 1);
	ptr = &treug;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl;

	PRtri prtreug(30, 60, 4, 2, 8);
	ptr = &prtreug;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl;

	RBtri rbtreug(50, 80, 4, 6);
	ptr = &rbtreug;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl;

	RNSTtri rnstreug(6);
	ptr = &rnstreug;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl<<endl<<endl;

	Baserec Cheug(30, 40, 130, 130, 3, 4, 13, 13);
	ptr = &Cheug;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl;

	Rectang Pryamik(3, 4);
	ptr = &Pryamik;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl;

	Pargm parich(110, 70, 11, 7);
	ptr = &parich;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl;

	Romb romb(60, 120, 5);
	ptr = &romb;
	ptr->pravcheck();
	ptr->output();
	cout << endl << endl;

	Square kavdrat(4);
	ptr = &kavdrat;
	ptr->pravcheck();
	ptr->output();
}

int main() {
	Figure* obj = nullptr;

	Print_info(obj);

	return 0;
}