#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


class Matrix{
    private:
        int row;
        int col;
        int data[50][50];
    public:
        Matrix(int row, int col);
        void setElement(int row, int col, int val);
        int getElement(int row, int col);
        int getRow();
        int getCol();
        Matrix trans();
        Matrix multi(Matrix& other);
};
Matrix::Matrix(int row, int col){
    this->row = row;
    this->col = col;
}
void Matrix::setElement(int row, int col, int val){
    data[row][col] = val;
}
int Matrix::getElement(int row, int col){
    return data[row][col];
}
int Matrix::getRow(){
    return row;
}
int Matrix::getCol(){
    return col;
}
Matrix Matrix::trans(){
    Matrix transpose(col, row);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            transpose.setElement(j, i, data[i][j]);
        }
    }
    return transpose;
}
Matrix Matrix::multi(Matrix& other){
    if(col != other.row){
        return Matrix(0, 0);
    }
    Matrix res(row, other.col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < other.col; j++){
            int sum = 0;
            for(int k = 0; k < col; k++){
                sum += data[i][k] * other.data[k][j];
            }
            res.setElement(i, j, sum);
        }
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int row, col;
        cin >> row >> col;
        Matrix a(row, col);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                int x;
                cin >> x;
                a.setElement(i, j, x);
            }
        }
        Matrix transs = a.trans();
        Matrix product = a.multi(transs);
        for(int i = 0; i < product.getRow(); i++){
            for(int j = 0; j < product.getCol(); j++){
                cout << product.getElement(i, j) << " ";
            }
            cout << endl;
        }
    }
    return 0;
}