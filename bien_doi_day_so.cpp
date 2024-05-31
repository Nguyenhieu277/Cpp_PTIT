#include <bits/stdc++.h>
using namespace std;
int find_min_operation(int a[], int n){
    int l = 0, r = n - 1;
    int res = 0;
    while(l <= r){
        if(a[l] == a[r]){
            l++;
            r--;
        }
        else if(a[l] > a[r]){
            r--;
            a[r] += a[r + 1];
            res++;
        }
        else{
            l++;
            a[l] += a[l - 1];
            res++;
        }
    }
    return res;
}
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
        cout << find_min_operation(a, n);
        cout << endl;
    }
    return 0;
}