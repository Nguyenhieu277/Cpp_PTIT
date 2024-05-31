#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            sum = (2 * sum + s[i] - '0') % 5;
        }
        if(sum % 5 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}