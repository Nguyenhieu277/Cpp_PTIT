#include <bits/stdc++.h>
using namespace std;
bool check_loc_phat(int n){
    while(n != 0){
        int m = n % 10;
        if(m != 0 && m != 6 && m != 8){
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(check_loc_phat(n)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '0' && s[i] != '6' && s[i] != '8'){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
*/