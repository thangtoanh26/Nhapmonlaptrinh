/*
Viết chương trình giải phương trình bậc hai: ax2 + bx + c = 0 (a ≠ 0).

INPUT:
Dòng đầu tiên là a.
Dòng thứ hai là b
Dòng thứ ba là c.
Lưu ý: a, b, c thuộc kiểu số thực.

OUTPUT
Xuất ra kết quả nghiệm phương trình, xem ví dụ minh họa. (Chú ý: nếu pt có 2 nghiệm pt thì x1 và x2 in xuống dòng)

VÍ DỤ:
INPUT                    OUTPUT
----------------------------------------------------------
2                        PT co hai nghiem phan biet:
0                        x1 = 1
-2                       x2 = -1
----------------------------------------------------------
1                        PT co nghiem kep: x1 = x2 = -1
2
1
----------------------------------------------------------
2                        PTVN
2
4
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double deltaSquare = (b * b) - (4 * a * c);
    if (deltaSquare < 0) cout << "PTVN";
    else if (deltaSquare == 0) cout << "PT co nghiem kep: x1 = x2 = " << (-b) / (2 * a);
    else {
        cout << "PT co hai nghiem phan biet:" << endl;
        cout << "x1 = " << (-b + sqrt(deltaSquare)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(deltaSquare)) / (2 * a) << endl;
    }
    return 0;
}
