#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        int flag = -1;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
            if(mp[x] == 2 && flag == -1) flag = x;
        }
        cout << flag << endl;
    }
    return 0;
}