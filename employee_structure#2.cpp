#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
    int ID;
    string name;
    string gender;
    string birth;
    string address;
    string tax;
    string date;
    int year, day, mouth;
};
int z = 0;
void nhap(struct NhanVien &lst){
    if(z == 0) getchar();
    z++;
    getline(cin, lst.name);
    getline(cin, lst.gender);
    getline(cin, lst.birth);
    if(lst.birth[1] == '/'){
        lst.birth.insert(0, "0");
    }
    if(lst.birth[4] == '/'){
        lst.birth.insert(3, "0");
    }
    getline(cin, lst.address);
    getline(cin, lst.tax);
    getline(cin, lst.date); 
    lst.year = (lst.birth[6] - '0') * 1000 + (lst.birth[7] - '0') * 100 + (lst.birth[8] - '0') * 10 + (lst.birth[9] - '0');
    lst.day = (lst.birth[3] - '0') * 10 + (lst.birth[4] - '0');
    lst.mouth = (lst.birth[0] - '0') * 10 + (lst.birth[1] - '0');
}
bool cmp(struct NhanVien a, struct NhanVien b){
    if (a.year < b.year)return true;
    if (a.year == b.year && a.mouth < b.mouth)return true;
    if (a.year == b.year && a.mouth == b.mouth && a.day < b.day)return true;
    return false;
}
void inds(struct NhanVien lst[], int n){
    for(int i = 0; i < n; i++){ 
        string s;
        if(lst[i].ID < 9) s = "0000";
        else s = "000";
        cout << s << lst[i].ID + 1 <<  " " << lst[i].name << " " << lst[i].gender << " " << lst[i].birth << " ";
        cout << lst[i].address << " " << lst[i].tax << " " << lst[i].date << " " << endl;
    }
}
void sapxep(struct NhanVien lst[], int n){
    for(int i = 0; i < n; i++) lst[i].ID = i;
    sort(lst, lst + n, cmp);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}