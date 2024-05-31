#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> v1, v2;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v1.push_back(x);
            mp[x]++;
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            v2.push_back(x);
        }
        for(int i = 0; i < m; i++){
            if(mp.find(v2[i]) != mp.end()){
                for(int j = 0; j < mp[v2[i]]; j++){
                    cout << v2[i] << " ";
                }
                mp.erase(v2[i]);
            }
        }
        for(auto it : mp){
            for(int j = 0; j < it.second; j++){
                cout << it.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}