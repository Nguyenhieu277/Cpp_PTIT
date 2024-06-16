#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void Dp(vector<int> &v, int n){
    vector<int> left(n + 1), right(n + 1);
    for(int i = 0; i < n; i++){
        left[i] = 1;
        for(int j = 0; j < i; j++){
            if(v[i] > v[j]){
                left[i] = max(left[i], left[j] + 1);
            }
        }
    }
    for(int i = n - 1; i >= 0; i--){
        right[i] = 1;
        for(int j = n - 1; j > i; j--){
            if(v[i] > v[j]){
                right[i] = max(right[i], right[j] + 1);
            }
        }
    }
    int res = INT_MIN;
    for(int i = 0; i < n; i++){
        res = max(res, left[i] + right[i] - 1);
    }
    cout << res << endl;
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        Dp(v, n);
    }
    return 0;
}
