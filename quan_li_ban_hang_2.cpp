#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;
class KhachHang{
    private:
        string ID_cos, name_cos, gender, birth, add;
        static int z;
    public:
        KhachHang(){
           ID_cos = name_cos = gender = birth = add = ""; 
        };
        string getID_cos(){
            return ID_cos;
        };
        string getName_cos(){
            return name_cos;
        };
        string getGender(){
            return gender;
        };
        string getBirth(){
            return birth;
        };
        string getAdd(){
            return add;
        };

        friend class HoaDon;
        friend istream& operator >> (istream&, KhachHang&);
};
int KhachHang::z = 1;
istream& operator >> (istream& in, KhachHang &a){
    scanf("\n");
    if(a.z < 10) a.ID_cos = "KH00";
    else a.ID_cos = "KH0";
    a.ID_cos += to_string(a.z);
    getline(in, a.name_cos);
    getline(in, a.gender);
    getline(in, a.birth);
    getline(in, a.add);
    KH[a.ID_cos] = a;
    a.z++;
    return in;
};
class MatHang{
    private:
        string ID, name, sol;
        ll buy, sell;
        static int b;
    public:
        MatHang(){
            ID = name = sol = "";
            buy = sell = 0;
        };
        string getID(){
            return ID;
        };
        string getName(){
            return name;
        };
        string getSol(){
            return sol;
        };
        ll getBuy(){
            return buy;
        };
        ll getSell(){
            return sell;
        };

        friend class HoaDon;
        friend istream& operator >> (istream&, MatHang&);
};
int MatHang::b = 1;
istream& operator >> (istream& in, MatHang &a){
    cin.ignore();
    if(a.b < 10) a.ID = "MH00";
    else a.ID = "MH0";
    a.ID += to_string(a.b);
    getline(in, a.name);
    getline(in, a.sol);
    in >> a.buy >> a.sell;
    MH[a.ID] = a;
    a.b++;
    return in;
};
class HoaDon{
    private:
        string ID_bill, id_cos, id;
        ll amount;
        ll profits;
        static int cnt;
    public:
        friend istream& operator >> (istream& in, HoaDon &a){
            if(a.cnt == 100) a.ID_bill = "HD";
            else if(a.cnt >= 10) a.ID_bill = "HD0";
            else if(a.cnt < 10) a.ID_bill = "HD00";
            a.ID_bill += to_string(a.cnt);
            in >> a.id_cos >> a.id;
            in >> a.amount;
            a.profits = (MH[a.id].getSell() - MH[a.id].getBuy()) * a.amount;
            a.cnt++;
            return in;
        };
        friend ostream& operator << (ostream& out, HoaDon a){
            out << a.ID_bill << " " << KH[a.id_cos].getName_cos() << " " << KH[a.id_cos].getAdd() << " ";
            out << MH[a.id].getName() << " ";
            out << a.amount << " " << (ll)a.amount * MH[a.id].getSell() << " " << a.profits << endl;
            return out;
        };
        string getID_bill(){
            return ID_bill;
        };
        ll getProfits(){
            return profits;
        };
};
bool cmp (HoaDon a, HoaDon b){
    if(a.getProfits() > b.getProfits()) return true;
    else if(a.getProfits() == b.getProfits() && a.getID_bill() < b.getID_bill()) return true;
    else return false;
}
void sapxep(HoaDon a[], int n){
    sort(a, a + n, cmp);
}
int HoaDon::cnt = 1;
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}

