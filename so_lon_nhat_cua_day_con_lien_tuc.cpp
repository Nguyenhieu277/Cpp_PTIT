#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &i : a) cin >> i;
        deque<int> dq;
        for(int i = 0; i < n; i++){
            while(!dq.empty() && a[i] >= a[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            while(dq.front() <= i - k){
                dq.pop_front();
            }
            if(i >= k - 1){
                cout << a[dq.front()] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}