#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[1001], b[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < m; j++){
        cin >> b[j];
    }
    int k;
    cin >> k;
    for(int i = n - 1; i >= k; i--){
        a[i + m] = a[i]; 
    }
    for(int i = k, j = 0; j < m; i++, j++){
        a[i] = b[j];
    }
    for(int i = 0; i < n + m; i++){
        cout << a[i] << " ";
    }
    return 0;
}