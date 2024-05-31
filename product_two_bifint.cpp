#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void product_two_int(string a, string b, vector<string> c){
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    ll lena = a.length(), lenb = b.length();
    for(int i = 0; i < lenb; i++){
        int nho = 0;
        int j;
        for(j = 0; j < lena; j++){
            int x = (b[i] - '0') * (a[j] - '0') + (c[i + j][0] - '0') + nho;
            c[i + j][0] = x % 10 + '0';
            nho = x / 10;
        }
        if(nho > 0) c[i + lena][0] = nho + '0';
    }
     while (c.size() > 1 && c.back() == "0") {
        c.pop_back(); 
    }
    reverse(c.begin(), c.end());
    for(auto it : c){
        cout << it;
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        vector<string> c(a.length() + b.length(), "0");
        product_two_int(a, b, c);
    }
    return 0;
}