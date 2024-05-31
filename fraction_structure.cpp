#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo {
    ll numerator, denominator;
};
void nhap(struct PhanSo &p){
    cin >> p.numerator >> p.denominator;
}
ll gcd (ll a, ll b){
    if(a == 0 || b == 0){
        return a;
    }
    else return gcd(b, a % b);
}
void rutgon(struct PhanSo &p){
    ll temp = gcd(p.numerator, p.denominator);
    p.numerator /= temp;
    p.denominator /= temp;
}
void in(struct PhanSo p){
    cout << p.numerator << "/" << p.denominator << endl;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}