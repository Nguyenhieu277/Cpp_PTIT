#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        if(n >= 1000){
            cnt += n / 1000;
            n %= 1000;
        }
        if(n >= 500 && n < 1000){
            cnt += n / 500;
            n %= 500;
        }
        if(n >= 200 && n < 500){
            cnt += n / 200;
            n %= 200;
        }
        if(n >= 100 && n < 200){
            cnt += n / 100;
            n %= 100;
        }
        if(n >= 50 && n < 100){
            cnt += n / 50;
            n %= 50;
        }
        if(n >= 20 && n < 50){
            cnt += n / 20;
            n %= 20;
        }
        if(n >= 10 && n < 20){
            cnt += n / 10;
            n %= 10;
        }
        if(n >= 5 && n < 10){
            cnt += n / 5;
            n %= 5;
        }
        if(n >= 2 && n < 5){
            cnt += n / 2;
            n %= 2;
        }
        if(n >= 1 && n < 2){
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}