#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct ThiSinh{
    string name;
    string birth;
    float sub1, sub2, sub3;
};
void nhap(struct ThiSinh &A){
    getline(cin, A.name);
    getline(cin , A.birth);
    cin >> A.sub1;
    cin >> A.sub2;
    cin >> A.sub3;
}
void in(struct ThiSinh A){
    cout << A.name << " " << A.birth << " ";
    cout << fixed << setprecision(1) << (float)(A.sub1 + A.sub2 + A.sub3) << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
