/*
Viết chương trình nhập vào 3 cạnh của một tam giác. Cho biết đó là loại tam giác gì?
Biết có 5 loại: không phải tam giác, tam giác thường, cân, đều, vuông.
Nếu là tam giác tính diện tích tam giác.

INPUT:
Dòng đầu tiên là độ dài cạnh 1.
Dòng thứ hai là độ dài cạnh 2.
Dòng thứ ba là độ dài cạnh 3.

OUTPUT
Định dạng như ví dụ minh họa. Diện tích làm tròn 02 chữ số sau dấu thập phân.

VÍ DỤ:
INPUT                    OUTPUT

2                        Tam giac thuong, dien tich = 2.90
3
4

3                        Tam giac vuong, dien tich = 6.00
4
5

1                        Khong phai tam giac
2
3

*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double a, b, c;

double Area() {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    cin >> a >> b >> c;
    if (!((a + b > c) && (a + c > b) && (b + c > a))) {
        cout << "Khong phai tam giac";
        return 0;
    }
    double area = Area();
    cout << fixed << setprecision(2);
    
    if ((a == b) && (b == c)) cout << "Tam giac deu, dien tich = " << area;
    else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) cout << "Tam giac vuong, dien tich = " << area;
    else if ((a == b) || (a == c) || (b == c)) cout << "Tam giac can, dien tich = " << area; 
    else cout << "Tam giac thuong, dien tich = " << area;

    return 0;
}
