#include <bits/stdc++.h>
using namespace std;
bool prime_number(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}
void check(int n){
     for(int i = 2; i <= n / 2; i++){
        if(prime_number(i) && prime_number(n - i)){
            cout << i << " " << n - i << endl;
            return;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        check(n);
    }
    return 0;
}