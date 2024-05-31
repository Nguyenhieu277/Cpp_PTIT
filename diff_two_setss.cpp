#include <bits/stdc++.h>
using namespace std;
string tolower(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    return s;
}
int main(){
    map<string, int> mp1, mp2;
    fstream File1, File2;
    File1.open("DATA1.in");
    string s;
    while(File1 >> s){
        s = tolower(s);
        mp1[s]++;
    }
    File1.close();
    File2.open("DATA2.in");
    while(File2 >> s){
        s = tolower(s);
        mp2[s]++;
    }
    File2.close();
    set<string> s1, s2;
    for(auto it = mp1.begin(); it != mp1.end(); it++){
        if(mp2.find(it->first) == mp2.end()){
           s1.insert(it->first);
        }
    }
    for(auto it = mp2.begin(); it != mp2.end(); it++){
        if(mp1.find(it->first) == mp1.end()){
           s2.insert(it->first);
        }
    }
    for(auto it : s1){
        cout << it << " ";
    }
    cout << endl;
    for(auto it : s2){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}