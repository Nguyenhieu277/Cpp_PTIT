#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
struct SinhVien{
    string ID, name, classID;
    double sub1, sub2, sub3;
};
void nhap(struct SinhVien &a){
    cin.ignore();
    getline(cin, a.ID);
    getline(cin, a.name);
    getline(cin, a.classID);
    cin >> a.sub1;
    cin >> a.sub2;
    cin >> a.sub3;
}
bool cmp(struct SinhVien a, struct SinhVien b){
    return a.name < b.name;
}
void sap_xep(struct SinhVien a[], int n){
    sort(a, a + n, cmp);
}
void in_ds(struct SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cout << i + 1 << " " << a[i].ID << " " << a[i].name;
        cout << " " << a[i].classID << " " << fixed << setprecision(1) << a[i].sub1 << " " << fixed << setprecision(1) <<  a[i].sub2 << " " << fixed << setprecision(1) <<  a[i].sub3 << endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}