#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(int a[], int n, int k, int b){
    ll sum = 0;
    for(int i = 0; i < k; i++){
        if(a[i] == 1){
            sum++;
        }
    }
    ll res = sum;
    for(int i = k; i < n; i++){
        sum = sum - a[i - k] + a[i];
        res = min(res, sum);
    }
    cout << res << endl;
}
int main(){
    quick();
    int n, k, b;
    cin >> n >> k >> b;
    int a[n] = {};
    for(int i = 0; i < b; i++){
        int x; cin >> x;
        a[x - 1] = 1;
    }
    slidingWindow(a, n, k, b);
    return 0;
}