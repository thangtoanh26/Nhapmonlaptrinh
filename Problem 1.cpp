/*
Viết chương trình nhập vào hai số nguyên a và b. In ra 1 nếu hai số bằng nhau, in ra 0 nếu hai số khác nhau.
INPUT:
Dòng đầu tiên là số thứ nhất.
Dòng thứ hai là số thứ hai.
OUTPUT
Xuất ra 0 ( nếu hai số khác nhau), 1 (nếu hai số bằng nhau).
  */

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", (a == b));
}
