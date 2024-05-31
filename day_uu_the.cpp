#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int i, n = 0;
        char c;
        int a[1001];
        int even = 0, odd = 0;
        while(scanf("%d%c", &i, &c) == 2){
            a[n] = i;
            ++n;
            if(c == '\n'){
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0) even++;
            else odd++;
        }
        if((even + odd) % 2 == 0 && even > odd || (even + odd) % 2 == 1 && even < odd){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}