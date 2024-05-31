#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Human{
    string name;
    string birth;
    ll day, mounth, year;
};
void input(struct Human a[], int n){
    for(int i = 0; i < n; i++){
       cin >> a[i].name >> a[i].birth;
        a[i].day = (a[i].birth[0] - '0') * 10 + (a[i].birth[1] - '0');
        a[i].mounth = (a[i].birth[3] - '0') * 10 + (a[i].birth[4] - '0');
        a[i].year = (a[i].birth[6] - '0') * 1000 + (a[i].birth[7] - '0') * 100 + (a[i].birth[8] - '0') * 10 + a[i].birth[9] - '0';
    }
}
bool cmp(struct Human &a, struct Human &b){
    if(a.year > b.year) return true;
    else if (a.year == b.year && a.mounth > b.mounth){
        return true;
    }
    else if(a.year == b.year && a.mounth == b.mounth && a.day > b.day){
        return true;
    }
    return false;
} 
void output(struct Human a[], int n){
    sort(a, a + n, cmp);
    cout << a[0].name << endl;
    cout << a[n - 1].name << endl;
}
int main(){
    struct Human a[101];
    ll n;
    cin >> n;
    input(a, n);
    output(a, n);
    return 0;
}
