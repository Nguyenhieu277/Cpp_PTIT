#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
ll res[1005][1005];
ll solve(ll n, ll k){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0){
                res[i][j] = 1;
            }
            else{
                res[i][j] = ((res[i - 1][j - 1] % mod) + (res[i - 1][j] % mod)) % mod;
            }
        }
    }
    return res[n][k];
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}