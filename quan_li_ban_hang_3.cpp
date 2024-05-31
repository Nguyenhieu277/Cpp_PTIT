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
    friend class HoaDon;
    private:
        string name_cos, gender, birth, add;
        string ID_cos;
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
        friend istream& operator >> (istream&, KhachHang&);
};
int KhachHang::z = 1;
istream& operator >> (istream& in, KhachHang &a){
    if(a.z < 10) a.ID_cos = "KH00";
    else a.ID_cos = "KH0";
    a.ID_cos += to_string(a.z);
    getline(in >> ws, a.name_cos);
    in >> a.gender >> a.birth;
    getline(in >> ws, a.add);
    KH[a.ID_cos] = a;
    a.z++;
    return in;
};
class MatHang{
    friend class HoaDon;
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
        friend istream& operator >> (istream&, MatHang&);
};
int MatHang::b = 1;
istream& operator >> (istream& in, MatHang &a){
    if(a.b < 10) a.ID = "MH00";
    else a.ID = "MH0";
    a.ID += to_string(a.b);
    getline(in >> ws, a.name);
    getline(in >> ws, a.sol);
    in >> a.buy >> a.sell;
    MH[a.ID] = a;
    a.b++;
    return in;
};
class HoaDon{
    private:
        string ID_bill, id_cos, id;
        ll amount;
        static int cnt;
    public:
        friend istream& operator >> (istream& in, HoaDon &a){
            if(a.cnt == 100) a.ID_bill = "HD";
            else if(a.cnt >= 10) a.ID_bill = "HD0";
            else if(a.cnt < 10) a.ID_bill = "HD00";
            a.ID_bill += to_string(a.cnt);
            in >> a.id_cos >> a.id;
            in >> a.amount;
            a.cnt++;
            return in;
        };
        friend ostream& operator << (ostream& out, HoaDon a){
            out << a.ID_bill << " " << KH[a.id_cos].getName_cos() << " " << KH[a.id_cos].getAdd() << " ";
            out << MH[a.id].getName() << " " << MH[a.id].getSol() << " " << MH[a.id].getBuy() << " " << MH[a.id].getSell() << " ";
            out << a.amount << " " << (ll)a.amount * MH[a.id].getSell() << endl;
            return out;
        };
};
int HoaDon::cnt = 1;
int main(){
    quick();
	ifstream inputKH("KH.in");
    ifstream inputMH("MH.in");
    ifstream inputHD("HD.in");
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    inputKH >> N;
    for(i = 0; i < N; i++) inputKH >> dskh[i];
    inputMH >> M;
    for(i = 0; i < M; i++) inputMH >> dsmh[i];
    inputHD >> K;
    for(i = 0; i < K; i++) inputHD >> dshd[i];
    for(i = 0; i < K; i++) cout << dshd[i];
    inputKH.close();
    inputMH.close();
    inputHD.close();
	return 0;
}
