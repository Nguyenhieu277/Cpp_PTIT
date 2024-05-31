#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    getline(cin, s1);
    cin >> s2;
    while(1){
        int x = s1.find(s2);
        if(x == string::npos){
            break;
        }
        s1.erase(x, s2.length() + 1);
    }
    cout << s1;
    return 0;
}