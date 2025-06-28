#include <iostream>
#include <locale.h>



void lengthcalc(std::string str, int forbidden_length) {  
	if (str.size() == forbidden_length) {
		throw std::runtime_error("Вы ввели слово запретной длины! До свидания");
	}
	else {
		std::cout << "Длина слова  " << str << " равна: " << (str.size());
	}
}


int main() {
	int forbidlen;
	std::string str;


		std::cout << "Введите зпретную длину: ";
		std::cin >> forbidlen;
		
		
		while (true) {
			std::cout << std::endl;
			std::cout << "Введите слово : ";
			std::cin >> str;
			std::cout << std::endl;
			try {
				lengthcalc(str, forbidlen);
			}

			catch (const std::runtime_error& eggor) {
				std::cerr<<eggor.what();
				break;
			}
			catch (...) {
				std::cerr << "Неизвестная ошибка";
			}
		}


	return 0;
}