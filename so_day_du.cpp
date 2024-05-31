#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    set<int> se;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            se.insert(s[i] - '0');
        }
    }
    return se.size() == 10;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == '0'){
            cout << "INVALID" << endl;
        }
       else{
            int flag = 0;
            for(int i = 0 ; i < s.length(); i++){
                if(s[i] < '0' || s[i] > '9'){
                    flag = 1;
                    break;
                }
            }
            if(flag) cout << "INVALID" << endl;
            else{
                if(check(s)) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
    return 0;
}