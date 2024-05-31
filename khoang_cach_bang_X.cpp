#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        sort(a, a + n);
        int i = 0, j = 1;
        int flag = 0;
        while(j <= n - 1){
            if(a[j] - a[i] == k){
                flag = 1;
                break;
            }
            else if(a[j] - a[i] < k){
                j++;
            }
            else if(a[j] - a[i] > k){
                i++;
            }
        }
        if(flag) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}