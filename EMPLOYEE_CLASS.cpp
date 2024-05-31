#include <bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string name, gender, birth, address, tax, date;
    public:
        NhanVien();
        friend istream& operator >> (istream&, NhanVien&);
        friend ostream& operator << (ostream&, NhanVien);
};
NhanVien::NhanVien(){
    this->name = name;
    this->gender = gender;
    this->birth = birth;
    this->address = address;
    this->tax = tax;
    this->date = date;
}
istream& operator >> (istream& in, NhanVien &a){
    getline(in, a.name);
    getline(in, a.gender);
    getline(in, a.birth);
    getline(in, a.address);
    getline(in, a.tax);
    getline(in, a.date);
    return in;
}
ostream& operator << (ostream& out, NhanVien a){
    out << "00001" << " " << a.name << " " << a.gender << " " << a.birth << " " << a.address << " " << a.tax << " " << a.date << endl;
    return out;
} 
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}