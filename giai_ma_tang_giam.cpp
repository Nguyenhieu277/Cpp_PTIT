#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        for(int i = 0; i <= s.length(); i++){
            st.push(i + 1);
            if(s[i] == 'I' || i == s.size()){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
            }
        }
        cout << endl;
    }
    return 0;
}