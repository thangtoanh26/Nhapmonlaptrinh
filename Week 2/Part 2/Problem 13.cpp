#include <iostream>
using namespace std;

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 == v2) {
        if (x1 == x2) cout << "YES";
        else cout << "NO";
        return 0;
    }
    int result = (x2 - x1) / (v1 - v2);
    if (x1 + v1 * result == x2 + v2 * result && result > 0) cout << "YES";
    else cout << "NO";
}
