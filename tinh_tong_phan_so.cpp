#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct PhanSo{
    ll numerator, denominator;
};
void nhap(struct PhanSo &a){
    cin >> a.numerator >> a.denominator;
}
void simplify(struct PhanSo &a){
    ll temp = __gcd(a.numerator, a.denominator);
    a.numerator /= temp;
    a.denominator /= temp;
}
struct PhanSo tong(struct PhanSo p, struct PhanSo q){
    simplify(p);
    simplify(q);
    ll temp = p.denominator * q.denominator / __gcd(p.denominator, q.denominator);
    ll p1 = temp / p.denominator * p.numerator;
    ll q1 = temp / q.denominator * q.numerator;
    struct PhanSo res;
    res.numerator = p1 + q1;
    res.denominator = temp;
    simplify(res);
    return res;
}

void in(struct PhanSo c){
    cout << c.numerator << "/" << c.denominator << endl;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}