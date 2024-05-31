#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int idx = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == k) idx = i + 1;
        }
        cout << idx << endl;
    }
    return 0;
}