#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n - 1; i++){
            int x; cin >> x;
            mp[x]++;
        }
        for(int i = 1; i <= n + 1; i++){
            if(mp[i] == 0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}