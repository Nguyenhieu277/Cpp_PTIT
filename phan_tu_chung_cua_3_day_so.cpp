#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
void union_of_three_array(vector<ll> &v1, vector<ll> &v2, vector<ll> &v3){
    int i = 0, j = 0, k = 0;
    int flag = 0;
    while(i < v1.size() && j < v2.size() && k < v3.size()){
        if(v1[i] == v2[j] && v2[j] == v3[k]){
            cout << v1[i] << " ";
            flag = 1;
            i++; j++; k++;
        }
        else if(v1[i] < v2[j]){
            i++;
        }
        else if(v2[j] < v3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    if(!flag) cout << -1;
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<ll> v1, v2, v3;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            v1.push_back(x);
        }
        for(int i = 0; i < m; i++){
            ll x; cin >> x;
            v2.push_back(x);
        }
        for(int i = 0; i < k; i++){
            ll x; cin >> x;
            v3.push_back(x);
        }
        union_of_three_array(v1, v2, v3);
    }
    return 0;
}