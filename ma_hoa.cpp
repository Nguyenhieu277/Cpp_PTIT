#include <bits/stdc++.h>
using namespace std;
void insert(vector<pair<char, int>> &v, char x){
    for(auto &it : v){
        if(it.first == x){
            it.second++;
            return;
        }
    }
    v.push_back({x, 1});
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        vector<pair<char, int>> v;
        string s;
        getline(cin, s);  
        for(int i = 0; i < s.length(); i++){
            insert(v, s[i]);
        }  
        for(auto it : v){
            cout << it.first << it.second;
        }
        cout << endl;
    }
    return 0;
}