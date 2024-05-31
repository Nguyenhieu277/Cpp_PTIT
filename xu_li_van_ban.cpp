#include <bits/stdc++.h>
using namespace std;
string change_to_tolower(string s){
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
string change_to_toupper(string s){
    s[0] = toupper(s[0]);
    return s;
}
int main(){
    string s;
    vector<string> v;
    while(cin >> s){
        s = change_to_tolower(s);
        v.push_back(s);
    }
    int flag = 0;
    for(auto it : v){
        if(!flag){
            it = change_to_toupper(it);
            flag = 1;
        }
        char str = it[it.size() - 1];
        if(str == '.' || str == '?' || str == '!'){
            it.pop_back();
            cout << it << endl;
            flag = 0;
        }
        else cout << it << " ";
    }
    return 0;
}