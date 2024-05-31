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
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        ll mod = gcd(a, b);
        a /= mod; b /= mod;
        while(a % 2 == 0) a /= 2;
        while(a % 3 == 0) a /= 3;
        while(b % 2 == 0) b /= 2;
        while(b % 3 == 0) b /= 3;
        if(a == b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}