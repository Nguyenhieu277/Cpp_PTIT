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
    fstream File1, File2;
    File1.open("DATA1.in");
    map<string, int> mp1, mp2, mp3;
    string s;
    while(File1 >> s){
        s = tolower(s);
        mp2[s]++;   
        mp1[s]++;
    }
    File1.close();
    File2.open("DATA2.in");
    while(File2 >> s){
        s = tolower(s);
        mp3[s]++;
        mp1[s]++;
    }
    File2.close();
    for(auto it : mp1){
        cout << it.first << " ";
    }
    cout << endl;
    for(auto it : mp2){
        if(mp3[it.first] > 0){
            cout << it.first << " ";
        }
    }
    cout << endl;
    return 0;
}