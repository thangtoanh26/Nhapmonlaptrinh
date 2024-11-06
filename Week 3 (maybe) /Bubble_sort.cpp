#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &array) {
    bool isSwapped;
    int size = array.size();
    for (int i = 0; i < size - 1; i++) {
        isSwapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]); //Với mỗi lần chạy, phần tử lớn hơn sẽ luôn được đẩy về phía sau mảng.
                isSwapped = true;
            }
        }
        // Nếu không có phần tử nào được swap (mảng đã sắp xếp) thì break
        if (!isSwapped)
            break;
    }
}

int main() {
    vector<int> array = {24, 32, 42, 21, 1, 6, 23, 27};
    bubbleSort(array);

    for (int i : array) {
        cout << i << " ";
    }
    return 0;
}

