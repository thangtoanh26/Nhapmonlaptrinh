#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &array) {
    int size = array.size();
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (min > array[j]) {
                min = array[j];                                //    Mỗi lần chạy sẽ chọn phần tử nhỏ nhất
            }
        }
        if (i != min)
            swap(array[i], array[j]);                          //    Phần tử nhỏ nhất được đẩy dần về đầu mảng
    }
}

int main() {
    vector<int> array = {24, 32, 42, 21, 1, 6, 23, 27};
    insertionSort(array);

    for (int i : array) {
        cout << i << " ";
    }
    return 0;
}

