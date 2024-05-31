#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str[n];
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, str[i]);
    }
    set<string> se;
    for(int i = 0; i < n; i++){
        se.insert(str[i]);
    }
    cout << se.size() << endl;
    return 0;
}