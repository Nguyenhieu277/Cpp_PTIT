#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
ll solve(ll a, ll b, ll c){
    ll product = 0;
    a %= c;
    b %= c;
    while(b != 0){
        if(b & 1){
            product += (a % c);
            product %= c;
        }
        a *= (2 % c);
        a %= c;
        b >>= 1;
    }
    return product;
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << endl;
    }
    return 0;
}