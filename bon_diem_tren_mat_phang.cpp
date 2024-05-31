#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 101
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
struct Point{
    int x, y, z;
};
/*dieu kien 4 diem dong phang:
    [AB, AC]*AD = 0
*/
bool isPoint_on_plane(vector<Point> &v){
    // AB
    int AB_x = v[1].x - v[0].x;
    int AB_y = v[1].y - v[0].y;
    int AB_z = v[1].z - v[0].z;
    //AC
    int AC_x = v[2].x - v[1].x;
    int AC_y = v[2].y - v[1].y;
    int AC_z = v[2].z - v[1].z;
    // tich co huong
    int crossProduct_x = AB_y * AC_z - AB_z * AC_y;
    int crossProduct_y = AB_z * AC_x - AB_x * AC_z;
    int crossProduct_z = AB_x * AC_y - AB_y * AC_x;
    // AD
    int AD_x = v[3].x - v[0].x;
    int AD_y = v[3].y - v[0].y;
    int AD_z = v[3].z - v[0].z;
    //tich vo huong
    int dotProduct = crossProduct_x * AD_x + crossProduct_y * AD_y + crossProduct_z * AD_z;
    if(dotProduct == 0) return true;
    else return false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<Point> v(4);
        for(int i = 0; i < 4; i++){
            cin >> v[i].x >> v[i].y >> v[i].z;
        }
        if(isPoint_on_plane(v)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
