#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string change_to_digit(string s){
    for(int i = 0; i < (ll)s.size(); i++){
        if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'a' || s[i] == 'b' || s[i] == 'c'){
            s[i] = '2';
        }
        else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f'){
            s[i] = '3';
        }
         else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i'){
            s[i] = '4';
        }
         else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l'){
            s[i] = '5';
        }
         else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o'){
            s[i] = '6';
        }
         else if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's'){
            s[i] = '7';
        }
         else if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 't' || s[i] == 'u' || s[i] == 'v'){
            s[i] = '8';
        }
         else if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z'){
            s[i] = '9';
        }
    }
    return s;
}
bool palindromic(string s){
    ll r = s.length() - 1, l = 0;
    while(l <= r){
        if(s[l] != s[r]) 
            return false;
        l++; r--;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string res = change_to_digit(s);
        if(palindromic(res)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}