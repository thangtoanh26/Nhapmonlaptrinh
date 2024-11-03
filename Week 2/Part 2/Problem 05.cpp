/*
Viết chương trình phân loại nhân khẩu như sau:
_______________________________________________________________________________
|   Gender (Giới tính):          |      Male (Nam)      |     Female (Nữ)     |
|   Age (Tuổi):                  |                      |                     |
|--------------------------------|----------------------|---------------------|
|   >=21                         |      Loại 1          |     Loại 2          |
|--------------------------------|----------------------|---------------------|
|   < 21                         |      Loại 3          |     Loại 4          |
|________________________________|______________________|_____________________|

INPUT
- 1 số nguyên dương có giá trị không quá 100, chỉ tuổi của một người
- 1 ký tự chữ cái chỉ giới tính của một người: M hoặc m (Male) = Nam, F hoặc f (Female) = Nữ

OUTPUT
- Một số nguyên chỉ mã phân loại của người đó. Ví dụ: 1, 2, 3, 4

- Trường hợp không phân loại được thì xuất thông báo “I do not know why”

VÍ DỤ
Input                     Output
----------------------------------------------
38                        1
M
----------------------------------------------
3                         I do not know why
b
----------------------------------------------
35                        2
f

*/

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
