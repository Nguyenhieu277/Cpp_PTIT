#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime_number(ll n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
bool check(ll n){
    ll sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return prime_number(sum);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(check(n)) cout << n << endl;
        else cout << -1 << endl;
    }
    return 0;
}