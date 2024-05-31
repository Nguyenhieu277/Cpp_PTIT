#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        vector<string> v;
        string word;
        stringstream ss(s);
        while(ss >> word){
            v.push_back(word);
        }
        for(auto i = v.rbegin(); i != v.rend(); i++){
            cout << *i << " ";
        }
        cout << endl;
    }
    return 0;
}