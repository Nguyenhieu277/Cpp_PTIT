#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + 1], b[n + 1];
        a[0] = b[0] = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            a[i] = a[i - 1] + x;
        }
        for(int i = 1; i <= m; i++){
            int x; cin >> x;
            b[i] = b[i - 1] + x;
        }
        int max_element = max(a[n], b[m]);
        for(int i = 1; i <= min(n, m); i++){
            max_element = max(max_element, max(a[i] + b[m] - b[i], b[i] + a[n] - a[i]));
        }
        cout << max_element << endl;
    }
    return 0;
}