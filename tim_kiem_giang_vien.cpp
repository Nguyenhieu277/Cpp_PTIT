#include <bits/stdc++.h>
using namespace std;
class Professor{
    private:
        string ID, majoring;
    public:
        string name;
        friend istream& operator >> (istream&, Professor&);
        friend ostream& operator << (ostream&, Professor);
};
long long cnt = 1;
istream& operator >> (istream& in, Professor &a){
    getline(in, a.name);
    getline(in, a.majoring);
    string res = "";
    transform(a.majoring.begin(), a.majoring.end(), a.majoring.begin(), ::toupper);
    stringstream ss(a.majoring);
    string word;
    while(ss >> word){
        res += word[0];
    }
    a.majoring = res;
    if(cnt < 10) a.ID = "GV0" + to_string(cnt);
    else a.ID = "GV" + to_string(cnt);
    cnt++;
    return in;
}
ostream& operator << (ostream& out, Professor a){
    out << a.ID << " " << a.name << " " << a.majoring << endl;
    return out;
}
bool search(string name, string s){
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    if(name.find(s) != string::npos){
        return true;
    }
    else return false;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Professor a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i = 0; i < n; i++){
            if(search(a[i].name, s)){
                cout << a[i];
            }
        }
    }
    return 0;
}
