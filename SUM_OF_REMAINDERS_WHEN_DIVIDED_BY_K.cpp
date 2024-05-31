#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n, ll k){
    ll sum = 0, temp = k;
    for(ll i = 1; i <= n; i++){
        sum += (i % k);
    }
    return sum == temp;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(check(n, k)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}