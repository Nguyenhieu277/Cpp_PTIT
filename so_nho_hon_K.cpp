#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

void slidingWindow(int a[], int n, int k){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= k){
            count++;
        }
    }
    int cnt = 0;
    for(int i = 0; i < count; i++){
        if(a[i] <= k){
            cnt++;
        }
    }
    int res = cnt;
    for(int i = count; i < n; i++){
        if(a[i] <= k){
            cnt++;
        }
        if(a[i - count] <= k){
            cnt--;
        }
        res = max(res, cnt);
    }
    cout << count - res << endl;
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        slidingWindow(a, n, k);
    }
    return 0;
}