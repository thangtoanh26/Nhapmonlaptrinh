/*
(Vietnamese below)
Tí's father is a cadastral surveyor. One day, Tí's father went to measure the rectangle land of Bác Bảy's house, but it rained and the paper with the measurement
data was soaked through. Only the perimeter and area of the land could be read.
Tí is a computer science second degree student, so Tí's father asked him to write a program to restore the length and width of the land based on the area and
perimeter of the land. Of course, the length will be longer than the width.

Ba của Tí là nhân viên địa chính. Một hôm Ba Tí đi đo miếng đất hình chữ nhật của bác Bảy về nhưng gặp trời mưa nên ướt hết tờ giấy ghi các số liệu đo được: chỉ
còn đọc được chu vi và diện tích của lô đất.
Tí đang đi học văn bẳng 2 về tin học nên B Tí nhờ viết chương trình phục hồi chiều dài và chiều rộng của lô đất dựa vào diện tích và chu vi của lô đất. Dĩ nhiên
là chiều dài sẽ dài hơn chiều rộng rồi

Input Format
A single line of 2 integer S and P

Constraints
no

Output Format
Two lines: the first line is the length, the second line is the width. If the length and width cannot be calculated from the perimeter and area, then output one
line "NA".

Sample Input 0
36 30
Sample Output 0
12 3

Sample Input 1
11 16
Sample Output 1
6.23607 1.76393 
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double Area, Circum;
    cin >> Area >> Circum;
    
    //Viète theorem     ->     x^2 + Area*x + Circum = 0
    if (Area * Circum < 0) {
        cout << "NA";
        return 0;
    }
    
    double deltaSquared = Circum * Circum / 4 - 4 * Area;
    if (delta < 0) {
        cout << "NA";
        return 0;
    }
    
    cout << (Circum / 2 + sqrt(deltaSquared)) / 2 << " " << (Circum / 2 - sqrt(deltaSquared)) / 2;

}
