#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string word;
    int flag = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] == '.'){
            flag = 1;
            break;
        }
        word += s[i];
    }
    reverse(word.begin(), word.end());
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    if(flag && word == "py"){
        cout << "yes";
    }
    else cout << "no";
    return 0;
}