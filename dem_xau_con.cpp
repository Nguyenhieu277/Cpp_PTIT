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
        string s; 
        int k;
        cin >> s >> k;
        set<char> se;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                se.insert(s[j]);
                if(se.size() == k) cnt++;
                else if(se.size() > k){ 
                    break;
                }
            }
            se.clear();
        }
        cout << cnt << endl;
    }
    return 0;
}