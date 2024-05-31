#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
    string name;
    string gender;
    string birth;
    string address;
    string tax;
    string date;
};
void nhap(struct NhanVien &a){
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.birth);
    getline(cin, a.address);
    getline(cin, a.tax);
    getline(cin, a.date);
}
void in(struct NhanVien a){
    cout << "00001" << " " << a.name << " " << a.gender << " ";
    if(a.birth[1] == '/'){
        a.birth.insert(0, "0");
    }
    if(a.birth[4] == '/'){
        a.birth.insert(3, "0");
    }   
     cout << a.birth << " " << a.address << " " << a.tax << " ";
     if(a.date[1] == '/'){
        a.date.insert(0, "0");
    }
    if(a.birth[4] == '/'){
        a.date.insert(3, "0");
    }
    cout << a.date << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}