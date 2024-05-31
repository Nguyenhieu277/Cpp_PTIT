#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
        string ID, name, classID, mail;
    public:
        friend istream& operator >> (istream&, Student&);
        friend ostream& operator << (ostream&, Student);
        friend bool operator < (Student a, Student b){
            return a.ID < b.ID;
        };
};
istream& operator >> (istream& in, Student &a){
    getline(cin, a.ID);
    getline(cin, a.name);
    getline(cin, a.classID);
    getline(cin, a.mail);
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
    Student a[1001];
    int n = 0;
    while(cin >> a[n]){
       n++;
    }
    sort_arr(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}