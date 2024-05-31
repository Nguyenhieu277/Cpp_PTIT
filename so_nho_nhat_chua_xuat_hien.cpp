#include <bits/stdc++.h>
using namespace std;
bool binary_search(long long a[], int n, int x){
    int left = 0, right = n - 1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(a[mid] == x) return true;
        else if(a[mid] > x) right = mid - 1;
        else left = mid + 1;
    } 
    return false;
} 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        if(a[n - 1] <= 0) cout << 1 << endl;
        else{
            for(int i = 1; i <= a[n - 1] + 1; i++){
                if(!binary_search(a, n, i)){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}