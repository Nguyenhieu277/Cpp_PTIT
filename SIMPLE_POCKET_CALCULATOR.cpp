#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    char s;
    cin >> a >> s >> b;
    if(s == '+'){
        cout << fixed << setprecision(2) << (double) a + b << endl;
    }
    if(s == '-'){
        cout << fixed << setprecision(2) << (double) a - b << endl;
    }
    if(s == '*'){
        cout << fixed << setprecision(2) << (double) a * b << endl;
    }
    if(s == '/'){
        cout << fixed << setprecision(2) << (double) a / b << endl;
    }
    return 0;
}