#include <bits/stdc++.h>
using namespace std;
class Teacher{
    private:
        string ID, name;
        double salary;
    public:
        Teacher(string ID, string name, double salary);
        friend istream& operator >> (istream&, Teacher&);
        friend ostream& operator << (ostream&, Teacher);
};
Teacher::Teacher(string ID, string name, double salary){
    this->ID = ID;
    this->name = name;
    this->salary = salary;
}
istream& operator >> (istream& in, Teacher &a){
    getline(in, a.ID);
    getline(in, a.name);
    in >> a.salary;
    return in;
}
ostream& operator << (ostream& out, Teacher a){
    int level = (a.ID[2] - '0') * 10 + a.ID[3] - '0';
    string spfound = a.ID.substr(0, 2);
    int bonus = 0;
    if(spfound == "HT"){
        bonus = 2000000;
    }
    else if(spfound == "HP"){
        bonus = 900000;
    }
    else if(spfound == "GV"){
        bonus = 500000;
    }
    long long total = level * a.salary + bonus;
    out << a.ID << " " << a.name << " " << level << " " << bonus << " " << total << endl;
    return out;
}
int main(){
    Teacher a("", "", 0);
    cin >> a;
    cout << a;
    return 0;
}
