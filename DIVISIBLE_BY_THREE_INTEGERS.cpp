#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}
ll solve(ll x, ll y, ll z, ll n){
    ll temp = lcm(lcm(x, y), z);
    ll p1 = pow(10, n - 1), p2 = pow(10, n);
    ll res = (p1 + temp - 1) / temp * temp; // so nho nhat chia het cho temp >= p1
    if(res < p2) return res;
    else return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        cout << solve(x, y, z, n) << endl;
    }
    return 0;
}