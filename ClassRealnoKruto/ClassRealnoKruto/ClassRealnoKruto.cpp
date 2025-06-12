#include<iostream>
#include"Class.h"

using namespace std;

int main() {

    char choice;
    int prefval;

    Counter cntr;

    cout << "Хотите ли вы задать начальное значение счётчика?" << endl;
    cout << "[Y,N]";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        cout << endl << "Введите значение: ";
        cin >> prefval;
        cntr = Counter(prefval);
    }

    while (true) {

        cout << endl;
        cout << "Введите команду ('+', '-', '=' или 'x'):";
        cin >> choice;

        if (choice == 'x') {
            break;
        }

        switch (choice) {
        case '+':
            cntr.incr();
            break;
        case '-':
            cntr.decr();
            break;
        case '=':
            cntr.show();
            break;
        }
    }
    cout << "ББ";
    return 0;
}