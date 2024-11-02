#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    cin >> age >> gender;
    if (gender == 'F' || gender == 'f') {
        if (age < 21) cout << "4";
        else cout << "2";
    }
    else if (gender == 'M' || gender == 'm') {
        if (age < 21) cout << "3";
        else cout << "1";
    }
    else cout << "I do not know why";
    return 0;
}
