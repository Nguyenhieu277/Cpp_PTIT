#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
const int dx[] = {-1, 0, 1, 0}; 
const int dy[] = {0, 1, 0, -1};
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int n, m, u, v, s, t;
int a[max_n][max_n], d[max_n][max_n];
int visited[max_n][max_n]; 
int ans = INT_MAX;
int BFS(int x, int y){
    if(a[x][y] == 0 || a[s][t] == 0) return -1;
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = 1;
    d[x][y] = 0;
    while(!q.empty()){
        pair<int, int> k = q.front();
        q.pop();
        int k1 = k.first, k2 = k.second;
        if(k1 == s && k2 == t) return d[s][t];
        for(int i = 0; i < 4; i++){
            int x1 = k1 + dx[i];
            int y1 = k2 + dy[i];
            if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && !visited[x1][y1] && a[x1][y1] == 1){
                q.push({x1, y1});
                visited[x1][y1] = 1;
                d[x1][y1] = d[k1][k2] + 1;
            }
        }
    }
    return -1;
}
void input(){
    cin >> n >> m >> u >> v >> s >> t;
    memset(visited, 0, sizeof(visited));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        input();
        if(u == s && v == t){
            cout << 0 << endl;
        }
        else{
            
            cout << BFS(u, v) << endl;
        }
    }
    return 0;
}