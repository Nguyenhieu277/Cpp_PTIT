#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool fibonacci_check(ll n){
    ll a[100];
    a[0] = 0; a[1] = 1;
    for(int i = 2; i < 92; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    for(int i = 0; i < 92; i++){
        if(a[i] == n) return true;
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(fibonacci_check(n)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}