#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
        string ID, name, classID, mail;
    public:
        friend istream& operator >> (istream&, Student&);
        friend ostream& operator << (ostream&, Student);
        friend bool operator < (Student a, Student b){
            if(a.classID < b.classID) return true;
            else if(a.classID == b.classID && a.ID < b.ID) return true;
            else return false; 
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
void sort_arr(Student a[], int n){
    sort(a, a + n);
}
int main(){
    int n;
    cin >> n;
    Student a[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort_arr(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}