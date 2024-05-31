#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
ll binpow(ll a, int b, int mod){
    ll res = 1;
    a %= mod;
    while(b != 0){
        if(b & 1){
            res *= (a % mod);
            res %= mod;
        }
        b >>= 1;
        a *= (a % mod);
        a %= mod;
    }
    return res;
}
ll inverse(ll a, int mod){
    return binpow(a, mod - 2, mod);
}
ll factorial(ll n, int mod){
    ll res = 1;
    for(int i = 1; i <= n; i++){
        res *= (i % mod);
        res %= mod;
    }
    return res;
}
ll solve(ll n, int r, int mod){
    if(r == 0 || n == r) return 1;
    ll numerator = factorial(n, mod);
    ll denominator = (factorial(r, mod) * factorial(n - r, mod)) % mod;
    ll inv_deno = inverse(denominator, mod);
    return (numerator * inv_deno) % mod;
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        int a, b, mod = 1000000007;
        cin >> a >> b;
        cout << solve(a, b, mod) << endl;
    }
    return 0;
}