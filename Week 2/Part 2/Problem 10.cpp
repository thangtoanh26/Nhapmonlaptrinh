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
    else if ((a == b) || (a == c) || (b == c)) cout << "Tam giac vuong, dien tich = " << area;
    else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) cout << "Tam giac can, dien tich = " << area; 
    else cout << "Tam giac thuong, dien tich = " << area;

    return 0;
}
