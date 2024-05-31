#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        vector<int> mark(1000);
        for(int i = 'a'; i <= 'z'; i++){
            mark[i] = 0;
        }
        for(int i = 0; i < s.length(); i++){
            mark[s[i]]++;
        }
        int cnt = 0;
        for(int i = 'a'; i <= 'z'; i++){
            if(mark[i] > 0) cnt++;
        }
        if(26 - cnt <= k && s.length() >= 26){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}