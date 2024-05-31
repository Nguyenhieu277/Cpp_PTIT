#include <bits/stdc++.h>
using namespace std;
string convert(string s){
    string res = "";
    res += toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        res += tolower(s[i]);
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s, word;
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        while(ss >> word){
            v.push_back(convert(word));
        }
        if(n == 1){
            cout << v[v.size() - 1] << " ";
            for(int i = 0; i < v.size() - 1; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if(n == 2){
            for(int i = 1; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << v[0] << endl;
        }
    }
    return 0;
}