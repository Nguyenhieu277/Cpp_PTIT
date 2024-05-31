#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check_moutain(int l, int r, int a[], int n){
    int flag = -1;
    for(int i = l; i < r; i++){
        if(a[i] > a[i + 1]){
            flag = i;
            break;
        }
    }
    if(flag != - 1){
        for(int i = flag; i < r; i++){
            if(a[i] < a[i + 1]){
                flag = -2;
                break;
            }
        }
    }
    return flag != -2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;
        if(check_moutain(l, r, a, n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}