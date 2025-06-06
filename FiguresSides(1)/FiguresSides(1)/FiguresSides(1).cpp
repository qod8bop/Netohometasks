#include <iostream>

using namespace std;

class Figure {

protected:
	string name;
	int sides;
public:
	Figure() {
		name = "Фигура";
		sides = 0;
	}
	void output(){
		cout << name << ": " << sides;
	}
};


class Triangle :public Figure {	
	public:
		Triangle () {
			name = "Треугольник";
			sides = 3;	
		}
};


class Rectangle :public Figure {
	public:
		Rectangle() {
			name = "Четырёхугольник";
			sides = 4;
		}
};



int main() {

	setlocale(LC_ALL, "RU");

	Figure figura;
	figura.output();
	cout << "\n";

	Triangle treug;
	treug.output();
	cout << "\n";

	Rectangle quad;
	quad.output();
	


	return 0;
}