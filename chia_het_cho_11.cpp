#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        int sum_even = 0, sum_odd = 0;
        for(int i = 0; i < s.length(); i++){
            if(i % 2 == 0) sum_even += s[i] - '0';
            else sum_odd += s[i] - '0';
        }
        if((sum_odd - sum_even) % 11 == 0){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}