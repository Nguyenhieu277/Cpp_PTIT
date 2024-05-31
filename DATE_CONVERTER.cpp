#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int year = 0, week = 0, day = 0;
    if(n >= 365){
        year += n / 365;
        n %= 365;
    }
    if(n >= 7 && n < 365){
        week += n / 7;
        n %= 7;
    }
    if(n < 7){
        day += n;
    }
    cout << year << " " << week << " " << day << endl;
    return 0;
}