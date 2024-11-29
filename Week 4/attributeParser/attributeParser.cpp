/*
TODO:
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
void doQueries(vector<tagAttr> tags, int queries);

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
    vector<tagAttr> token;
    string line, tag;
    
    for (int times = 0; i < lines; i++) {
        getline(cin, line);

        int currentPos = 1;

        if (line[currentPos] == '/') {
            //Viết lại tag trong 2 trường hợp: tag được lồng và không được lồng
            if (tag.rfind('.') != string::npos) 
                //Đóng tag được lồng và quay lại tag trước đó
                tag = tag.substr(0, tag.rfind('.'));
            else tag.clear();
            //Clear biến tag nếu tag không được lồng
        }

        else {
            TagAttr element;
            int i = 0;
            
            while (line[currentPos + i] != ' ' && line[currentPos + i] != '>')
                i++;

            if (tag.empty())
                tag = line.substr(currentPos, i);
            else 
                tag = tag + '.' + line.substr(currentPos, i);
            
            currentPos += i;
            
            while (line[currentPos + i] != '>') {
                currentPos++;
                i = 0;
                
                while (line[currentPos + i] != ' ')
                    i++;
                element.tag = tag + '~' + line.substr(currentPos, i);
                currentPos += i + 3;
                i = 0;

                while (line[currentPos + i] != ' ' && line[currentPos + i] != '>')
                    i++;
                element.value = line.substr(currentPos + 1, i - 2);

                currentPos += i;
                                    
                i=0;
                tagsAttr.push_back(element);
            }
        }
    }
    return token;
}

void doQueries(vector<tagAttr> tags, int queries) {
    string query;

    while (queries--) {
        getline(cin, query);

        int i = 0;
        for (auto &element : tags) {
            i++;
            if (query = element.tag) {
                cout << element.value << endl;
                break;
            }

            if (i == tags.size())
                cout << "Not Found!" << endl;
        }
    }
}
