#include <bits/stdc++.h>
using namespace std;
double square_roots(int n){
    if(n == 1){
        return 1;
    }
    else return n + sqrt(square_roots(n - 1));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fixed << setprecision(5) << (double)sqrt(square_roots(n)) << endl;
    }
    return 0;
}