#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year) {
    if (year <= 0) return false;

    if (month < 1 || month > 12) return false;

    int daysInMonth;
    switch (month) {
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28;
            break;
        default:
            daysInMonth = 31;
    }

    return (day > 0 && day <= daysInMonth);
}

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    if (year <= 0) {
        cout << "Nam khong hop le." << endl;
    } else if (month < 1 || month > 12) {
        cout << "Thang khong hop le." << endl;
    } else if (!isValidDate(day, month, year)) {
        cout << day << "/" << month << "/" << year << " la ngay khong hop le." << endl;
    } else {
        cout << day << "/" << month << "/" << year << " la ngay hop le." << endl;
    }

    return 0;
}
