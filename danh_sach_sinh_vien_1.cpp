#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct SinhVien{
    string name, classID, date;
    float gpa;
};
void nhap(struct SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        getline(cin, a[i].classID);
        getline(cin, a[i].date);
        if(a[i].date[1] == '/') a[i].date.insert(0, "0");
        if(a[i].date[4] == '/') a[i].date.insert(3, "0");
        cin >> a[i].gpa;
    }
}
void in(struct SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cout << "B20DCCN0" << (i + 1 < 10 ? "0" : "") << i + 1 <<  " " << a[i].name;
        cout << " " << a[i].classID << " " << a[i].date << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
