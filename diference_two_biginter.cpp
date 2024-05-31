#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        if(s1.length() < s2.length() || s1.length() == s2.length() && s1[0] < s2[0]){
            swap(s1, s2);
        }
        while(s1.length() != s2.length()){
            s2.insert(0, "0");
        }
        string res;
        int nho = 0;
        int x;
        for(int i = s1.length() - 1; i >= 0; i--){
            if(s1[i] >= s2[i]){
                x = s1[i] - s2[i];
            }
            else{
                x = s1[i] - s2[i] + 10;
                s1[i - 1] -= 1;
            }
            res.push_back(x + '0');
        }
        for(int i = 0; i < res.length() / 2; i++){
            swap(res[i], res[res.size() - i - 1]);
        }
        cout << res << endl;
    }
}