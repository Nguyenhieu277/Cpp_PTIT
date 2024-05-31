#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
vector<ll> average_max(vector<ll> &v, int n, int k){
    deque<ll> dq;
    vector<ll> res(k, 0);
    double sum = 0;
    double average = -1e9; 
    for(int i = 0; i < n; i++){
        dq.push_front(v[i]);
        if(dq.size() == k){
            for(int j = 0; j < dq.size(); j++){
                sum += dq[j];
            }
            sum /= k;
            if(average < sum){
                average = sum;
                for(int j = 0; j < res.size(); j++){
                    res[j] = dq[j];
                }
            }
            sum = 0;
            dq.pop_back();
        }
    }
    return res;
}

int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<ll> res = average_max(v, n, k);
        reverse(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
