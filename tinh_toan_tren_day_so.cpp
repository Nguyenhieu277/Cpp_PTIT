#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
ll binpow(ll a, ll n){
    ll res = 1;
    a %= mod;
    while(n != 0){
        if(n & 1){
            res *= (a % mod);
            res %= mod;
        }
        n >>= 1;
        a *= (a % mod);
        a %= mod;
    }
    return res;
}
ll gcd(ll a, ll b){
    if(a == 0 || b == 0) return a;
    else return gcd(b, a % b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(ll &i : a) cin >> i;
        ll product = 1, tmp = a[0];
        for(int i = 1; i < n; i++){
            tmp = gcd(tmp, a[i]);
        }
        for(int i = 0; i < n; i++){
            product *= (a[i] % mod);
            product %= mod;
        }
        cout << binpow(product, tmp) << endl;
    }
    return 0;
}