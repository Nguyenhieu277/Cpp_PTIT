#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int m, s;
    cin >> m >> s;
    if(m * 9 < s || s == 0 && m > 1){
        cout << "-1 -1" << endl;
        return 0;
    }
    int temp = s;
    int maximum[m] = {0}, minimum[m] = {0};
    for(int i = 0; i < m; i++){
        if(s >= 9){
            maximum[i] = 9;
            s -= 9;
        }
        else if(s != 0){
            maximum[i] = s;
            s = 0;
        }
        else break;
    }
    --temp;
    for(int i = m - 1; i > 0; i--){
        if(temp >= 9){
            minimum[i] = 9;
            temp -= 9;
        }
        else if(temp != 0){
            minimum[i] = temp;
            temp = 0;
        }
        else break;
    }
    minimum[0] = temp + 1;
    for(int i = 0; i < m; i++){
        cout << minimum[i];
    }
    cout << " ";
    for(int i = 0; i < m; i++){
        cout << maximum[i];
    }
    return 0;
}