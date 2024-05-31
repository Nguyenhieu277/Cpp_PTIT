#include <bits/stdc++.h>
using namespace std;
class Point{
    private:
        double x1, y1, x2, y2;
        double res;
    public:
        Point(double x1, double y1, double x2, double y2);
        friend ostream& operator << (ostream&, Point);
        friend istream& operator >> (istream&, Point&);
        void solve();
};
Point::Point(double x1, double y1, double x2, double y2){
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->res = res;
}
ostream& operator << (ostream& out, Point p){
    out << fixed << setprecision(4) << p.res << endl;
    return out;
}
istream& operator >> (istream& in, Point &p){
    in >> p.x1 >> p.y1 >> p.x2 >> p.y2;
    return in;
}
void Point::solve(){
    res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        double x1, y1, x2, y2;
        Point p(x1, y1, x2, y2);
        cin >> p;
        p.solve();
        cout << p;
    }
    return 0;
}