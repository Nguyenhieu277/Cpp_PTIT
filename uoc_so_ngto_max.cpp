#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fac_prime(ll n){
    ll ans = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            n /= i;
            if(ans < i){
                ans = i;
            }
        }
    }
    if(ans < n) ans = n;
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << fac_prime(n);
        cout << endl;
    }
    return 0;
}