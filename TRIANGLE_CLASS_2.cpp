#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class Point{
    public:
        double x, y;
};
class Triangle{
    private:
        Point p1, p2, p3;
        double res;
    public:
        Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
        bool isValid();
        void solve();
        friend ostream& operator << (ostream&, Triangle);
};
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3){
    p1.x = x1;
    p1.y = y1;
    p2.x = x2;
    p2.y = y2;
    p3.x = x3;
    p3.y = y3;
    this->res = res;
}
bool Triangle::isValid(){
    double a = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    double b = sqrt((p1.x - p3.x) * (p1.x - p3.x) + (p1.y - p3.y) * (p1.y - p3.y));
    double c = sqrt((p3.x - p2.x) * (p3.x - p2.x) + (p3.y - p2.y) * (p3.y - p2.y));
    if(a + b <= c || a + c <= b || b + c <= a){
        return false;
    }
    else return true;
}
void Triangle::solve(){
    double a = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    double b = sqrt((p1.x - p3.x) * (p1.x - p3.x) + (p1.y - p3.y) * (p1.y - p3.y));
    double c = sqrt((p3.x - p2.x) * (p3.x - p2.x) + (p3.y - p2.y) * (p3.y - p2.y));
    double s = (a + b + c) / 2;
    res = sqrt(s * (s - a) * (s - b) * (s - c));
}
ostream& operator<<(ostream& out, Triangle t) {
        out << fixed << setprecision(2) << t.res << endl;
        return out;
    }
int main() {
    int t;
    cin >> t;
    while (t--) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        Triangle t(x1, y1, x2, y2, x3, y3);
        if (t.isValid()) {
            t.solve();
            cout << t;
        } else {
            cout << "INVALID\n";
        }
    }
    return 0;
}
