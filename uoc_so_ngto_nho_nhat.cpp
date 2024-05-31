#include <bits/stdc++.h>
using namespace std;
int a[100001];
void sieve(){
    for(int i = 1; i <= 100001; i++){
		a[i] = i;
	}
    for(int i = 2; i <= sqrt(100001); i++){
        if(a[i] == i){
            for(int j = i * i; j <= 100001; j+=i){
                if(a[j] == j) a[j] = i;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    sieve();
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}