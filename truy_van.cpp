#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
int main(){
    int n;
    cin >> n;
    multiset<int> se;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        se.insert(x);
    }
    int query;
    cin >> query;
    while(query--){
        int operation;
        cin >> operation;
        if(operation == 1){
            int x;
            cin >> x;
            se.insert(x);
        }
        else if(operation == 2){
            int x;
            cin >> x;
            if(se.find(x) != se.end()){
                se.erase(se.find(x));
            }
        }
        else if(operation == 3){
            int x;
            cin >> x;
            if(se.find(x) != se.end()){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}