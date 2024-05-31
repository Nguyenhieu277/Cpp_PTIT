#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fac_prime(ll n, ll k){
    ll cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            cnt++;
            if(cnt == k){
                cout << i;
                return;
            }
            n /= i; 
        }
    }
    if(n > 1) cnt++;
    if(cnt == k) cout << n;
    else cout << -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        fac_prime(n, k);
        cout << endl;
    }
    return 0;
}