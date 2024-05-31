#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        int mark[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        mark[0] = a[0];
        for(int i = 1; i < n; i++){
            mark[i] = mark[i - 1] + a[i];
        }
        int l, r;
        for(int i = 0; i < k; i++){
            cin >> l >> r;
            cout << mark[r - 1] - (l > 1 ? mark[l - 2] : 0) << endl;
        } 
        cout << endl;
        
    }
    return 0;
}