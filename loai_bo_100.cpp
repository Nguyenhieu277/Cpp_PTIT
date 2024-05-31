#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        for(int i = 0; i < s.size() - 2; i++){
            if(s == "") break;
            if(s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0'){
                s.erase(s.begin() + i, s.begin() + i + 3);
                i -= 2;
            }
        }
        cout << n - s.size() << endl;
    }
    return 0;
}