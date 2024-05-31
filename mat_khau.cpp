#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 201
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
struct Password{
    string passWordUser;
    int lengthOfPass;
};
bool cmp(struct Password a, struct Password b){
    return a.lengthOfPass > b.lengthOfPass;
}
int main(){
    int n;
    cin >> n;
    struct Password users[100001];
    for(int i = 0; i < n; i++){
        cin >> users[i].passWordUser;
        users[i].lengthOfPass = users[i].passWordUser.length();
    }
    sort(users, users + n, cmp);
    ll cnt = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(users[i].passWordUser == users[j].passWordUser){
                cnt += 2;
            }
            else if(users[i].passWordUser.find(users[j].passWordUser) != string::npos){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}