#include <bits/stdc++.h>
using namespace std;
#define max 100
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int direction = 0;
        int c1 = 0, c2 = m - 1, h1 = 0, h2 = n - 1;
        int cnt = 0;
        while(h1 <= h2 && c1 <= c2){
            if(direction == 0){
                for(int i = c1; i <= c2; i++){
                    cnt++;
                    if(cnt == k) cout << a[h1][i] << endl;
                }
                ++h1;
            }
            else if(direction == 1){
                for(int i = h1; i <= h2; i++){
                    cnt++;
                    if(cnt == k) cout << a[i][c2] << endl;
                }
                c2--;
            }
            else if(direction == 2){
                for(int i = c2; i >= c1; i--){
                     cnt++;
                    if(cnt == k) cout << a[h2][i] << endl;
                }
                --h2;
            }
            else if(direction == 3){
                for(int i = h2; i >= h1; i--){
                    cnt++;
                    if(cnt == k) cout << a[i][c1] << endl;
                }
                c1++;
            }
            direction = (direction + 1) % 4;
        }
      
    }
    return 0;
}

