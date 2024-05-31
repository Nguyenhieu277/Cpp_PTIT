#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
long long lcm(long long a, long long b){
    return a / gcd(a, b) * b;
}
long long check(long long x, long long y, long long z, long long n){
    long long p1 = pow(10, n - 1), p2 = pow(10, n);
    long long lcm_x_y = lcm(x, y);
    long long lcm_all = lcm(lcm_x_y, z);
    long long num = ((p1 + lcm_all - 1) / lcm_all) * lcm_all;
    if(num >= p2) return -1;
    return num;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        cout << check(x, y, z, n);
        cout << endl;
    }
    return 0;
}