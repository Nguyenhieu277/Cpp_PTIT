#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
    string name;
    string msv;
    string birth;
    double gpa;
};
void nhap(struct SinhVien &A){
    getline(cin, A.name);
    getline(cin, A.msv);
    getline(cin, A.birth);
    cin >> A.gpa;
}
void in(struct SinhVien A){
    cout << "B20DCCN001" << " " << A.name << " " << A.msv << " ";
    if(A.birth[1] == '/'){
        A.birth.insert(0, "0");
    }
    if(A.birth[4] == '/'){
        A.birth.insert(3, "0");
    }
    cout << A.birth << " " << fixed << setprecision(2) << A.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}