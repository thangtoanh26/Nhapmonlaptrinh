/*
Viết chương trình nhập vào điểm thi 3 môn toán, lý và hóa. Tính điểm trung bình và xếp loại học lực.
Cách tính điểm trung bình (DTB), DTB = (điểm toán + điếm lý + điểm hóa )/3. Làm tròn 2 chữ số thập phân.
Điều kiện xếp loại:
    Xuất sắc (XUAT SAC) :             [9-10];
    Giỏi (GIOI):                      [8-9);
    Khá (KHA):                        [7-8);
    Trung bình khá (TB KHA):          [6-7);
    Trung bình (TB):                  [5-6);
    Yếu (YEU):                        [4-5);
    Kém (KEM):                        dưới 4.

INPUT
Dòng đầu tiên là điểm Toán.
Dòng thứ hai là điểm Lý.
Dòng thứ ba là điểm Hóa.

OUTPUT
Xuất ra DTB và xếp loại học lực, xem ví dụ minh họa.

VÍ DỤ
INPUT                    OUTPUT

8                        DTB = 8.00
8                        Loai: GIOI
8

8                        DTB = 7.00
6                        Loai: KHA
7

6                        DTB = 6.33
6                        Loai: TB KHA
7

*/

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
