/*
                                                                        Thu đi để lại lá vàng 
                                                                    Yagi để lại một làng tan hoang

Vâng. Cơn bão Yagi vừa qua đã để lại cho đất nước chúng ta biết bao thiệt hại về con người, tài sản. Dẫu vậy, một điểm sáng tích cực mà Yagi “mang lại” cho chúng ta 
chính là sự đoàn kết mạnh mẽ, tinh thần tương thân tương ái của nhân dân khắp mọi miền đất nước. Ngoài ra, một đại bộ phận phông bạt đã lộ diện khi được vì sao kê 
chiếu rọi, cho thấy sự suy đồi về mặt đạo đức khi lợi dụng sự mất mát, đau thương của đồng bào để tìm kiếm sự tuyên dương, đánh bóng tên tuổi của bản thân. Người tốt 
cần được tuyên dương và kẻ xấu cần bị lên án, bạn hãy viết một chương trình “check var” để giúp giang cư mận phát hiện “vàng thật, vàng giả” trong thời điểm khó khăn 
hiện tại.

INPUT
Hai số a, b (a, b ≤ 10^20) thể hiện số tiền quyên góp (đơn vị: nghìn đồng):
  a: Số tiền được chính chủ đăng tải trên mạng xã hội (a != 0)
  b: Số tiền được công khai trong sao kê của Mặt trận Tổ quốc Việt Nam

OUTPUT
Nếu số tiền trong sao kê nhiều hơn số tiền được chính chủ đăng tải, xuất ra màn hình: “Khiem ton, dang tuyen duong!”.
Nếu số tiền trong sao kê bằng với số tiền được chính chủ đăng tải, xuất ra màn hình: “Dang tuyen duong!”.
Nếu số tiền trong sao kê ít hơn số tiền được chính chủ đăng tải, xuất ra màn hình: “Phong bat tien ung ho (a/b) lan!”. 
  (Lưu ý: làm tròn 2 chữ số thập phân nếu a không chia hết cho b)
Nếu không kiểm tra thấy giao dịch của chính chủ trong sao kê (b = 0), xuất ra màn hình: "Congrats! Miss Phong Bat is here!"

VÍ DỤ
Input	              Output
----------------------------------------------------
1000 1000	          Dang tuyen duong!
----------------------------------------------------
500000 500	        Phong bat tien ung ho 1000 lan!
----------------------------------------------------
97 5000	            Khiem ton, dang tuyen duong!
*/

#include <bits/stdc++.h>

int main() {
    long long phongBat, saoKe;
    scanf("%Ld%Ld", &phongBat, &saoKe);

    if (saoKe > phongBat || phongBat == 0) printf("Khiem ton, dang tuyen duong!");
    else if (saoKe == phongBat) printf("Dang tuyen duong!");
    else if (saoKe == 0) printf("Congrats! Miss Phong Bat is here!");
    else if (phongBat % saoKe != 0) printf("Phong bat tien ung ho %.2lf lan!", static_cast<double>(phongBat) / saoKe);
    else printf("Phong bat tien ung ho %lld lan!", phongBat / saoKe);
    
    return 0;
}
