#include <bits/stdc++.h>
using namespace std;
#define max 101
int a[max][max], n;
const int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
bool Loang(int x, int y, int u, int v){
    a[x][y] = 0;
    if(x == u && y == v) return true;
    for(int i = 0; i < 8; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= n && a[x1][y1] == 1){
            if(Loang(x1, y1, u, v)) return true;
        }
    }
    return false;
}
int main(){
    cin >> n;
    int s, t, u, v;
    cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    if(Loang(s, t, u, v)) cout << "YES\n";
    else cout << "NO\n"; 
    return 0;
}