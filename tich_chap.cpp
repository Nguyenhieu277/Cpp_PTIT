#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        ll a[n][m], kernel[3][3];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> kernel[i][j];
            }
        }
        ll sum = 0;
        for(int i = 0; i <= n - 3; i++){
            for(int j = 0; j <= m - 3; j++){
                for(int k = 0; k < 3; k++){
                    for(int h = 0; h < 3; h++){
                        sum += a[k + i][h + j] * kernel[k][h];
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}