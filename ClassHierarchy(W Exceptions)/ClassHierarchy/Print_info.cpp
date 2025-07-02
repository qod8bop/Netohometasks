#include <iostream>
#include "BaseFig.h"
#include "Triangles.h"
#include "Rect.h"







void Print_info(Figure* ptr) {
	int A;
	int B;
	int C;
	int D;

	int a;
	int b;
	int c;
	int d;

	//Треугольники

	for (int i = 0; i < 4; i++) {
		switch (i) {
		case 0:
			std::cout << "Создание треугольника: " << std::endl;
			break;
		case 1:
			std::cout << "Создание прямоугольного треугольника: " << std::endl;
			break;
		case 2:
			std::cout << "Создание равнобедренного треугольника: " << std::endl;
			break;
		case 3:
			std::cout << "Создание правильного треугольника: " << std::endl;
			break;
		}

		std::cout << "Введите угол A: ";
		std::cin >> A;
		std::cout << std::endl;

		std::cout << "Введите угол B: ";
		std::cin >> B;
		std::cout << std::endl;

		std::cout << "Введите угол C: ";
		std::cin >> C;
		std::cout << std::endl;


		std::cout << "Введите сторону a: ";
		std::cin >> a;
		std::cout << std::endl;

		std::cout << "Введите сторону b: ";
		std::cin >> b;
		std::cout << std::endl;

		std::cout << "Введите сторону c: ";
		std::cin >> c;
		std::cout << std::endl;



		if (i == 0) {							
			Basetri treug(A, B, C, a, b, c);
			ptr = &treug;
			ptr->output();
			std::cout << std::endl << std::endl;
		}

		else if (i == 1) {
			PRtri prtreug(A, B, C, a, b, c);
			ptr = &prtreug;
			ptr->output();
			std::cout << std::endl << std::endl;

		}

		else if (i == 2) {
			RBtri rbtreug(A, B, C, a, b, c);
			ptr = &rbtreug;
			ptr->output();
			std::cout << std::endl << std::endl;
		}

		else if (i == 3) {

			RNSTtri rnstreug(A, B, C, a, b, c);
			ptr = &rnstreug;
			ptr->output();
			std::cout << std::endl << std::endl;
		}

	}



	//четырёъугольники

	for (int i = 0; i < 5; i++) {
		switch (i) {
		case 0:
			std::cout << "Создание четырёхугольника: " << std::endl;
			break;
		case 1:
			std::cout << "Создание прямоугольника: " << std::endl;
			break;
		case 2:
			std::cout << "Создание квадрата: " << std::endl;
			break;
		case 3:
			std::cout << "Создание параллелограма: " << std::endl;
			break;
		case 4:
			std::cout << "Создание ромба: " << std::endl;
			break;
		}

		std::cout << "Введите угол A: ";
		std::cin >> A;
		std::cout << std::endl;

		std::cout << "Введите угол B: ";
		std::cin >> B;
		std::cout << std::endl;

		std::cout << "Введите угол C: ";
		std::cin >> C;
		std::cout << std::endl;

		std::cout << "Введите угол D: ";
		std::cin >> D;
		std::cout << std::endl;


		std::cout << "Введите сторону a: ";
		std::cin >> a;
		std::cout << std::endl;

		std::cout << "Введите сторону b: ";
		std::cin >> b;
		std::cout << std::endl;

		std::cout << "Введите сторону c: ";
		std::cin >> c;
		std::cout << std::endl;

		std::cout << "Введите сторону d: ";
		std::cin >> d;
		std::cout << std::endl;
		
		
		
		
		if (i == 0) {							
			Baserec Cheug(A, B, C, D, a, b, c, d);
			ptr = &Cheug;
			ptr->output();
			std::cout << std::endl << std::endl;
		}

		else if (i == 1) {
			Rectang Pryamik(A, B, C, D, a, b, c, d);
			ptr = &Pryamik;
			ptr->output();
			std::cout << std::endl << std::endl;

		}

		else if (i == 2) {
			Square kvadrat(A, B, C, D, a, b, c, d);
			ptr = &kvadrat;
			ptr->output();
			std::cout << std::endl << std::endl;
		}

		else if (i == 3) {
			Pargm parich(A, B, C, D, a, b, c, d);
			ptr = &parich;
			ptr->output();
			std::cout << std::endl << std::endl;
		}

		else if (i == 4) {
			Romb romb(A, B, C, D, a, b, c, d);
			ptr = &romb;
			ptr->output();
		}

	}
}