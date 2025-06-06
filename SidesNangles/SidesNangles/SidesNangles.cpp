#include <iostream>

using namespace std;

class BaseTriangle {
private:
	protected:
		int A;
		int B;
		int C;

		int a;
		int b;
		int c;



	public:
		BaseTriangle* childptr1 = nullptr;
		BaseTriangle* childptr2 = nullptr;
		BaseTriangle* childptr3 = nullptr;

		string name = "BaseTriangle";
		BaseTriangle(int A, int B, int C, int a, int b, int c) {
			this->A = A;
			this->B = B;
			this->C = C;

			this->a = a;
			this->b = b;
			this->c = c;
		}

		void refchildren(BaseTriangle* childptr1, BaseTriangle* childptr2, BaseTriangle* childptr3) {
			this->childptr1 = childptr1;
			this->childptr2 = childptr2;
			this->childptr3 = childptr3;
		}

		void output() {
			cout << name << ": \n";
			cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C << endl;
			cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c;

		}

};


class PrTriangle : public BaseTriangle {
	private:
		int C = 90;
	public:
		string name = "Prtriangle";
		PrTriangle(int A, int B, int a, int b,int c):BaseTriangle(A,B,90,a,b,c) {
			this->A = A;
			this->B = B;

			this->a = a;
			this->b = b;
			this->c = c;
		}
};


class RBTriangle :public BaseTriangle {
	public:
		string name = "RBTriangle";
		RBTriangle(int A, int B, int a, int b) :BaseTriangle(A, B, A, a, b, a) {
			this->A = A;
			this->B = B;
			this->C = A;

			this->a = a;
			this->b = b;
			this->c = a;
		}


};


class RTriangle : public RBTriangle{
	private:
		int A = 60;
		int B = 60;
		int C = 60;
	public:
		string name = "RTriangle";
		RTriangle(int a) :RBTriangle(60, 60, a, a) {
			this->a = a;
			this->b = a;
			this->c = a;
		}
};


void print_info(BaseTriangle* ptr) {			//совсем не понял требование передачи в функцию указателя на БАЗОВЫЙ КЛАСС, поэтому передаю указатель на экземпляр базового класса
	(*ptr).output();
	BaseTriangle* child1 = (*ptr).childptr1;
	BaseTriangle* child2 = (*ptr).childptr2;
	BaseTriangle* child3 = (*ptr).childptr3;
	cout << endl << endl;
	child1->output();						  //Через указатели получилось вывести все поля, кроме имени (почему-то).
	cout << endl << endl;
	child2->output();
	cout << endl << endl;
	child3->output();
	cout << endl << endl;
}



class BaseRec {
private:
protected:
	int A;
	int B;
	int C;
	int D;

	int a;
	int b;
	int c;
	int d;


public:
	BaseRec* childptr1 = nullptr;
	BaseRec* childptr2 = nullptr;
	BaseRec* childptr3 = nullptr;
	BaseRec* childptr4 = nullptr;

	string name = "BaseRec";
	BaseRec(int A, int B, int C,int D, int a, int b, int c, int d) {
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;

		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}

	void refchildren(BaseRec* childptr1, BaseRec* childptr2, BaseRec* childptr3, BaseRec* childptr4) {
		this->childptr1 = childptr1;
		this->childptr2 = childptr2;
		this->childptr3 = childptr3;
		this->childptr4 = childptr4;
	}

	void output() {
		cout << name << ": \n";
		cout << "Angles: " << "A = " << A << "  B= " << B << "  C= " << C <<"  D= " <<D << endl;
		cout << "Sides: " << "a = " << a << "  b= " << b << "  c= " << c << "d= " << d;

	}

};

class Rectangle : public BaseRec {
	protected:
		int A = 90;
		int B = 90;
		int C = 90;
		int D = 90;
	public:
		string name = "Rectangle";	  // Blood electric Кэндзи Сиратори 
		Rectangle(int a, int b) : BaseRec(90, 90, 90, 90, a, b, a, b) {
			this->a = a;
			this->b = b;
			this->c = a;
			this->d = b;
		}


};

class Square : public Rectangle {
public:
	string name = "Square";	   
	Square(int a) : Rectangle(a,a) {
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
	}
};

class Par : public BaseRec {
public:
	string name = "Parallelogram";
	Par(int A, int B, int a, int b) : BaseRec(A, B, A, B, a, b, a, b) {
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

class Romb : public Par{
public:
	string name = "Romb";
	Romb(int A, int B, int a) : Par(A, B, a, a) {
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

void print_info(BaseRec* ptr) {			
	(*ptr).output();
	BaseRec* child1 = (*ptr).childptr1;
	BaseRec* child2 = (*ptr).childptr2;
	BaseRec* child3 = (*ptr).childptr3;
	BaseRec* child4 = (*ptr).childptr4;
	cout << endl << endl;
	child1->output();						  
	cout << endl << endl;
	child2->output();
	cout << endl << endl;
	child3->output();
	cout << endl << endl;
	child4->output();
	cout << endl << endl;
}


int main() {

	BaseTriangle Treug(100, 30, 50, 2, 3, 4);
	PrTriangle   PrTreug(30, 60, 2, 3, 4);
	RBTriangle   RBtreug(30, 120, 4, 6);
	RTriangle	 Rtreug(3);

	Treug.refchildren(&PrTreug, &RBtreug, &Rtreug);

	print_info(&Treug);

	cout << endl << endl;

	BaseRec  chug(95, 85, 115, 65, 3, 4, 5, 6);
	Rectangle rek(3, 5);
	Square   kvad(4);
	Par      parich(85, 95, 3, 4);
	Romb	 rombik(95, 85, 6);

	chug.refchildren(&rek,&kvad, &parich, &rombik);

	print_info(&chug);

	return 0;
}