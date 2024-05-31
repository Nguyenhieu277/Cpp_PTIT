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
        int n;
        cin >> n;
        int a[4 * n][4 * n];
        int cnt = 1;
        for(int i = 0; i < 4 * n; i++){
            for(int j = 0; j < 4 * n; j++){
                a[i][j] = cnt;
                cnt++;
            }
        }
        vector<int> v1, v2;
        int c1 = 0, c2 = 4 * n - 1, h1 = 0, h2 = 4 * n - 1, count = 1;
        while(count < cnt){
            for(int i = h2; i >= h1; i--){
                if(cnt == count) break;
                v1.push_back(a[i][c2]);
                count++;
           }
            c2--;
            for(int i = h1; i <= h2; i++){
                if(cnt == count) break;
                v2.push_back(a[i][c1]);
                count++;
           }
            c1++;
            for(int i = c2; i >= c1; i--){
                if(cnt == count) break;
                v1.push_back(a[h1][i]);
                count++;
            }
            h1++;
            for(int i = c1; i <= c2; i++){
                if(cnt == count) break;
                v2.push_back(a[h2][i]);
                count++;
            }
            h2--;
            for(int i = h1; i <= h2; i++){
                if(cnt == count) break;
                v1.push_back(a[i][c1]);
                count++;
            }
            c1++;
            for(int i = h2; i >= h1; i--){
                if(cnt == count) break;
                v2.push_back(a[i][c2]);
                count++;
            }
            c2--;
            for(int i = c1; i <= c2; i++){
                if(cnt == count) break;
                v1.push_back(a[h2][i]);
                count++;
            }
            h2--;
            for(int i = c2; i >= c1; i--){
                if(cnt == count) break;
                v2.push_back(a[h1][i]);
                count++;
            }
            h1++;
        }
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());
        for(int i : v1){
            cout << i << " ";
        }
        cout << endl;
        for(int i : v2){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}