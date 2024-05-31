#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] < '0' || s[i] > '9'){
            return false;
        }
    }
    
    if(s.length() > 10) return false;
    return true;
}
int main(){
    fstream File;
    File.open("DATA.in", ios::in);
    long long res = 0;
    while(1){
        string s;
        File >> s;
        if(File.eof()){
            break;
        }
        if(check(s)){
            res += stoi(s);
        }
    }
    File.close();
    cout << res << endl;
    return 0;
}