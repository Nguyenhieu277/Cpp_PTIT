#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binary_search(vector<ll> &v, int i){
    int l = 0, r = v.size() - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(v[m] == i) return 1;
        else if(v[m] < i) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<ll> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << binary_search(v, k) << endl;
    }
    return 0;
}