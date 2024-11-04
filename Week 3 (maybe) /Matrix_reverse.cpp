#include <iostream>
#include <vector>

using namespace std;

//Khai báo hàm hiển thị ma trận
void display_Matrix(const vector<vector<double>>& matrix){
    for (const auto row : matrix) {
        for (double val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}
//Khai báo hàm tìm ma trận nghịch đảo
void Gauss_Jordan(vector<vector<double>>& matrix, vector<vector<double>>& inversed_matrix){
    /*
        Tạo ma trận đơn vị cấp n (trong biến ma trận nghịch đảo)
        Ví dụ:
            __        __
            |  1  0  0 |
            |  0  1  0 |
            |_ 0  0  1_|
            
    */
    int n = matrix.size();                                  //Tạo biến n chỉ kích thước ma trận vuông
    for (int i = 0; i < n; ++i) {
        inversed_matrix[i][i] = 1;
    }


    //Thực hiện thuật toán khử Gauss - Jordan
    //Biến i : hàng ma trận
    //Biến j : cột ma trận
        
    
    /*
    Thuật toán khử Gauss - Jordan:
    + hàng: i = 1 -> n
        + Nếu (matrix[i][i] == 0):                          Tiền xử lý ma trận nếu phần tử của hàng i, cột i (phần tử cơ sở) bằng 0
            + hàng: k = i -> n                              Vòng lặp 1 để tiền xử lí ma trận bằng BĐSC loại 3: swap h[a] <-> h[b]
                + cột: j = i -> n                               
                    + Nếu (matrix[k][j] != 0) h[a] <-> h[b]

        + diagElement: matrix[j][j]                         Lưu giá trị của phần tử để BĐSC

        + cột: j = i -> n                                   Vòng lặp 2 để lưu bội số của hàng cần BĐSC
            + matrix[i][j] /= diagElement                
            + inversed_matrix[i][j] /= diagElement

        + hàng: k = 1 -> n                                  Vòng lặp 3 để dùng BĐSC để khử các hàng và trả lại kết quả của ma trận nghịch đảo
                                                            (A|I) ---(BĐSC)--> (I|A[-1])    A[-1] là nghịch đảo của ma trận A
            + Bỏ qua nếu (k = i)                            Để tránh việc tính toán biến đổi ma trận thành ma trận không
            + factor = matrix[i][j]                         Lưu giá trị
            + hàng: j = 1 -> n
                + matrix[i][k] -= factor * matrix[i][j - 1];
                + inversed_matrix[i][k] -= factor * inversed_matrix[i][j - 1];

    */
    for (int i = 0; i < n; i++) {
        //Tìm phần tử chính và hoán đổi hàng
        if (matrix[i][i] == 0)
            for (int k = i; k < n; k++)
                for (int j = i; j < n; j++)
                    if (matrix[k][j]) {
                        swap(matrix[i], matrix[k]);
                        swap(inversed_matrix[i], inversed_matrix[k]);
                        break;
                    }

        //lưu bội số của hàng cần BĐSC
        double diagElement = matrix[i][i];
        for (int j = 0; j < n; j++) {
            matrix[i][j] /= diagElement;
            inversed_matrix[i][j] /= diagElement;
        }

        for (int k = 0; k < n; k++) {
            if (k == i) continue;
            double factor = matrix[k][i];
            for (int j = 0; j < n; j++) {
                matrix[k][j] -= factor * matrix[i][j];
                inversed_matrix[k][j] -= factor * inversed_matrix[i][j];
            }
        }
    }
}

int main(){
    /*
    Thực hiện bài toán tìm ma trận nghịch đảo:
    Bước 1: Khai báo ma trận vuông, tạo một ma trận đơn vị có kích thước tương đương
    Bước 2: Dùng thuật toán khử Gauss_Jordan để tìm ma trận nghịch đảo
    Bước 3: Trả về kết quả ma trận nghịch đảo
    */

    //Tạo ma trận và nghịch đảo của ma trận trên

        //Khai báo kích thước ma trận vuông (n)
        int size_of_matrix;                                 
        cin >> size_of_matrix;
        

        //Khai báo biến ma trận
        vector<vector<double>> matrix(size_of_matrix, vector<double>(size_of_matrix));
        //Khai báo biến ma trận nghịch đảo
        vector<vector<double>> inversed_matrix(size_of_matrix, vector<double>(size_of_matrix, 0));


        //Khai báo giá trị trong ma trận
        for (int i = 0; i < size_of_matrix; i++) {
            for (int j = 0; j < size_of_matrix; j++) {
                cin >> matrix[i][j];
            }
        }

                
    //Dùng thuật toán khử Gauss - Jordan để tìm ma trận nghịch đảo
    Gauss_Jordan(matrix, inversed_matrix);
        
    //Hiển thị ma trận nghịch đảo
    cout << endl;
    display_Matrix(inversed_matrix);
    cout << endl;
    system("pause");
    return 0;
}
