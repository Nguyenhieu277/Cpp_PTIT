#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        set<int> s1, s2, s3;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            s1.insert(x);
            s3.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            if(s1.find(x) != s1.end()){
                s2.insert(x);
            }
            s3.insert(x);
        }
        for(int i : s3){
            cout << i << " ";
        }
        cout << endl;
        for(int i : s2){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}