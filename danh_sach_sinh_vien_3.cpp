#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct SinhVien{
    string ID;
    string name, classID, date;
    float gpa;
};
string convert(string s){
    string word;
    stringstream ss(s);
    string res = "";
    while(ss >> word){
        res.push_back(toupper(word[0]));
        for(int i = 1; i < word.size(); i++){
            res.push_back(tolower(word[i]));
        }
        res += " ";
    }
    res.pop_back();
    return res;
}
bool cmp(struct SinhVien a, struct SinhVien b){
    return a.gpa > b.gpa;
}
void nhap(struct SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        if(i + 1 < 10) a[i].ID = "B20DCCN00";
        else a[i].ID = "B20DCCN0";
        a[i].ID += to_string (i + 1);
        getline(cin, a[i].name);
        getline(cin, a[i].classID);
        getline(cin, a[i].date);
        if(a[i].date[1] == '/') a[i].date.insert(0, "0");
        if(a[i].date[4] == '/') a[i].date.insert(3, "0");
        cin >> a[i].gpa;
    }
}
void sapxep(struct SinhVien a[], int n){
    sort(a, a + n, cmp);

}
void in(struct SinhVien a[], int n){
    for(int i = 0; i < n; i++){
        string s = convert(a[i].name);
        cout << a[i].ID <<  " " << s;
        cout << " " << a[i].classID << " " << a[i].date << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
