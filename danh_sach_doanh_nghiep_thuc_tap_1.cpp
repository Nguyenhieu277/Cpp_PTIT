#include <bits/stdc++.h>
using namespace std;
class Company{
    private:
        string ID, name;
        int amount;
    public:
        friend istream& operator >> (istream&, Company&);
        friend ostream& operator << (ostream&, Company);
        friend bool operator < (Company a, Company b){
            if(a.amount < b.amount) return true;
            else if(a.amount == b.amount && a.ID > b.ID) return true;
            else return false;
        };
};
istream& operator >> (istream& in, Company &a){
    cin.ignore();
    getline(in, a.ID);
    getline(in, a.name);
    cin >> a.amount;
    return in;
}
ostream& operator << (ostream& out, Company a){
    out << a.ID << " " << a.name << " " << a.amount << endl;
    return out;
}
void sort_company(Company a[], int n){
    sort(a, a + n);
    reverse(a, a + n);
}
int main(){
    int n;
    cin >> n;
    Company a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort_company(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}