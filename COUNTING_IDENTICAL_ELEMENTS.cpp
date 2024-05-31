#include <bits/stdc++.h>
using namespace std;
#define max 100
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        map<int, int> mp;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            mp[a[0][i]] = 1;
        }
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mp[a[i][j]] == i)
                    mp[a[i][j]]++;
            }
        }
        for(auto i : mp){
            if(i.second == n){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

