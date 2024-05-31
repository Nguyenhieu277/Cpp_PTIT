#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int x = str.find("084");
        str.erase(x, 3);
        cout << str << endl;
    }
    return 0;
}