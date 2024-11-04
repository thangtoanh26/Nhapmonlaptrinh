/*
Viết chương trình nhập vào ngày tháng năm. Kiểm tra ngày tháng năm nhập vào có hợp lệ hay không?
Giả sử:
    Năm hợp lệ: năm  >  0, 
    Tháng 2 có 28 ngày (năm không nhuận), hoặc 29 ngày (năm nhuận),
    Năm nhuận: chia hết cho 4 nhưng không chia hết cho 100, hoặc chia hết cho 400,
    Tháng 4, 6, 9, 11 có 30 ngày,
    Các tháng còn lại có 31 ngày.
Lưu ý: Các bạn ưu tiên kiểm tra theo thứ tự: năm, tháng, ngày.

INPUT:
Nhập ngay, thang, nam trên cùng một dòng (ba số nguyên cách nhau bởi khoảng trắng).

OUTPUT
Định dạng như ví dụ minh họa.

VÍ DỤ:
INPUT                    OUTPUT
---------------------------------------------------------
1 1 1                    1/1/1 la ngay hop le.
---------------------------------------------------------
13 5 0                   Nam khong hop le.
---------------------------------------------------------
12 13 1990               Thang khong hop le.
---------------------------------------------------------
29 2 2019                29/2/2019 la ngay khong hop le.

 
*/

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
