#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 1e9, cnt = 0;
    for(int i = 1; i < n; i++){
        ans = min(ans, a[i] - a[i - 1]);
    }
    for(int i = 1; i < n; i++){
        if(ans == a[i] - a[i - 1]){
            cnt++;
        }
    }
    cout << ans << " " << cnt << endl;
    return 0;
}