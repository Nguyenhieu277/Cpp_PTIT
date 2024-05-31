#include <bits/stdc++.h>
using namespace std;
struct Point{
    double x, y; 
};
void input(struct Point &A){
    cin >> A.x >> A.y;
}
double distance(struct Point A, struct Point B){
    double res = (double)sqrt((double)pow(A.x - B.x, 2) + (double)pow(A.y - B.y, 2));
    return res;
}
int main(){
    struct Point A, B;
    int t;
    cin >> t;
    while(t--){
    input(A); input(B);
    cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
return 0;
}