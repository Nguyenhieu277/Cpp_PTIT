#include <bits/stdc++.h>
using namespace std;
bool check_special_even(long long n){
    while(n != 0){
        long long m = n % 10;
        if(m % 2 != 0){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(check_special_even(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}