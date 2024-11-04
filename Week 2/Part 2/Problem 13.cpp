/*
Mèo Tâm và chuột Gia Huy đang chơi đuổi bắt với nhau. Mèo Tâm đang ở vị trí x1 và di chuyển với vận tốc v1. Chuột Gia Huy đang ở vị trí x2 và di chuyển với vận tốc
v2. Viết chương trình kiểm tra xem liệu Tâm có thể tương tác Gia Huy sau N lần di chuyển (N là số nguyên) được không?

INPUT 
4 số nguyên dương lần lượt cho x1, v1, x2, v2. Tất cả các giá trị đều nằm trong [1, 10^9].

OUTPUT
“YES” nếu Tâm có thể tương tác Gia Huy.
“NO” trong trường hợp còn lại.

VÍ DỤ
Input	                Output
0 3 4 2	                YES
0 2 5 3	                NO
 
GIẢI THÍCH
Case 1:
x1 = 0; v1 = 3; x2 = 4; v2 = 2. Tâm sẽ tương tác Gia Huy tại vị trí x = 12 (sau khi cả 2 di chuyển được 4 lần), do đó in ra “YES”.

Case 2:
x1 = 0; v1 = 2; x2 = 5; v2 = 3. Vì Gia Huy đứng trước Tâm và vận tốc của Gia Huy lại nhanh hơn Tâm nên Tâm sẽ không bao giờ tương tác được Gia Huy. In ra “NO”.
*/

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
