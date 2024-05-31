#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

int a[1001];
int n, flag = 1;
void init(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void generation(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1]){
        i--;
    }
    if(i == 0){
        flag = 0;
    }
    else{
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[j], a[i]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main(){
    quick();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        flag = 1;
        init();
        while(flag){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << " ";
            generation();
        }
        // for(int i = 0; i < n; i++){
        //     a[i] = i + 1;
        // }
        // do{
        //     for(int i = 0; i < n; i++){
        //         cout << a[i];
        //     }
        //     cout << " ";
        // }while(next_permutation(a, a + n));
        cout << endl;
    }
    return 0;
}