#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        ll m;
        cin >> s;
        cin >> m;
        ll sum = 0;
        for(int i = 0; i < s.length(); i++){
            sum = sum * 10 + (s[i] - '0');
            sum %= m;
        }
        cout << sum << endl;
    }
    return 0;
}