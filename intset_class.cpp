#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("DATA.in", "r", stdin);
    int n, m;
    cin >> n >> m;
    map<int, int> mp1, mp2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp1[x]++;   
    }
    for(int i = 0; i < m; i++){
        int x; cin >> x;
        mp2[x]++;
    }
    for(auto it : mp1){
        if(mp2[it.first] > 0){
            cout << it.first << " ";
        }
    }
    return 0;
}