#include <bits/stdc++.h>
using namespace std;
bool ascending(string s){
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] <= s[i - 1]) return false;
    }
    return true;
}
bool identical(string s){
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] != s[i - 1]) return false;
    }
    return true;
}
bool locphat(string s){
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] != '6' && s[i] != '8') return false;
    }
    return true;
}
bool first_second(string s){
    if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]) return true;
    return false;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        str.erase(0, 5);
        str.erase(3, 1);
        if(ascending(str) || identical(str) || locphat(str) || first_second(str)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}