#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double S, P;
    cin >> S >> P;
    
    if (S * P < 0) {
        cout << "NA";
        return 0;
    }
    double delta = P * P / 4 - 4 * S;
    if (delta < 0) {
        cout << "NA";
        return 0;
    }
    
    cout << (P / 2 + sqrt(delta)) / 2 << " " << (P / 2 - sqrt(delta)) / 2;

}
