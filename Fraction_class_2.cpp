#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/

class PhanSo{
    private:
        ll numerator, denominator;
    public:
        PhanSo(ll numerator, ll denominator);
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        friend PhanSo operator + (PhanSo, PhanSo);
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
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}
PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo sum(0, 0);
    ll temp = lcm(a.denominator, b.denominator);
    sum.numerator = temp / a.denominator * a.numerator + temp / b.denominator * b.numerator;
    sum.denominator = temp;
    ll g = gcd(sum.numerator, sum.denominator);
    sum.numerator /= g;
    sum.denominator /= g;
    return sum;
}
int main(){
    PhanSo f1(0, 0), f2(0, 0);
    cin >> f1 >> f2;
    cout << f1 + f2;
    return 0;
}

