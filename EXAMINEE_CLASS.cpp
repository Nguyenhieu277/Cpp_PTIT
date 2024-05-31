#include <bits/stdc++.h>
using namespace std;
class Examinee{
    private:
        string name, date;
        double sub1, sub2, sub3;
    public:
        Examinee(string name, string date, double sub1, double sub2, double sub3);
        friend istream& operator >> (istream&, Examinee&);
        friend ostream& operator << (ostream&, Examinee);
        friend Examinee operator + (Examinee);
};
Examinee::Examinee(string name, string date, double sub1, double sub2, double sub3){
    this->name = name;
    this->date = date;
    this->sub1 = sub1;
    this->sub2 = sub2;
    this->sub3 = sub3;
}
istream& operator >> (istream& in, Examinee &a){
    getline(in, a.name);
    getline(in, a.date);
    in >> a.sub1;
    in >> a.sub2;
    in >> a.sub3;
    return in;
}
ostream& operator << (ostream& out, Examinee a){
    out << a.name << " " << a.date << " " << fixed << setprecision(1) << a.sub1 + a.sub2 + a.sub3 << endl;
    return out;
}
int main(){
    string name, date;
    double sub1, sub2, sub3;
    Examinee a(name, date, sub1, sub2, sub3);
    cin >> a;
    cout << a;
    return 0;
}


