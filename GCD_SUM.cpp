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
ll gcd(ll a, ll b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        for(int i = n;; i++){
            if(gcd(i, sum_digit(i)) > 1){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}