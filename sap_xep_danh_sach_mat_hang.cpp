#include <bits/stdc++.h>
using namespace std;
struct Item{
    int ID;
    string name, type;
    double sell, buy;
    double price;
};
void input(struct Item a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        a[i].ID = i + 1;
        getline(cin, a[i].name);
        getline(cin, a[i].type);
        cin >> a[i].sell;
        cin >> a[i].buy;
        a[i].price = a[i].buy - a[i].sell;
    }
}
bool cmp(struct Item a, struct Item b){
    return a.price > b.price;
}
void output(struct Item a[], int n){
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].ID << " " << a[i].name << " " << a[i].type;
        cout << " " << fixed << setprecision(2) << a[i].price << endl;
    }
}
int main(){
    struct Item a[100];
    int n;
    cin >> n;
    input(a, n);
    output(a, n);
    return 0;
}