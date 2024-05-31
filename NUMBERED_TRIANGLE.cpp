#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n * 2; i++){
        for(int j = 1; j <= i; j++){
           if(i % 2 == 0){
                cout << " ";
           }
           else{
            cout << j;
           }
        }
        cout << endl;
    }
    return 0;
}