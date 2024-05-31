#include <bits/stdc++.h>
using namespace std;
void fac_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        while(n % i == 0){
            mu++;
            n /= i;
        }
        if(mu >= 1) cout << i << " " << mu << endl;
    }
    if(n > 1) cout << n << " " << 1 << endl;
}
int main(){
    int n;
    cin >> n;
    fac_prime(n);
    return 0;
}