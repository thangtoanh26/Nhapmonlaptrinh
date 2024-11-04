/*
Khi thi đại học, hầu hết các môn làm bài dưới dạng trắc nghiệm. Khi làm bài trắc nghiệm đôi khi kết quả có những con số rất lẻ ví dụ như đánh đúng 29/60 thì sẽ 
được 4,8333 điểm. Trong khi đó quy chế thi đại học yêu cầu điểm các môn chỉ được giữ số lẻ đến từng 1/4. Tức là điểm phải có thể viết ở dạng a+b*(1/4) với a, b là
hai số nguyên. Các điểm số quá lẻ như 4,83 phải được làm tròn đến số lẻ 1/4 gần nhất. Một trong những công thức phổ biến là lấy 4,83333 nhân 4. Sau đó làm tròn đến
hàng đơn vị theo nguyên tắc thông thường rồi chia kết quả cho 4 ta có 4.75 điểm. Nhưng nếu yêu cầu là làm tròn số lẻ đế từng mức 1/n thì sao?

INPUT
Số thực a và số nguyên dương n

OUTPUT
Số thực a sau khi làm tròn đến mức lẻ 1/n. Xuất tối đa 10 số lẻ ( cout.precision(10) )

VÍ DỤ

Input	            Output
4.833 4	            4.75
1799.78959 6	    1799.833333
5.166666667 3	    5.333333333
5.166666666 3	    5

*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    int n;
    cin >> a >> n;

    double result = 0;
    if ((a * n) - (int)(a * n) >= 0.5) result = ((double)((int)(a * n)) / n) + 1.0 / n;
    else result = ((double)((int)(a * n)) / n);
    cout << setprecision(10) << result;

    return 0;
}
