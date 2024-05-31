#include <bits/stdc++.h>
using namespace std;
class SinhVien {
    private:
        string name, classID, birth;
        double gpa;
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
string convert(string s){
    string res = "";
    string word;
    stringstream ss(s);
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
istream& operator >> (istream& in, SinhVien &a){
    cin.ignore();
    getline(in, a.name);
    getline(in, a.classID);
    getline(in, a.birth);
    if(a.birth[1] == '/') a.birth.insert(0, "0");
    if(a.birth[4] == '/') a.birth.insert(3, "0");
    in >> a.gpa;
    return in;
}
int z = 1;
ostream& operator << (ostream& out, SinhVien a){
    string res = convert(a.name);
    if(z < 10){
        out << "B20DCCN00" << z << " " << res << " " << a.classID << " " << a.birth << " " << fixed << setprecision(2) << a.gpa << endl; 
    }
    else{
        out << "B20DCCN0" << z << " " << res << " " << a.classID << " " << a.birth << " " << fixed << setprecision(2) << a.gpa << endl; 
    }
    z++;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}