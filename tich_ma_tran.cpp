#include <bits/stdc++.h>
using namespace std;
void input(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}
void output(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n, m, p;
    cin >> n >> m >> p;
    int a[100][100], b[100][100];
    input(a, n, m);
    input(b, m, p);
    int res[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            int sum = 0;
            for(int k = 0; k < m; k++){
                sum += a[i][k] * b[k][j];
            }
            res[i][j] = sum;
        }
    }
    output(res, n, p);
    return 0;
}