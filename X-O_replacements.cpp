#include <bits/stdc++.h>
using namespace std;
#define max 100
char a[max][max];
int n, m;
pair<int, int> path[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
void Loang(int x, int y){
    a[x][y] = '_';
    for(int i = 0; i < 4; i++){
        int x1 = x + path[i].first;
        int y1 = y + path[i].second;
        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 'O'){
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
        for(int i = 0; i < m; i++){
            if(a[0][i] == 'O') Loang(0, i);
            if(a[n - 1][i] == 'O') Loang(n - 1, i);
        }
        for(int i = 0; i < n; i++){
            if(a[i][0] == 'O') Loang(i, 0);
            if(a[i][m - 1] == 'O') Loang(i, m - 1);
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j] != '_'){
                    cout << "X ";
                }
                else{
                    cout << "O ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}