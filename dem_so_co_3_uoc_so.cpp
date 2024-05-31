#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime(ll n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int cnt = 0;
        for(ll i = 1; i <= sqrt(n); i++){
            if(prime(i)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}