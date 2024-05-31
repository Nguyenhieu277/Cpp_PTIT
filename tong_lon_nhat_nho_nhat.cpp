#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll change_5_to_6(ll n){
    ll res = 0, temp = 1;
    while(n != 0){
        ll m = n % 10;
        if(m == 5){
            m = 6;
        }
        res += m * temp;
        temp *= 10;
        n /= 10;
    }
    return res;
}
ll change_6_to_5(ll n){
    ll res = 0, temp = 1;
    while(n != 0){
        ll m = n % 10;
        if(m == 6){
            m = 5;
        }
        res += m * temp;
        temp *= 10;
        n /= 10;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll sum_min = change_6_to_5(n) + change_6_to_5(m);
        ll sum_max = change_5_to_6(n) + change_5_to_6(m);
        cout << sum_min << " " << sum_max << endl;
    }
    return 0;
}