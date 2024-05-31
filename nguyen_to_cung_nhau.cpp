#include <bits/stdc++.h>
using namespace std;
int a[100001];
void sieve(){
    a[0] = a[1] = 1;
    for(int i = 2; i <= sqrt(100001); i++){
        if(a[i] == 0){
            for(int j = i * i; j <= 100001; j += i){
                a[j] = 1;
            }
        }
    }
}
int gcd(int a, int b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
int main(){
    int t;
    cin >> t;
    sieve();
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(gcd(i, n) == 1) cnt++;
        }
        if(!a[cnt]) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}