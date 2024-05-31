#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
const int dx[2] = {1, 0};
const int dy[2] = {0, 1};
int a[max_n][max_n], n, k, cnt = 0;
void Loang(int x, int y, int sum){
    if(x == n - 1 && y == n - 1 && k == sum){
        cnt++;
    }
    for(int i = 0; i < 2; i++){
        int x1 = dx[i] + x;
        int y1 = dy[i] + y;
        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < n){
            Loang(x1, y1, sum + a[x1][y1]);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        cnt = 0;
        Loang(0, 0, a[0][0]);
        cout << cnt << endl;
    }
    return 0;
}
