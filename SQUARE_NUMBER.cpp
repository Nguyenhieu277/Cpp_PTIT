#include <bits/stdc++.h>
using namespace std;
bool square_number(int n){
    int x = sqrt(n);
    return x*x == n;
}
int main(){
    int a, b, sum = 0;
    cin >> a >> b;
    for(int i = min(a, b); i <= max(a, b); i++){
        if(square_number(i)){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}