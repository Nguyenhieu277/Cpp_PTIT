#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binpow(ll x, ll y, ll p){
    ll res = 1;
    x %= p;
    while(y != 0){
        if(y % 2 == 1){
            res *= (x % p);
            res %= p;
        }
        y /= 2;
        x *= (x % p);
        x %= p;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll x, y, p;
        cin >> x >> y >> p;
        cout << binpow(x, y, p) << endl;
    }
    return 0;
}