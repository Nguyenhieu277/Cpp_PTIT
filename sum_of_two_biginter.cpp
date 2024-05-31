#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1;
        cin >> s2;
        if(s1.length() < s2.length()){
            swap(s1, s2);
        }
        while(s1.length() != s2.length()){
            s2.insert(0, "0");
        }
        string res;
        int nho = 0;
        for(int i = s1.length() - 1; i >= 0; i--){
            int x = s1[i] - '0'+ s2[i] - '0' + nho;
            nho = x / 10;
            int z = x % 10;
            res.push_back(z + '0');
        }
        if(nho > 0) res.push_back(nho + '0');
        int r = res.length() - 1, l = 0;
        while(l <= r){
            swap(res[l], res[r]);
            l++; r--;
        }
        cout << res << endl;
    }
}