#include <bits/stdc++.h>
using namespace std;
struct Area{
    double x, y;
};
void input(struct Area a[], int n){
    for(int i = 0; i < n; i++)
         cin >> a[i].x >> a[i].y;
}
double process(int a, int b, int c, int d, int e, int f){
    double x = sqrt((a - c) * (a - c) + (b - d) * (b - d));
    double y = sqrt((c - e) * (c - e) + (d - f) * (d - f));
    double z = sqrt((a - e) * (a - e) + (b - f) * (b - f));
    double S = sqrt((x + y + z) * (x + y - z) * (x + z - y) * (y + z - x)) * 1.0 / 4;
    return S;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        struct Area a[1001];
        input(a, n);
        double res = 0;
        for(int i = 1; i < n - 1; i++){
            res += process(a[0].x, a[0].y, a[i].x, a[i].y, a[i + 1].x, a[i + 1].y);
        }
        cout << fixed << setprecision(3) << (double)res << endl;
    }
    return 0;
}