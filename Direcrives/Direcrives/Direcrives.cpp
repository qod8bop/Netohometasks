#include <iostream>

#define MODE 4

#if  !defined MODE
	#error MODE must be defined
#endif


#if MODE == 1
int add() {
	int num1;
	int num2;

	std::cout << "num1: ";
	std::cin >> num1;
	std::cout << std::endl;

	std::cout << "num2: ";
	std::cin >> num2;
	std::cout << std::endl;
	return (num1 + num2);
}

#elif MODE>1 || MODE<0
	#error Неизвестный режим. Завершение работы
#endif


int main() {

#if MODE == 0
	std::cout << "Работаю в режиме тренировки";
#elif MODE == 1
	std::cout << "Работаю в боевом режиме";
	std::cout << std::endl;
	std::cout << add();
#endif
}