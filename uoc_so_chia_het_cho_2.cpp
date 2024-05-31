#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fac_prime(ll n){
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            if(i % 2 == 0){
                cnt++;
            }
            if(i != (n / i) && (n / i) % 2 == 0) cnt++;
        }
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << fac_prime(n) << endl;
    }
    return 0;
}