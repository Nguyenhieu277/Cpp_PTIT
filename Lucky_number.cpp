#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum_digit(ll n){
    int sum = 0;
    while(n != 0){
        int m = n % 10;
        sum += m;
        n /= 10;
    }
    return sum;
}
bool check_lucky(string s){
    int sum = 0;
    for(int i = 0; i < (ll)s.size(); i++){
        sum += s[i] - '0';
    }
    if(sum == 9) return true;
    while(sum >= 9){
        if(sum_digit(sum) == 9) return true;
        sum = sum_digit(sum);
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check_lucky(s)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}