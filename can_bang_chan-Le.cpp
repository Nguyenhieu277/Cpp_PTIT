#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    int even = 0, odd = 0;
    while(n != 0){
        int m = n % 10;
        if(m % 2 == 0){
            even++;
        }
        else odd++;
        n /= 10;
    }
    return even == odd; 
}
int main(){
    int n;
    cin >> n;
    if(n % 2 == 0){
        int p1 = pow(10, n - 1), p2 = pow(10, n);
        int cnt = 0;
        for(int i = p1; i <= p2; i++){
            if(check(i)){
                cout << i << " ";
                cnt++;
                if(cnt == 10){
                    cout << endl;
                    cnt = 0;
                }
            }
        }
    }
    return 0;
}