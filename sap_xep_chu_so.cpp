#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++){
            string x; cin >> x;
            for(int i = 0; i < x.length(); i++){
                s.insert(x[i] - '0');
            }
        }
        for(auto i : s){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}