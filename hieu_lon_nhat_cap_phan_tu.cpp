#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        int res = -1;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[j] - a[i] > 0){
                    res = max(res, a[j] - a[i]);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}