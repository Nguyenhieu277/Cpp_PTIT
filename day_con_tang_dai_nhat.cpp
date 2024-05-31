#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll longest_increasing_subsequence(vector<ll> &v, int n){
    vector<ll> dp(n, 1);
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            if(v[i] > v[j] && dp[i] <= dp[j]){
                dp[i] = dp[j] + 1;
            }
        }
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
        cout << longest_increasing_subsequence(v, n) << endl;
    }
    return 0;
}