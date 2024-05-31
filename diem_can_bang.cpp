#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], sum = 0;
        for(int &i : a){
            cin >> i;
            sum += i;
        }
        int res = 0, flag = -1;
        for(int i = 0; i < n; i++){
            if(res * 2 == sum - a[i]){
                flag = i + 1;
                break;
            }
            res += a[i];
        }
        cout << flag << endl;
    }
    return 0;
}