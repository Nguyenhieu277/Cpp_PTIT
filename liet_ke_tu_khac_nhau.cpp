#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
int main(){
    fstream File;
    File.open("VANBAN.in");
    set<string> se;
    string s;
    while(File >> s){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        se.insert(s);
    }
    File.close();
    for(auto i : se){
        cout << i << endl;
    }
    return 0;
}