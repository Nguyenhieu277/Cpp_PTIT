#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n){
    int m = n % 100;
    if(m != 86){
        return false;
    }
    else return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(check(n)){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}