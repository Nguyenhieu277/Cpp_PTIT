#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(a[0] > 15){
        cout << 15 << endl;
    }
    else{
        int sum = 0;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i - 1] <= 15){
                sum = a[i];
            }
            else sum += 15;
        }
        cout << sum << endl;
    }
    return 0;
}