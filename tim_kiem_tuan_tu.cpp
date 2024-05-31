#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int linear_search(int a[], int n, int k){
    for(int i = 0; i < n; i++){
        if(a[i] == k) return i + 1;
    }
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << linear_search(a, n, k) << endl;
    }
    return 0;
}