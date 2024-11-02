#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    int n;
    cin >> a >> n;

    double result = 0;
    if ((a * n) - (int)(a * n) >= 0.5) result = ((double)((int)(a * n)) / n) + 1.0 / n;
    else result = ((double)((int)(a * n)) / n);
    cout << setprecision(10) << result;

    return 0;
}
