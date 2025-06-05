#include <iostream>

using namespace std;

struct Accs {
    int Number;
    string Owner;
    double balance;

    void show() {
        cout << "Ваш счёт: " << Number << " , " << Owner << " , " << balance;
    }
};

void balchange(Accs* account, double newsum);

void Accreate(Accs* account);

int main() {

    double newsum;
    Accs account;

    Accreate(&account);
    cout << "Введите новую сумму: ";
    cin >> newsum;
    cout << endl;
    balchange(&account, newsum);
    account.show();

    return 0;
}

void Accreate(Accs* account) {
    cout << "Введите номер счёта: ";
    cin >> account->Number;
    cout << endl;

    cout << "Введите имя владельца: ";
    cin >> account->Owner;
    cout << endl;

    cout << "Введите баланс: ";
    cin >> account->balance;
    cout << endl;
}

void balchange(Accs* account, double newsum) {

    account->balance = newsum;
}   