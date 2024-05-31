#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name, birth, classID;
        float gpa;
    public:
        SinhVien();
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
SinhVien::SinhVien(){
    this->name = name;
    this->birth = birth;
    this->classID = classID;
    this->gpa = gpa;
}
istream& operator >> (istream& in, SinhVien &a){
    getline(in, a.name);
    getline(in, a.classID);
    getline(in, a.birth);
    if(a.birth[1] == '/') a.birth.insert(0, "0");
    if(a.birth[4] == '/') a.birth.insert(3, "0");
    in >> a.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    out << "B20DCCN001" << " " << a.name << " " << a.classID << " " << a.birth << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
