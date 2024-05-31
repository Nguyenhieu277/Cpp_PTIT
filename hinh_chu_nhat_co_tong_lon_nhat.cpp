#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
ll kadane_algorithm(vector<ll> &v){
    ll max_ending_here = 0, max_so_far = -100000000;
    for(int i = 0; i < v.size(); i++){
        max_ending_here = max_ending_here + v[i];
        if(max_ending_here > max_so_far){
            max_so_far = max_ending_here;
        }
        if(max_ending_here < 0) max_ending_here = 0;
    }
    return max_so_far;
}
ll rectangle_have_max_sum(int a[][max_n], int n, int m){
    ll sum = -1000000000;
    for(int left = 0; left < m; left++){
        vector<ll> temp(n, 0);
        for(int right = left; right < m; right++){
            for(int i = 0; i < n; i++){
                temp[i] += a[i][right];
            }
            ll tmp = kadane_algorithm(temp);
            sum = max(sum, tmp);
        }
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[max_n][max_n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        cout << rectangle_have_max_sum(a, n, m) << endl;
    }
    return 0;
}