#include <bits/stdc++.h>
using namespace std;
void fac_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        while(n % i == 0){
            n /= i;
            mu++;
        }
        if(mu != 0) cout << i << " " << mu << " ";
    }
    if(n > 1) cout << n << " " << 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        fac_prime(n);
        cout << endl;
    }
    return 0;
}