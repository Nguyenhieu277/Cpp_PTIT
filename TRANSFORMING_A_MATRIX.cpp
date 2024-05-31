#include <bits/stdc++.h>
using namespace std;
#define maxx 100
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        int sumRow[n] = {0}, sumCol[n] = {0}, sum = 0;
        int maximum = -1e9;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                sumRow[i] += a[i][j];
                sumCol[i] += a[j][i];
                sum += a[i][j];
            }
            maximum = max(maximum, max(sumRow[i], sumCol[i]));
        }
        cout << maximum * n - sum << endl;
    }
    return 0;
}

