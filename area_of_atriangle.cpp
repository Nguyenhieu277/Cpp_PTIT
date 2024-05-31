#include <bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct Area{
    double xa, ya, xb, yb, xc, yc;
    double S, R; 
};
void input(struct Area &a){
    cin >> a.xa >> a.ya >> a.xb >> a.yb >> a.xc >> a.yc;
}
void process(struct Area a){
    double x = sqrt((a.xa - a.xb) * (a.xa - a.xb) + (a.ya - a.yb) * (a.ya - a.yb));
    double y = sqrt((a.xa - a.xc) * (a.xa - a.xc) + (a.ya - a.yc) * (a.ya - a.yc));
    double z = sqrt((a.xc - a.xb) * (a.xc - a.xb) + (a.yc - a.yb) * (a.yc - a.yb));
    if(x + y <= z || x + z <= y || y + z <= x){
        cout << "INVALID\n";
    }
    else{
        a.S = sqrt((x + y + z) * (x + y - z) * (x + z - y) * (y + z - x)) * 1.0 / 4;
        a.R = (double)(x * y * z) / (4 * a.S);
        cout << fixed << setprecision(3) << (double) PI * a.R * a.R << endl;
    }
}
int main(){
    int n;
    cin >> n;
    while(n--){
        struct Area a;
        input(a);
        process(a);
    }
    return 0;
}