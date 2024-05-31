#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    return n % 3 == 0 || n % 10 == 3;
}
int noThrees(int n){
    int res = 0;
    int ans = 1;
    while(true){
        if(!check(ans)){
            ++res;
            if(res == n){
                return ans;
            }
        }
        ++ans;
    }
}
int main(){
    int n;
    cin >> n;
    cout << noThrees(n) << endl;
    return 0;
}