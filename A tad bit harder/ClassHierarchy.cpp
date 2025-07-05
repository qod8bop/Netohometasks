#include <iostream>
#include <conio.h>
#include "Print_info.h"
#include "Basefig.h"


int main() {
	Figure* ptr = nullptr;

	Print_info(ptr);

	char ch = _getch();
	return 0;
}