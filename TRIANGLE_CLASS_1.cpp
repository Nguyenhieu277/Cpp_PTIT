#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Triangle{
    private:
        double x1, y1, x2, y2, x3, y3;
        double res;
    public:
        Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
        friend ostream& operator << (ostream&, Triangle);
        friend istream& operator >> (istream&, Triangle&);
        bool isValid();
        void solve();
};
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3){
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->x3 = x3;
    this->y3 = y3;
    this->res = res;
}
bool Triangle::isValid(){
    double x = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double y = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double z = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    if(x + y <= z || x + z <= y || y + z <= x){
        return false;
    }
    else return true;
}
void Triangle::solve(){
    double x = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double y = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double z = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    res = x + y + z;
}
ostream& operator << (ostream& out, Triangle t){
    out << fixed << setprecision(3) << t.res << endl;
    return out;
}
istream& operator >> (istream& in, Triangle &t){
    in >> t.x1 >> t.y1 >> t.x2 >> t.y2 >> t.x3 >> t.y3;
    return in;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        Triangle t(0, 0, 0, 0, 0, 0);
        cin >> t;
        if(t.isValid()){
            t.solve();
            cout << t;
        }
        else cout << "INVALID\n";
    }
    return 0;
}