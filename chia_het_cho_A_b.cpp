#include <bits/stdc++.h>
using namespace std;
int divisible(int m, int n, int a, int b){
    int cnt = 0;
    for(int i = m; i <= n; i++){
        if(i % a == 0 || i % b == 0){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        cout << divisible(m, n, a, b) << endl;
    }
    return 0;
}