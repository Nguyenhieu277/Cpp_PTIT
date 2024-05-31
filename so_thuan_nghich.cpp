#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool palindromic(ll n){
    ll m = 0, temp = n;
    while(n != 0){
        m = m * 10 + n % 10;
        n /= 10;
    }
    return temp == m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(palindromic(n)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}