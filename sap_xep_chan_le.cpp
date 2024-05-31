#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int b[n], cnt = 0;
        for(int i = 0; i < n; i+= 2){
            b[i] = v[cnt++];
        }
        for(int i = 1; i < n; i+= 2){
            b[i] = v[cnt++];
        }
        for(int i : b){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}