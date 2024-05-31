#include <bits/stdc++.h>
using namespace std;
#define max 100
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        int c1 = 0, c2 = m - 1, h1 = 0, h2 = n - 1;
        while(h1 < h2 && c1 < c2){
            int prev = a[h1 + 1][c1];
            for(int i = c1; i <= c2; i++){
                int current = a[h1][i];
                a[h1][i] = prev;
                prev = current;
            }
            ++h1;
            for(int i = h1; i <= h2; i++){
                int current = a[i][c2];
                a[i][c2] = prev;
                prev = current;
            }
            c2--;
            if(h1 <= h2){
                for(int i = c2; i >= c1; i--){
                    int current = a[h2][i];
                    a[h2][i] = prev;
                    prev = current;
            }
            --h2;
            }
            if(c1 <= c2){
                for(int i = h2; i >= h1; i--){
                    int current = a[i][c1];
                    a[i][c1] = prev;
                    prev = current;
            }
            c1++;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

