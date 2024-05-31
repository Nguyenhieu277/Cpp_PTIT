#include <bits/stdc++.h>
using namespace std;
int check(int a, int m){
    for(int i = 0; i < m; i++){
        if(a * i % m == 1){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, m;
        cin >> a >> m;
        cout << check(a, m) << endl;
    }
    return 0;
}