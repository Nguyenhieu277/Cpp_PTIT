#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        int b[n];
        b[0] = a[0] * a[1];
        b[n - 1] = a[n - 1] * a[n - 2];
        for(int i = 1; i < n - 1; i++){
            b[i] = a[i - 1] * a[i + 1];
        }
        for(int i : b){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}