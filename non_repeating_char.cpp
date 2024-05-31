#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        for(char it : s){
            mp[it]++;
        }
        for(char it : s){
            if(mp[it] == 1){
                cout << it;
                mp[it] = -1;
            }
        }
        cout << endl;
    }
    return 0;
}