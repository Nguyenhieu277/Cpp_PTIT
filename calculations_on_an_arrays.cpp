#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll h_x(ll a[], ll n){
    ll product = 1;
    for(int i = 0; i < n; i++){
        product *= (a[i] % MOD);
        product %= MOD;
    }
    return product;
}
ll gcd(ll a, ll b){
    if(a == 0 || b == 0) return a;
    else return gcd(b, a % b);
}
ll powMod(ll a, ll b){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a; res %= MOD;
		}
		a *= a;
		a %= MOD;
		b /= 2;
	}
	return res;
}
ll g_x(ll a[], ll n){
    ll gcd_max = a[0];
    for(int i = 1; i < n; i++){
        gcd_max = gcd(gcd_max, a[i]);
    }
    return gcd_max;
}
int main(){
     int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << powMod(h_x(a, n), g_x(a, n)) << endl;
    }
    return 0;
}