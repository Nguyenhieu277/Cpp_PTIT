#include <bits/stdc++.h>
using namespace std;
class Professor{
    private:
        string ID, name;
    public:
        string majoring;
        friend istream& operator >> (istream&, Professor&);
        friend ostream& operator << (ostream&, Professor);
        friend bool operator < (Professor a, Professor b){
            vector<string> res1, res2;
            stringstream ss1(a.name);
            string word;
            while(ss1 >> word){
                res1.push_back(word);
            }
            stringstream ss2(b.name);
            while(ss2 >> word){
                res2.push_back(word);
            }
            if(res1[res1.size() - 1] < res2[res2.size() - 1]) return true;
            else if(res1[res1.size() - 1] == res2[res2.size() - 1] && a.ID < b.ID) return true;
            else return false;
        };
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
void sort_pro(Professor a[], int n){
    sort(a, a + n);
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
        string res = "";
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        stringstream ss(s);
        string word;
        while(ss >> word){
            res += word[0];
        }
        cout << "DANH SACH GIANG VIEN BO MON " << res << ":\n";
        for(int i = 0; i < n; i++){
            if(res == a[i].majoring){
                cout << a[i];
            }
        }
    }
    return 0;
}
