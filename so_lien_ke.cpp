#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int flag = 0;
        while(n >= 10){
            int a = n % 10;
            n /= 10;
            int b = n % 10;
            if(abs(a - b) != 1){
                flag = 1;
                break;
            }
            n /= 10;
        }
        if(!flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}