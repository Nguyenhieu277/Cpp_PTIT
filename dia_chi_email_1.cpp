#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word){
        v.push_back(word);
    }
    string email = v[v.size() - 1];
    for(int i = 0; i < v.size() - 1; i++){
        email += v[i][0];
    }
    email += "@ptit.edu.vn";
    cout << email << endl;
    return 0;
}