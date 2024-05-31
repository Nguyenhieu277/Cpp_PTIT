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
        long long cnt = 0;
        while(j < n){
            if(a[j] - a[i] < k){
                cnt += j - i;
                j++;
            }
            else{
                i++;
                if(a[i] == a[j]) j++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}