#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name, classID, birth;
        float gpa;
    public:
        SinhVien();
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
SinhVien::SinhVien(){
    this->name = name;
    this->classID = classID;
    this->birth = birth;
    this->gpa = gpa;
}
istream& operator >> (istream& in, SinhVien& a){
    getline(in, a.name);
    getline(in, a.classID);
    getline(in, a.birth);
    if(a.birth[1] == '/') a.birth.insert(0, "0");
    if(a.birth[4] == '/') a.birth.insert(3, "0");
    in >> a.gpa;
    return in;
}
string standize(string s){
    string word;
    stringstream ss(s);
    string res = "";
    while(ss >> word){
        res += toupper(word[0]);
        for(int i = 1; i < word.size(); i++){
            res += tolower(word[i]);
        }
        res += " ";
    }
    res.pop_back();
    return res;
}
ostream& operator << (ostream& out, SinhVien a){
    string namestu = standize(a.name);
    out << "B20DCCN001" << " " << namestu << " " << a.classID << " " << a.birth << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}