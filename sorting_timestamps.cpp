#include <bits/stdc++.h>
using namespace std;
struct Time{
    int hour, minute, second;
};
void input(struct Time a[], int n){
    for(int i = 0; i < n; i++)
        cin >> a[i].hour >> a[i].minute >> a[i].second;
}
bool cmp(const struct Time &a, const struct Time &b){
     if(a.hour < b.hour){
        return true;
    }
    else if(a.hour == b.hour && a.minute < b.minute){
        return true;
    }
    else if(a.hour == b.hour && a.minute == b.minute && a.second < b.second){
        return true;
    }
    return false;
}
void output(struct Time a[], int n){
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].hour << " " << a[i].minute << " " << a[i].second << endl;
    }
}
int main(){
    struct Time a[5001];
    int n;
    cin >> n;
    input(a, n);
    output(a, n);
    return 0;
}