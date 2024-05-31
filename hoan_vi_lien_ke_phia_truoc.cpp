#include <bits/stdc++.h>
using namespace std;
void previousPermutation(vector<int> &v){
    int i = v.size() - 2;
    while(i > 0 && v[i] <= v[i + 1]){
        i--;
    }
    if(i >= 0){
        int j = v.size() - 1;
        while(v[i] <= v[j]){
            j--;
        }
        swap(v[i], v[j]);
    }
    reverse(v.begin() + i + 1, v.end());
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        // prev_permutation(v.begin(), v.end()); ham san
        previousPermutation(v);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}