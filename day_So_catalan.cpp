#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
string operator * (string s, int n){
    if(s == "0" || n == 0){
        return "0";
    }
    int nho = 0;
    string res(s.size(), '0');
    for(int i = s.size() - 1; i >= 0; i--){
        nho += (s[i] - '0') * n;
        res[i] = nho % 10 + '0';
        nho /= 10;
    }
    if(nho > 0){
        res = to_string(nho) + res;
    }
    return res;
}
string Catalan(int n){
    vector<int> v;
    for(int i = n + 2; i <= 2 * n; i++){
        v.push_back(i);
    }
    for(int i = 2; i <= n; i++){
        int temp = i;
        for(int j = 0; j < v.size(); j++){
            if(temp > 1){
                int g = __gcd(v[j], temp);
                temp /= g;
                v[j] /= g;
            }
        }
    }
    string res = "1";
    for(int i = 0; i < v.size(); i++){
        res = res * v[i];
    }
    return res;
}
int main(){
    quick();
    short int n;
    cin >> n;
    cout << Catalan(n + 1) << endl;
    return 0;
}