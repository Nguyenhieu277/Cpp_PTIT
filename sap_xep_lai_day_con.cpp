#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for(int &i : a){
            cin >> i;
            v.push_back(i);
        }
        sort(v.begin(), v.end());
        int l, r;
        for(int i = 0; i < n; i++){
            if(a[i] != v[i]){
                l = i + 1;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--){
            if(a[i] != v[i]){
                r = i + 1;
                break;
            }
        }
        cout << l << " " << r << endl;
    }
    return 0;
}