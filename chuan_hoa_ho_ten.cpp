#include <bits/stdc++.h>
using namespace std;
string convert(string s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
int main(){
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string word;
    while(ss >> word){
        v.push_back(convert(word));
    }
    string name = v[v.size() - 1];
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    string res = "";
    for(int i = 0; i < v.size() - 1; i++){
        res += v[i];
        if(i != v.size() - 2){
            res += " ";
        }
    }
    res += ",";
    cout << res << " " << name << endl;
}