#include <bits/stdc++.h>
using namespace std;
int sum_digit(int n){
    int sum = 0;
    while(n != 0){
        int m = n % 10;
        sum += m;
        n /= 10;
    }
    return sum;
}
int check(int n){
    while(n >= 10){
        n = sum_digit(n);
    }
    return n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}