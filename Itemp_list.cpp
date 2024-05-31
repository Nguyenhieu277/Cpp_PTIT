#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Item{
    ll ID;
    string name;
    string group;
    double buyprice;
    double sellprice;
    double sum() const {
        return sellprice - buyprice;
    }
};
void input(struct Item a[], int n){
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, a[i].name);
        getline(cin, a[i].group);
        cin >> a[i].buyprice;
        cin >> a[i].sellprice;
        a[i].ID = i + 1;
        cin.ignore();
    }
}
bool cmp(struct Item &a, struct Item &b){
    return a.sum() > b.sum();

}
void output(struct Item a[], int n){
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].ID << " " << a[i].name << " " << a[i].group << " " << fixed << setprecision(2) << (double)a[i].sum() << endl; 
    }
}
int main(){
    struct Item A[1001];
    int n;
    cin >> n;
    input(A, n);
    output(A, n);
    return 0;
}
