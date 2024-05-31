#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<ll> v;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            v.push_back(x);
        }
        int cnt = 0;
        for(auto it : v){
            if(it != 0){
                cnt++;
                cout << it << " ";
            }
        }
        for(int i = 0; i < n - cnt; i++){
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}