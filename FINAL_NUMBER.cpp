#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum_digit(ll n){
    ll sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll res = sum_digit(n);
        while(res >= 10){
           res = sum_digit(res);
        }
        cout << res << endl;
    }
    return 0;
}