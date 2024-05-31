#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
int main(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll h1 = abs(a - b), h2 = abs(b - c), h3 = abs(c - d);
    cout << gcd(gcd(h1, h2), h3);
    return 0;
}