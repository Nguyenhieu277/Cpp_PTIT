#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
struct PhanSo{
    ll tu, mau;
};

void process(PhanSo a, PhanSo b){
    ll a1 = a.tu, a2 = a.mau, b1 = b.tu, b2 = b.mau;
    ll lcm = a.mau * b.mau / __gcd(a.mau, b.mau);
    a.tu = a.tu * lcm / a.mau;
    b.tu = b.tu * lcm / b.mau;
    PhanSo res;
    ll x = a.tu + b.tu;
    ll y = lcm;
    cout << x * x / __gcd(x * x, y * y) << "/" << y * y / __gcd(x * x, y * y) << " ";
    res.tu = a1 * b1 * x * x;
    res.mau = a2 * b2 * y * y;
    cout << res.tu / __gcd(res.tu, res.mau) << "/" << res.mau / __gcd(res.tu, res.mau) << endl;
}
int main(){
    quick();
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}