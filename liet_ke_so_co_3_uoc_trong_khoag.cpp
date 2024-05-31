#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
bool prime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        ll cnt = 0;
        for(int i = sqrt(l); i <= sqrt(r); i++){
            if(prime(i)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}