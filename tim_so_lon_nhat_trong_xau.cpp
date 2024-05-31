#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(!isdigit(s[i])){
                s[i] = ' ';
            }
        }
        string word;
        stringstream ss(s);
        int res = 0;
        while(ss >> word){
            
            res = max(res, stoi(word));
        }
        cout << res << endl;
    }
    return 0;
}