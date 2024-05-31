#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
ll fibonacci(int n){
    ll a[1001];
    a[0] = 0; a[1] = 1;
    for(int i = 2; i < 1001; i++){
        a[i] = (a[i - 1] % mod) + (a[i - 2] % mod);
        a[i] %= mod;
    }
    return a[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fibonacci(n) << endl;
    }
    return 0;
}
