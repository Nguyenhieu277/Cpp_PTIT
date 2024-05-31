#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long tich = 1, sum = 0;
    for(int i = 1; i <= n; i++){
        tich *= i;
        sum += tich;
    }
    cout << sum << endl;
    return 0;
}