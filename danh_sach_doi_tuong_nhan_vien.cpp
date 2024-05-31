#include <bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string ID;
        string name, gender, birth, address, tax, date;
    public:
        NhanVien();
        friend istream& operator >> (istream&, NhanVien&);
        friend ostream& operator << (ostream&, NhanVien);
};
NhanVien::NhanVien(){
    this->ID = ID;
    this->name = name;
    this->gender = gender;
    this->birth = birth;
    this->address = address;
    this->tax = tax;
    this->date = date;
}
int z = 1;
istream& operator >> (istream& in, NhanVien &a){
    cin.ignore();
    getline(in, a.name);
    getline(in, a.gender);
    getline(in, a.birth);
    getline(in, a.address);
    getline(in, a.tax);
    cin >> a.date;
    if(z < 10) a.ID = "0000";
    else a.ID = "000";
    a.ID += to_string(z);
    z++;
    return in;
}
ostream& operator << (ostream& out, NhanVien a){
    out << a.ID << " " << a.name << " " << a.gender << " " << a.birth << " " << a.address << " " << a.tax << " " << a.date << endl;
    return out;
} 
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}