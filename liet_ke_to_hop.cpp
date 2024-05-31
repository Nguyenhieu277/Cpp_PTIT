#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int a[1001];
int n, k, flag = 1;
void init(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void generation(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        flag = 1;
        init();
        while(flag){
            for(int i = 1; i <= k; i++){
                cout << a[i];
            }
            generation();
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}