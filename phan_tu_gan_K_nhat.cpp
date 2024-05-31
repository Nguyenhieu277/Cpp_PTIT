#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &i : a){
            cin >> i;
        }
        int x, k;
        cin >> k >> x;
        for(int i = 0; i < k / 2; i++){
            auto it1 = lower_bound(a.begin(), a.end(), x);
            if(it1 != a.begin()) --it1;
            auto it2 = upper_bound(a.begin(), a.end(), x);
            // if(it2 != a.end()) ++it2;
            cout << *it1 << " " << *it2 << " ";
            --it1; it2++;
        }
        cout << endl;
    }
    return 0;
}