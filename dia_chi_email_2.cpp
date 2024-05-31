#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string word;
        vector<string> v;
        stringstream ss(s);
        while(ss >> word){
            v.push_back(word);
        }
        string res = "";
        res += v[v.size() - 1];
        for(int i = 0; i < v.size() - 1; i++){
            res += v[i][0];
        }
        mp[res]++;
        if(mp[res] == 1){
            cout << res << "@ptit.edu.vn" << endl;
        }
        else{
            cout << res << mp[res] << "@ptit.edu.vn" << endl;
        }
    }
    return 0;
}