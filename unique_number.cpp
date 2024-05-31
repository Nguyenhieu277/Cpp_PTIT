#include <bits/stdc++.h>
using namespace std;
int main(){
    fstream File;
    File.open("DATA.in");
    map<int, int> mp;
    while(1){
        int n;
        while(File >> n){
            mp[n]++;
        }  
        if(File.eof()){
            break;
        }
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}