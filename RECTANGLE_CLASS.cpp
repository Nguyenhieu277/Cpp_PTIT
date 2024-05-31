#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Rectangle{
    private:
        ll length, width;
        string color;
        ll per, area;
    public:
        Rectangle(ll length, ll width, string color);
        friend ostream& operator << (ostream&, Rectangle);
        friend istream& operator >> (istream&, Rectangle&);
        void perimeter_solve();
        void area_solve();
        void standardize();
        bool isValid();
};
Rectangle::Rectangle(ll length, ll width, string color){
    this->length = length;
    this->width = width;
    this->color = color;
    this->per = per;
    this->area = area;
}
bool Rectangle::isValid(){
    return length > 0 && width > 0;
}
void Rectangle::perimeter_solve(){
    per = (length + width) * 2;
}
void Rectangle::area_solve(){
    area = length * width;
}
void Rectangle::standardize(){
    string res = "";
    stringstream ss(color);
    string token;
    while(ss >> token){
        res += toupper(token[0]);
        for(int i = 1; i < token.length(); i++){
            res += tolower(token[i]);
        }
        res += " ";
    } 
    res.erase(res.length() - 1);
    color = res; 
}
ostream& operator << (ostream& out, Rectangle r){
    out << r.per << " " << r.area << " " << r.color << endl;
    return out;
}
istream& operator >> (istream& in, Rectangle &r){
    in >> r.length >> r.width >> r.color;
    return in;
}
int main(){
    ll length, width;
    string color;
    Rectangle r(length, width, color);
    cin >> r;
    if(r.isValid()){
        r.perimeter_solve();
        r.area_solve();
        r.standardize();
        cout << r;
    }
    else cout << "INVALID" << endl;
    return 0;
}
