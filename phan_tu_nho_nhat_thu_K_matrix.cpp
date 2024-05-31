#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        n *= n;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        sort(a, a + n);
        cout << a[k - 1] << endl;
    }
    return 0;
}