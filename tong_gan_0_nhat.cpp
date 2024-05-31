#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, max_sum = 1e9;
        cin >> n;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                int sum = a[i] + a[j];
                if(abs(sum) < abs(max_sum)){
                    max_sum = sum;
                }
            }
        }
        cout << max_sum << endl;
    }
    return 0;
}