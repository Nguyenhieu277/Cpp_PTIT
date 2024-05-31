#include <bits/stdc++.h>
using namespace std;
#define max 100
int a[max][max], n, m;
const int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void Loang(int x, int y){
    a[x][y] = 0;
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 1){
            Loang(x1, y1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] == 1){
                    cnt++;
                    Loang(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}