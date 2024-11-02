#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double deltaSquare = (b * b) - (4 * a * c);
    if (deltaSquare < 0) cout << "PTVN";
    else if (deltaSquare == 0) cout << "PT co nghiem kep: x1 = x2 = " << (-b) / (2 * a);
    else {
        cout << "PT co hai nghiem phan biet:" << endl;
        cout << "x1 = " << (-b + sqrt(deltaSquare)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(deltaSquare)) / (2 * a) << endl;
    }
    return 0;
}
