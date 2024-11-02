#include <iostream>
using namespace std;

int main() {
    int n, k, p, q;
    cin >> n >> k >> p >> q;
    int Alice = (p - 1) * 2 + q;
    int Bob = 0;
    if (Alice <= k && Alice + k <= n) Bob = Alice + k;
    else if (Alice > k && Alice - k > 0) Bob = Alice - k;
    else {
        cout << "-1";
        return 0;
    }
    cout << (Bob + 1) / 2 << " " << (Bob % 2 == 0 ? 2 : 1);
}
