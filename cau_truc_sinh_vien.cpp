#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name, classID, birth;
    float gpa;
};
void nhapThongTinSV(struct SinhVien &a){
    getline(cin, a.name);
    cin >> a.classID >> a.birth;
    if(a.birth[1] == '/') a.birth.insert(0, "0");
    if(a.birth[4] == '/') a.birth.insert(3, "0");
    cin >> a.gpa;
}
void inThongTinSV(struct SinhVien a){
    cout << "N20DCCN001" << " " << a.name << " " << a.classID << " " << a.birth << " " << fixed << setprecision(2) << a.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}