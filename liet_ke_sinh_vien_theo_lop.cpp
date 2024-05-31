#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
        string ID, name, mail;
    public:
        string classID;
        friend istream& operator >> (istream&, Student&);
        friend ostream& operator << (ostream&, Student);
        string getclassID(){
            return classID;
        };
};
istream& operator >> (istream& in, Student &a){
    cin.ignore();
    getline(cin, a.ID);
    getline(cin, a.name);
    getline(cin, a.classID);
    cin >> a.mail;
    return in;
}
ostream& operator << (ostream& out, Student a){
    out << a.ID << " " << a.name << " " << a.classID << " " << a.mail << endl;
    return out;
}
int main(){
    int n;
    cin >> n;
    Student a[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for(int i = 0; i < n; i++){
            if(a[i].classID == s){
                cout << a[i];
            }
        }
    }
    return 0;
}