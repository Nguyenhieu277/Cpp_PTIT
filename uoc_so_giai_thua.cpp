#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
ll legendre(ll n, ll p){
    ll res = 0;
    for(ll i = p; i <= n; i *= p){
        res += n / i;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, p;
        cin >> n >> p;
        cout << legendre(n, p) << endl;
    }
    return 0;
}