#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 

ll check(ll a[], int n){
    ll max_pr = -1e9;
    for(int i = 0; i < n; i++){
        ll max_ele = a[i];
        max_pr = max(a[i], max_pr);
        for(int j = i + 1; j < n; j++){
            max_ele = max_ele * a[j];
            max_pr = max(max_pr, max_ele);
        }
    }
    return max_pr;
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(ll &i : a){
            cin >> i;
        }
        cout << check(a, n) << endl;
    }
    return 0;
}
