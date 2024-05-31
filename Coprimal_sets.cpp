#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
    if(a == 0 || b == 0) return a;
    else return gcd(b, a % b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m; 
        cin >> n >> m;
        ll s = n * (n + 1) / 2;
        ll sum = (s + m) / 2;
        ll diff = s - sum;
        if(sum - diff == m && gcd(sum, diff) == 1){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}