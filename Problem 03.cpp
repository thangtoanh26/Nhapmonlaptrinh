/*
Viết chương trình hỏi đáp như sau:

Q: What is the outdoor temperature?
A: 25

Q: What is your plan today?
A: 

- Nếu temperature >=33 thì trả lời “Good day for swimming”.
- Nếu 24 <= temperature < 33 thì trả lời “Good day for golfing”.
- Nếu 10 <= temperature < 24 thì trả lời “Good day to play tennis”.
- Nếu temperature < 10 thì trả lời “Go to bed”.

INPUT:
1 số nguyên có giá trị không quá 40, chỉ nhiệt độ ngoài trời

OUTPUT:
Xuất theo mẫu ví dụ bên dưới

VÍ DỤ:
Input                 Output                                    Ghi chú
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
35                    What is the outdoor temperature?          Màn hình xuất hiện câu hỏi: “What is the outdoor temperature?” và chờ user nhập giá trị
                      What is your plan today?                  Sau khi nhập giá trị nhiệt độ ngoài trời thì xuất hiện câu hỏi thứ 2 “What is your plan today?” và 
                      Good day for swimming                     câu trả lời tương ứng

8                     What is the outdoor temperature?
                      What is your plan today?
                      Go to bed
*/

#include <iostream>
using namespace std;

int main()
{
    int temperature;
    cout<<"What is the outdoor temperature? ";
    cin>>temperature;
    cout<<endl;

    printf("What is your plan today?\n");
    if (temperature >= 33) printf("Good day for swimming");
    else if (temperature >= 24) printf("Good day for golfing");
    else if (temperature >= 10) printf("Good day to play tennis");
    else printf("Go to bed");
  
    return 0;
}
