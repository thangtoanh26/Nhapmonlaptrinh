#include <iostream>
using namespace std;

int* doSomeThing();

void ganGiaTri();

void checkPointer();

int main() {
  int x = 5;
  cout << x << endl;                 //    Xuất ra giá trị x
  //  Toán tử '&' trả về địa chỉ bộ nhớ của biến
  
  cout << &x << endl;                //    Xuất ra địa chỉ của x trong RAM
  
  //  Toán tử '*' truy cập và trả về giá trị tại một địa chỉ cụ thể
  cout << *&x << endl;               //    Xuất ra giá trị tại địa chỉ của giá trị x
  *&x = 10;
  cout << x << endl;                 //    Xuất ra kết quả = 10;
  
  int *iPtr;                         // con trỏ đến 1 địa chỉ chứa giá trị số nguyên
  double *dPtr;                      // con trỏ đến 1 địa chỉ chứa giá trị số thực
  
  int* iPtr2;                        // đúng cú pháp (nhưng không nên sử dụng)
  int * iPtr3;                       // đúng cú pháp (nhưng không nên sử dụng)
  
  int *iPtr4, *iPtr5;                // khai báo 2 con trỏ đến các biến số nguyên
  int* iPtr6, iPtr7; // iPtr6 là 1 con trỏ, nhưng iPtr7 chỉ là 1 biến số nguyên
}
// Tuy nhiên, khi trả về một con trỏ từ một hàm, sẽ rõ ràng hơn nếu đặt dấu sao (*) bên cạnh kiểu trả về:
int* doSomething() {
  return NULL;
}

void ganGiaTri() {
  int value = 10;
	int *ptr = &value;                      // khởi tạo con trỏ ptr là địa chỉ biến value

	cout << &value << '\n';                 // in địa chỉ biến value
	cout << ptr << '\n';                    // in địa chỉ của con trỏ ptr đang giữ

  int iValue = 5;
	cout << typeid(&iValue).name() << "\n"; // Kiểm tra kiểu dữ liệu của pointer

	return 0;
	return;
}

void checkPointer() {
  int iValue = 5;
  double dValue = 7.0;
  
  int *iPtr = &iValue; // ok
  double *dPtr = &dValue; // ok
  
  iPtr = &dValue; // sai – con trỏ int không thể trỏ đến địa chỉ biến double
  dPtr = &iValue; // sai – con trỏ double không thể trỏ đến địa chỉ biến int
  
  int *ptr = 5; // sai – con trỏ chỉ có thể giữ 1 địa chỉ
  double *dPtr = 0x0012FF7C; // sai
}

void sizeOfPointer() {
  //  Kích thước của con trỏ phụ thuộc vào kiến ​​trúc mà tập tin thực thi được biên dịch.

  //  Kiến trúc x86, con trỏ sẽ có kích thước 32-bit (4 bytes)
  //  Kiến trúc x64, con trỏ sẽ có kích thước 64-bit (8 bytes)

  //  Ví dụ cho kiến trúc x86
  
  char *chPtr; // biến kiểu char có kích thước 1 byte
  int *iPtr; // biến kiểu int có kích thước 4 bytes
  struct Something
  {
  	int nX, nY, nZ;
  };
  Something *somethingPtr; // biến kiểu Something là 12 bytes
  
  cout << sizeof(chPtr) << '\n'; // 4 bytes
  cout << sizeof(iPtr) << '\n'; // 4 bytes
  cout << sizeof(somethingPtr) << '\n'; // 4 bytes
}
