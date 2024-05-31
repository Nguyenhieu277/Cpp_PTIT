#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;
struct cmp{ 
    bool operator() (const string& a, const string& b){ 
        if(a.size() == b.size()){ return a > b; } 
        return a.size() > b.size(); 
    } 
};
bool palindromic(string s){
    int l = 0, r = s.length() - 1;
    if(l == r) return false;
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++; r--;
    }
    return true;
}
int main(){
    string s;
    map<string, int, cmp> mp;
    while(cin >> s){
        if(palindromic(s)){
            mp[s]++;
        }
    }

    for(auto i : mp){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}