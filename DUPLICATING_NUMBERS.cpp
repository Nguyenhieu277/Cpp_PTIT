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
        ll a, x, y;
        cin >> a >> x >> y;
        ll res = gcd(x, y);
        for(ll i = 1; i <= res; i++){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}