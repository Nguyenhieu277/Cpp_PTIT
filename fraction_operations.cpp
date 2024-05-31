#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Fraction{
    ll numerator, denominator;
};
void read_input(struct Fraction &a){
    cin >> a.numerator >> a.denominator;
}
void process(Fraction A, Fraction B) {
	long long int a = A.numerator, b = B.numerator, c = A.denominator, d = B.denominator;
	long long int bc = A.denominator * B.denominator / __gcd(A.denominator, B.denominator);
	A.numerator = A.numerator * bc / A.denominator;
	B.numerator = B.numerator * bc / B.denominator;
	Fraction C;
	long long int x = (A.numerator + B.numerator);
	long long int y = bc;
	cout << x * x / __gcd(x * x, y * y) << "/" << y * y / __gcd(x * x, y * y) << " ";
	C.numerator = a * b * x * x;
	C.denominator = c * d * y * y;
	cout << C.numerator / __gcd(C.numerator, C.denominator) << "/" << C.denominator / __gcd(C.numerator, C.denominator) << endl;
}
int T;
int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}

