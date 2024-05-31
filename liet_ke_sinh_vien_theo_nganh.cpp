#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
        string name, mail;
    public:
        string classID, ID;
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
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for(int i = 0; i < n; i++){
            if(s[0] == a[i].ID[5]){
                if(s[0] == 'K' || s[0] == 'V' || s[0] == 'D') 
                cout << a[i];
                else if(a[i].classID[0] != 'E') cout << a[i];
            }
        }
    }
    return 0;
}