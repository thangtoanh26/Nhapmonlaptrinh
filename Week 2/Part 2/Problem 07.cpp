/*
Viết chương trình nhập vào 3 số thực a, b và c. In ra các số theo thứ tự tăng dần.

INPUT:
Dòng đầu tiên là số thứ nhất.
Dòng thứ hai là số thứ hai.
Dòng thứ ba là số thứ ba.

OUTPUT
In ra các số theo thứ tự tăng dần.

VÍ DỤ:
INPUT                   OUTPUT
---------------------------------------------
2.3                     1 2.3 3.7
1
3.7
---------------------------------------------
4.9                     3.5 4.9 7.9
7.9
3.5

*/

#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (b > c) cout << c << " " << b << " " << a;
        else if (a > c) cout << b << " " << c << " " << a;
        else cout << b << " " << a << " " << c; 
    }
    else if (c > b) cout << a << " " << b << " " << c;
    else if (a > c) cout << c << " " << a << " " << b;
    else cout << a << " " << c << " " << b; 
    return 0;
}
