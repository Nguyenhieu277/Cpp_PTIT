#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        vector<int> v;
        for(int i = 0; i < a * b; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}