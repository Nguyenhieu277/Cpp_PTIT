#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void fac_prime(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            n /= i;
        }
        cout << i << " ";
    }
    if(n > 1) cout << n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        fac_prime(n);
        cout << endl;
    }
    return 0;
}