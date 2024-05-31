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
        for(int i = 0; i < n; i++){
            if(a[i] != 0 && a[i + 1] != 0 && a[i] == a[i + 1]){
                a[i] = a[i] * 2;
                a[i + 1] = 0;
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                cout << a[i] << " ";
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}    