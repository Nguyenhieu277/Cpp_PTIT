#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(!isdigit(s[i])){
                s[i] = ' ';
            }
        }
        string word;
        stringstream ss(s);
        long long sum = 0;
        while(ss >> word){
            sum += stoi(word);
        }
        cout << sum << endl;
    }
    return 0;
}