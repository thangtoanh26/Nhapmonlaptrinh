#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<int> parseIntg(string str) {
    stringstream ss(str);                   // Khai báo một stringstream ss với chuỗi str
    vector<int> tokens;                     // Khai báo một vector tokens chứa các số nguyên
    string token;                           // Khai báo một chuỗi token để lưu từng số nguyên
    char delimeter = ',';                   // Khai báo kí tự phân cách

    // getline(ss, token, delimeter) lấy chuỗi từ ss cho đến khi gặp delimeter
    while (getline(ss, token, delimeter)) {
        tokens.push_back(stoi(token));      // Chuyển chuỗi token sang số nguyên và thêm vào vector tokens
    }

    // Trả về vector chứa các số nguyên được tách ra từ chuỗi str ban đầu
    return tokens;
}

int main() {
    string str;
    cin >> str;

    // parseIntg(str) trả về một vector chứa các số nguyên được tách ra từ chuỗi str
    vector<int> integers = parseIntg(str);

    // In ra
    for (auto i : integers) {
        cout << i << endl;
    }
}
