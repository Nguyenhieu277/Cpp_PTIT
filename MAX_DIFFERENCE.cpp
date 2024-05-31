#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int max_difference(int a[], int n){
    if(n < 2) return -1;
    int min_val = 1e9;
    int max_diff = -1;
    for(int i = 0; i < n; i++){
        if(a[i] < min_val){
            min_val = a[i];
        }
        else{
            int diff = a[i] - min_val;
            if(diff > max_diff){
                max_diff = diff;
            }
        }
    }
    if(max_diff == -1) return -1;
    else return max_diff;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << max_difference(a, n) << endl;
    }
    return 0;
}