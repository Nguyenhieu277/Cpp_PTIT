#include <bits/stdc++.h>
using namespace std;
#define max 100
int solve(char a[][100], int n){
    int maximum = 0;
        int col[n][n], row[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 'O'){
                    col[i][j] = row[i][j] = 0;
                }
                else{
                    col[i][j] = (j == 0) ? 1 : col[i][j - 1] + 1;
                    row[i][j] = (i == 0) ? 1 : row[i - 1][j] + 1;
                }
            }
        }
        for(int i = n - 1; i >= 1; i--){
            for(int j = n - 1; j >= 1; j--){
                int temp = min(col[i][j], row[i][j]);
                while(temp > maximum){
                    if(row[i][j - temp + 1] >= temp && col[i - temp + 1][j] >= temp){
                        maximum = temp;
                    }
                    temp--;
                }
            }
        }
    return maximum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char a[max][max];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        cout << solve(a, n) << endl;
    }
    return 0;
}

