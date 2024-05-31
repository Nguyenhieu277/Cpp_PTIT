#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum = 0;
        multiset<char> se;
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                sum += s[i] - '0';
            }
            else{
                se.insert(s[i]);
            }
        }
        for(char i : se){
            cout << i;
        }
        cout << sum << endl;
    }
    return 0;
}