#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll calculate(ll a[], ll n, ll x){
    ll P = 0;
    ll power = 1;
    for (int i = n - 1; i >= 0; --i) {
        P = (P + power * a[i])% MOD;
        power = (power*x) % MOD;
    }
    return P;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << calculate(a, n, x) << endl;
    }
    return 0;
}