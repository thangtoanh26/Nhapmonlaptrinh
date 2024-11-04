/*
Viết chương trình nhập vào hai số nguyên a và b. In ra 1 nếu hai số bằng nhau, in ra 0 nếu hai số khác nhau.

INPUT:
Dòng đầu tiên là số thứ nhất.
Dòng thứ hai là số thứ hai.

OUTPUT:
Xuất ra 0 ( nếu hai số khác nhau), 1 (nếu hai số bằng nhau).

VÍ DỤ:

INPUT        OUTPUT
--------------------------
1            0
2
--------------------------
3            1
3
*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", (a == b));                 //Sử dụng phép so sánh (a == b). Nếu đúng trả về 1 (TRUE) và ngược lại trả về 0 (FALSE)
}
