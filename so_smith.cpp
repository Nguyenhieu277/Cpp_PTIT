#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check2(ll n){
    ll sum = 0;
    while(n != 0){
        ll m = n % 10;
        sum += m;
        n /= 10;
    }
    return sum;
}
ll check(ll n){ 
    ll sum = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            sum += check2(i);
            n/= i;
        }
    }
    if(n > 1) sum += check2(n);
    return sum;
}
bool smith(ll n){
    return check(n) == check2(n);
}
bool prime(int n){
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
        if(smith(n) && !prime(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}