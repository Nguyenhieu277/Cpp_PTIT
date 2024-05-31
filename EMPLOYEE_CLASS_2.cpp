#include <bits/stdc++.h>
using namespace std;
class Employee{
    private:
        string ID, name;
        double salary;
        int day;
        string position;
        int mounth;
    public:
        Employee(string name, double salary, int day, string position);
        friend istream& operator >> (istream&, Employee&);
        friend ostream& operator << (ostream&, Employee);
};
Employee::Employee(string name, double salary, int day, string position){
    this->ID = ID;
    this->name = name;
    this->salary = salary;
    this->day = day;
    this->position = position;
    this->mounth = mounth;
}
istream& operator >> (istream& in, Employee &a){
    getline(in, a.name);
    in >> a.salary >> a.day;
    cin.ignore();
    getline(in, a.position);
    return in;
}
ostream& operator << (ostream& out, Employee a){
    double bonus = 0;
    double spfound = 0;
    a.mounth = a.salary * a.day;
    if(a.day >= 25){
        bonus = a.salary * a.day * 0.2;
    }
    else if(a.day >= 22 && a.day < 25) bonus = a.salary * a.day * 0.1;
    if(a.position == "GD"){
        spfound = 250000;
    }
    else if(a.position == "PGD"){
        spfound = 200000;
    }
    else if(a.position == "TP"){
        spfound = 180000;
    }
    else if(a.position == "NV"){
        spfound = 150000;
    }
    int total = a.mounth + bonus + spfound;
    out << "NV01" << " " << a.name << " " << a.mounth << " " << bonus << " " << spfound << " " << total << endl;
    return out;
} 
int main(){
    Employee a("", 0, 0, "");
    cin >> a;
    cout << a;
    return 0;
}