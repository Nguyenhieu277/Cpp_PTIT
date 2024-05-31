#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] % 2 != 0 || s[i] != s[s.length() - i - 1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(check(s)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}