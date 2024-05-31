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
        int n;
        cin >> n;
        set<int> s;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        for(auto it : mp) s.insert(it.second);
        for(auto it = s.rbegin(); it != s.rend(); it++){
            for(auto i : mp){
                if(i.second == *it){
                    for(int j = 0; j < i.second; j++){
                        cout << i.first << " ";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}