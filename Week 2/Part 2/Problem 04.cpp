/*
Viết chương trình giải phương trình bậc nhất:
ax + b = 0

INPUT
Các hệ số a,b

OUTPUT
Tập nghiệm của phương trình. Sử dụng cơ chế xuất số thực mặc định của kiểu double trong C++. Một số ký hiệu tập hợp đặc biệt là:
Tập số thực: ℝ
Tập rỗng: Ø

Lưu ý : console trên window mặc định không hỗ trợ ký tự unicode (ví dụ như: ℝ, Ø, ...) và bảng mã UTF-8 nên không thể xuất các ký hiệu tập hợp đặc biệt. Tuy nhiên 
console trên server sẽ chấp nhận các ký tự này. Sinh viên cứ mạnh dạn xuất.

VÍ DỤ
INPUT                       OUTPUT
---------------------------------------
901800.64 -110011.73        {0.121991}
---------------------------------------
0 0	                        ℝ
---------------------------------------
0 1                         Ø
*/
#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "ℝ"; // Vô số nghiệm
        } else {
            cout << "Ø"; // Vô nghiệm
        }
    } else {
        double x = -b / a;
        printf("{%lf}", x); // Nghiệm của phương trình
    }

    return 0;
}
