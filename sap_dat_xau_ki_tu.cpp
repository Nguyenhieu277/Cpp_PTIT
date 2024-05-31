#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        int max_ele = -1;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
            if(mp[s[i]] >= max_ele){
                max_ele = mp[s[i]];
            }
        }
        int sum = 0;
        if(max_ele <= (s.length() - max_ele + 1)){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}