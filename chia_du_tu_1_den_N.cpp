#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        for(int i = 0; i <= n; i++){
            sum += i % k;
        }
        cout << sum << endl;
    }
    return 0;
}