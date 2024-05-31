#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool danger(string s){
    ll cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < (ll)s.size(); i++){
        if(s[i] == '0'){
            cnt1++;
            cnt2 = 0;
        }
        else{
            cnt2++;
            cnt1 = 0;
        }
        if(cnt1 >=7 || cnt2 >= 7) return true;
    }
    return false;
}
int main(){
    string s;
    cin >> s;
    if(danger(s)) cout << "YES";
    else cout << "NO";
    return 0;
}