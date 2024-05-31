#include <bits/stdc++.h>
using namespace std;
struct Student{
    string msv;
    string name;
    string classID;
    double grade1, grade2, grade3;
};
void input(struct Student a[], int n){
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, a[i].msv);
        getline(cin, a[i].name);
        getline(cin, a[i].classID);
        cin >> a[i].grade1;
        cin >> a[i].grade2;
        cin >> a[i].grade3;
        cin.ignore();
    }
}
bool cmp(struct Student &a, struct Student &b){
    return a.name < b.name;
}
void output(struct Student a[], int n){
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << i + 1 << " " << a[i].msv << " " << a[i].name << " " << a[i].classID << " ";
        cout << fixed << setprecision(1) << a[i].grade1 << " ";
        cout << fixed << setprecision(1) << a[i].grade2 << " ";
        cout << fixed << setprecision(1) << a[i].grade3 << endl;
    }
}
int main(){
    struct Student A[1001];
    int n; cin >> n;
    input(A, n);
    output(A, n);
    return 0;
}