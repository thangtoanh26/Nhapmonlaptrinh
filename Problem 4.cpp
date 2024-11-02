#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "ℝ"; // Vô số nghiệm
        } else {
            cout << "Ø"; // Vô nghiệm
        }
    } else {
        double x = -b / a;
        printf("{%lf}", x); // Nghiệm của phương trình
    }

    return 0;
}
