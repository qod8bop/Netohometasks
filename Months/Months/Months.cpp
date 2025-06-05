#include <iostream>

using namespace std;

enum  months {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

int monthask() {

    int input;

    cout << "Введите номер месяца: ";
    cin >> input;

    if (input == 0) {
        return 0;
    }

    if (input < 1 || input > 12) {
        return 1;
    }

    months output = static_cast<months>(input);
    switch (output) {
    case January:
        cout << "Январь" << endl;
        break;
    case February:
        cout << "Февраль" << endl;
        break;
    case March:
        cout << "Март" << endl;
        break;
    case April:
        cout << "Апрель" << endl;
        break;
    case May:
        cout << "Май" << endl;
        break;
    case June:
        cout << "Июнь" << endl;
        break;
    case July:
        cout << "Июль" << endl;
        break;
    case August:
        cout << "Август" << endl;
        break;
    case September:
        cout << "Сентябрь" << endl;
        break;
    case October:
        cout << "Октябрь" << endl;
        break;
    case November:
        cout << "Ноябрь" << endl;
        break;
    case December:
        cout << "Декабрь" << endl;
        break;
    }
    return 2;
}



int main() {
    int yashatal;

    while (true) {

        yashatal = monthask();

        if (yashatal == 0) {
            cout << "До свидания !";
            break;
        }
        if (yashatal == 1) {
            cout << "Неправильный номер!" << endl;
        }


    }

    

    return 0;
}