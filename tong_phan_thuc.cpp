#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    double sum = 0;
    for(long long i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}