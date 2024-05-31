#include <bits/stdc++.h>
using namespace std;
vector<int> arrange_array(vector<int> &a, vector<int> &b){
    map<int, int> mp;
    vector<int> res;
    for(int it : a){
        mp[it]++;
    }
    for(int it : b){
        if(mp[it] > 0){
            for(int i = 0; i < mp[it]; i++){
                res.push_back(it);
            }
                mp[it] = 0;
        }
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second > 0){
            for(int i = 0; i < it->second; i++){
                res.push_back(it->first);
            }
        }
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a, b;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            b.push_back(x);
        }
        vector<int> res = arrange_array(a, b);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}