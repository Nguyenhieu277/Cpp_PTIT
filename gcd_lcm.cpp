#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(int a, int b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
ll lcm(int a, int b){
    return a / gcd(a, b) * b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << endl;
    }
    return 0;
}