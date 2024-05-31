#include <bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string ID;
        string name, gender, birth, address, tax, date;
    public:
        NhanVien();
        friend bool operator < (NhanVien a, NhanVien b){
            int y1 = (a.birth[6] - '0') * 1000 + (a.birth[7] - '0') * 100 + (a.birth[8] - '0') * 10 + a.birth[9] - '0';
            int y2 = (b.birth[6] - '0') * 1000 + (b.birth[7] - '0') * 100 + (b.birth[8] - '0') * 10 + b.birth[9] - '0';
            int m1 = (a.birth[0] - '0') * 10 + a.birth[1] - '0';
            int m2 = (b.birth[0] - '0') * 10 + b.birth[1] - '0';
            int d1 = (a.birth[3] - '0') * 10 + a.birth[4] - '0';
            int d2 = (b.birth[3] - '0') * 10 + b.birth[4] - '0';
            if(y1 < y2) return true;
            else if(y1 == y2 && m1 < m2) return true;
            else if(y1 == y2 && m1 == m2 && d1 < d2) return true;
            else return false;
        }
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
void sapxep(NhanVien a[], int n){
    sort(a, a + n);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}