#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
ll max_sum(vector<ll> &v, int n){
    vector<ll> dp(n, 0);
    dp[0] = v[0];
    dp[1] = max(v[1], dp[0]);
    for(int i = 2; i < n; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + v[i]);
    }
    return *max_element(dp.begin(), dp.end());
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        cout << max_sum(v, n) << endl;
    }
    return 0;
}