#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    quick();
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
        vector<int> v;
        int c1 = 0, c2 = m - 1, h1 = 0, h2 = n - 1;
        while(c1 <= c2 && h1 <= h2){
            for(int i = c1; i <= c2; i++){
                v.push_back(a[h1][i]);
            }
            h1++;
            for(int i = h1; i <= h2; i++){
                v.push_back(a[i][c2]);
            }
            c2--;
            if(h1 <= h2){
                for(int i = c2; i >= c1; i--){
                    v.push_back(a[h2][i]);
                }
                h2--;
            }
           if(c1 <= c2){
                for(int i = h2; i >= h1; i--){
                    v.push_back(a[i][c1]);
                }
                c1++;
            }
        }
        reverse(v.begin(), v.end());
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
    }
}