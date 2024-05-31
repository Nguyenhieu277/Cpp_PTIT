#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int test = 1; test <= t; test++){
        int n, m, k;
        cin >> n >> m >> k;
        int a[101], b[101];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int j = 0; j < m; j++){
            cin >> b[j];
        }
        for(int i = n - 1; i >= k; i--){
            a[i + m] = a[i]; 
        }
        for(int i = k, j = 0; j < m; i++, j++){
            a[i] = b[j];
        }
        cout << "Test " << test << ":" << endl;
        for(int i = 0; i < n + m; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}