#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binary_search(vector<ll> &v, int i){
    int l = 0, r = v.size() - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(v[m] == i) return i;
        else if(v[m] < i) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            cout << binary_search(v, i) << " ";
        }
        cout << endl;
    }
    return 0;
}