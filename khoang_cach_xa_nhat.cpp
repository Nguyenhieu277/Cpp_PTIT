#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
/*
                      _oo0oo_
                     o8888888o
                     88" . "88
                     (| -_- |)
                     0\  =  /0
                   ___/`---'\___
                 .' \\|     |// '.
                / \\|||  :  |||// \
               / _||||| -:- |||||- \
              |   | \\\  -  /// |   |
              | \_|  ''\---/''  |_/ |
              \  .-\__  '-'  ___/-. /
            ___'. .'  /--.--\  `. .'___
         ."" '<  `.___\_<|>_/___.' >' "".
        | | :  `- \`.;`\ _ /`;.`/ - ` : | |
        \  \ `_.   \_ __\ /__ _/   .-` /  /
    =====`-.____`.___ \_____/___.-`___.-'=====
                      `=---='

    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     Phật phù hộ Hiếu, code không bao giờ BUG
    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      int a[n];
      for(int &i : a){
        cin >> i;
      }
      int _max = -1e9;
      for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= i; j--){  
          if(j - i <= _max) break;
          if(a[i] <= a[j]){
            _max = max(_max, j - i);
          }
        }
      }
      cout << _max << endl;
    }
    return 0;
}