#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll find_sum_max(vector<ll> &v, int n){ // kadane algorithm
    ll max_sum = v[0], sum = 0;
    for(int i = 0; i < n; i++){
        sum = max((ll)v[i], sum + v[i]);
        max_sum = max(max_sum, sum);
    }
    return max_sum;
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
        cout << find_sum_max(v, n) << endl;
    }
    return 0;
}