#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &array) {
    int size = array.size();
    for (int i = 0; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        
        //  Chèn những phần tử trong mảng con array[0,...,i - 1] lớn hơn key lên vị trí ở trước nó
        //  Nếu không còn phần tử nào thỏa mãn, vị trí j hiện tại sẽ là giá trị của key (trả key về đúng vị trí hiện tại của nó)
        while (j >= 0 && array[j] > k) {
            array[j + 1] = array[j];  
            j--;
        }
        array[j + 1] = key;  //Lưu lại kết quả phần tử key về đúng vị trí của nó trong mảng con
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

