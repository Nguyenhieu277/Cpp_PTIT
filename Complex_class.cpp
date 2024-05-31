#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real, imaginary; 
    public:
        Complex(int real, int imaginary);
        friend istream& operator >> (istream&, Complex&);
        friend ostream& operator << (ostream&, Complex);
        friend Complex operator + (Complex, Complex);
        friend Complex operator * (Complex, Complex);
};

Complex::Complex(int real, int imaginary){
    this->real = real;
    this->imaginary = imaginary;
}

istream& operator >> (istream& in, Complex &a){
    in >> a.real >> a.imaginary;
    return in;
}

ostream& operator << (ostream& out, Complex a){
    out << a.real << " " << (a.imaginary >= 0 ? "+" : "-")  << " " << abs(a.imaginary) << "i";
    return out;
}

Complex operator + (Complex a, Complex b){
    Complex sum(0, 0);
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex operator * (Complex a, Complex b) {
    Complex product(0, 0);
    product.real = a.real * b.real - a.imaginary * b.imaginary;
    product.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return product;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Complex a(0, 0), b(0, 0);
        cin >> a >> b;
        cout << (a + b) * a << "," << (a + b) * (a + b) << endl;
    }
    return 0;
}