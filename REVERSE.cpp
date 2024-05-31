#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll reverse(ll n){
    ll m = 0;
    while(n != 0){
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}
int main(){
    ll n;
    cin >> n;
    cout << reverse(n);
    return 0;
}