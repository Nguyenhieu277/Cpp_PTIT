#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class  PhanSo{
    private:
        ll numerator, denominator;
    public:
        PhanSo(ll numerator, ll denominator);
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        void rutgon();
};
PhanSo::PhanSo(ll numerator, ll denominator){
    this->numerator = numerator;
    this->denominator = denominator;
}
ostream& operator << (ostream& out, PhanSo f){
    out << f.numerator << "/" << f.denominator << endl;
    return out;
}
istream& operator >> (istream& in, PhanSo &f){
    in >> f.numerator >> f.denominator;
    return in;
}
ll gcd(ll a, ll b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
void PhanSo::rutgon(){
    ll temp = gcd(numerator, denominator);
    numerator /= temp;
    denominator /= temp;
}
int main(){
    ll numerator, denominator;
    PhanSo f(numerator, denominator);
    cin >> f;
    f.rutgon();
    cout << f;
    return 0;
}

