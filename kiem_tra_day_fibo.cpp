#include <bits/stdc++.h>
using namespace std;
bool fibo_check(int n){
    int a[100];
    a[0] = 0; a[1] = 1;
    for(int i = 2; i < 92; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    for(int i = 0; i < 92; i++){
        if(a[i] == n) return true;
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        for(int i = 0; i < n; i++){
            if(fibo_check(a[i])) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}