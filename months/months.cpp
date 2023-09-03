﻿#include <iostream>
using namespace std;

enum Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    setlocale(LC_ALL, "RUS");

    int monthNumber;

    while (true) {
        cout << "Введите номер месяца: ";
        cin >> monthNumber;

        if (monthNumber == 0) {
            cout << "До свидания!" << endl;
            break;
        }

        if (monthNumber < 1 || monthNumber > 12) {
            cout << "Неправильный номер!" << endl;
            continue;
        }

        switch (monthNumber) {
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
    }

    return 0;
}