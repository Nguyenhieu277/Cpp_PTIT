#include <bits/stdc++.h>
using namespace std;
bool fibonacci(int n){
    long long f[100];
    f[0] = 0, f[1] = 1;
    for(int i = 2; i < 93; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    for(int i = 0; i < 93; i++){
        if(f[i] == n){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            if(fibonacci(a[i])){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}