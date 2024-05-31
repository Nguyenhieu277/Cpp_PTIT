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
        for(int i = n - 1; i >= n - k; i--){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}