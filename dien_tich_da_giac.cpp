#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
//dinh li GREEN: S = 1/2 * (x1y2 + x2y3 + x3y1 + .... - x2y1 - x3y2 - x1y3 ....);
struct Point{
    int x, y;
};
double polygon_area(vector<Point> &v, int n){
    double sum = 0;
    for(int i = 0; i < n; i++){
        int j = (i + 1) % n;
        sum += v[i].x * v[j].y;
        sum -= v[j].x * v[i].y;
    }
    return (double) sum / 2;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<Point> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].x >> v[i].y;
        }
        cout << fixed << setprecision(3) << polygon_area(v, n) << endl;
    }
    return 0;
}