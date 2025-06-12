#include<iostream>
#include"BaseFig.h"
#include"Triangles.h"
#include"Rect.h"


void Print_info(Figure* ptr) {
	Basetri treug(120, 40, 20, 6, 2, 1);
	ptr = &treug;
	ptr->output();
	cout << endl << endl;

	PRtri prtreug(30, 60, 4, 2, 8);
	ptr = &prtreug;
	ptr->output();
	cout << endl << endl;

	RBtri rbtreug(50, 80, 4, 6);
	ptr = &rbtreug;
	ptr->output();
	cout << endl << endl;

	RNSTtri rnstreug(6);
	ptr = &rnstreug;
	ptr->output();
	cout << endl << endl;

	Baserec Cheug(30, 40, 130, 130, 3, 4, 13, 13);
	ptr = &Cheug;
	ptr->output();
	cout << endl << endl;

	Rectang Pryamik(3, 4);
	ptr = &Pryamik;
	ptr->output();
	cout << endl << endl;

	Pargm parich(110, 70, 11, 7);
	ptr = &parich;
	ptr->output();
	cout << endl << endl;

	Romb romb(60, 120, 5);
	ptr = &romb;
	ptr->output();

}