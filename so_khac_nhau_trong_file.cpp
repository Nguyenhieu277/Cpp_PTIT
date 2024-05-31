#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
int main(){
    fstream File;
    File.open("DATA.in");
    map<int, int> mp;
    int s;
    while(File >> s){
        mp[s]++;
    }
    File.close();
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}