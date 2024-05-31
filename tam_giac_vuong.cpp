#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool search(vector<ll> &v, int n){
    for(int i = n - 1; i >= 2; i--){
        int l = 0, r = i - 1;
        while(l < r){
            if(v[l] + v[r] == v[i]){
                return true;
            }
            else if(v[l] + v[r] < v[i]){
                l++;
            }
            else r--;
        }
    }
    return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            v[i] *= v[i];
        }
        if(search(v, n)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}