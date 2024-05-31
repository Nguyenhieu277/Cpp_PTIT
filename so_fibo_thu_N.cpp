#include <bits/stdc++.h>
using namespace std;
void check_fibo(int n){
    long long a[100];
    a[0] = 0; a[1] = 1;
    for(int i = 2; i <= 92; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        check_fibo(n);
        cout << endl;
    }
    return 0;
}