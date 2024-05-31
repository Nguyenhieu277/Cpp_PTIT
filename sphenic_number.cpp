#include <bits/stdc++.h>
using namespace std;
bool sphenic_number(int n){
    if(n == 1) return false;
    int res = 0;
    for(int i = 2; i <= sqrt(n); i++){
        int mu = 0;
        while(n % i == 0){
            n /= i;
            mu++;
        }
        if(mu > 1) return false;
        if(mu == 1) res++;
    }
    if(n > 1) res++;
    return res == 3;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(sphenic_number(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}