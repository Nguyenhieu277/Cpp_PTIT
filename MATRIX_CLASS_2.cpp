#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int data[50][50];

public:
    Matrix(int rows, int cols){
        this->rows = rows;
        this->cols = cols;
    }

    void setElement(int row, int col, int value) {
        data[row][col] = value;
    }

    int getElement(int row, int col) {
        return data[row][col];
    }

    int getRows() {
        return rows;
    }

    int getCols() {
        return cols;
    }

    Matrix operator*( Matrix& other) {
        if (cols != other.rows) {
            return Matrix(0, 0);
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                int sum = 0;
                for (int k = 0; k < cols; ++k) {
                    sum += data[i][k] * other.data[k][j];
                }
                result.setElement(i, j, sum);
            }
        }

        return result;
    }
};

int main() {
    int n, m, p;
    cin >> n >> m >> p;

    Matrix a(n, m), b(m, p);

    // Input matrix a
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int value;
            cin >> value;
            a.setElement(i, j, value);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            int value;
            cin >> value;
            b.setElement(i, j, value);
        }
    }
    Matrix product = a * b;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            cout << product.getElement(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
