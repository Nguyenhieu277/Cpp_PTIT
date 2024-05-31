#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s[0] == '0'){
            cout << "INVALID" << endl;
        }
        else{
            set<int> se;
            for(int i = 0; i < s.size(); i++){
                if(s[i] < '0' || s[i] > '9'){
                    cout << "INVALID" << endl;
                    break;
                }
                else{
                    se.insert(s[i] - '0');
                }
            }
            if(se.size() == 10) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}