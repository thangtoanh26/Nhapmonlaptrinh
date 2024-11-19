/*
TODO:
[X] Xây dựng khung bài toán
[ ] Xử lý bài toán
    [ ] Xử lý định nghĩa tags
    [ ] Xử lý Queries
[ ] Đi ngủ đúng giờ
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct {
    string tag;
    string value;
} tagAttr;

//Khai báo hàm định nghĩa các thẻ
vector<tagAttr> defineTags(int lines);
//Khai báo hàm thực hiện các truy vấn
void doQueries(vector<tagAttr>& tags, int queries);

int main() {
    int lines, queries;
    cin >> lines >> queries;

    //    Xóa bộ nhớ đệm
    cin.ignore();
    
    vector<tagAttr> tags = defineTags(lines);
    doQueries(tags, queries);

    return 0;
}

vector<tagAttr> defineTags(int lines) {
}

void doQueries(vector<tagAttr>& tags, int queries) {
}
