#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float toan, ly, hoa;
    cin >> toan >> ly >> hoa;
    float DTB = (toan + ly + hoa) / 3; 
    printf("DTB = %.2lf\n\n", DTB);
    cout << "Loai: ";
    if (DTB >= 9.00) cout << "XUAT SAC";
    else if (DTB >= 8.00) cout << "GIOI";
    else if (DTB >= 7.00) cout << "KHA";
    else if (DTB >= 6.00) cout << "TB KHA";
    else if (DTB >= 5.00) cout << "TB";
    else if (DTB >= 4.00) cout << "YEU";
    else cout << "KEM";
}
