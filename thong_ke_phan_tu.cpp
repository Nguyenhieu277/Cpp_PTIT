#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0); 
const int MAXLIST = 10000;
typedef struct list{ 
    int n; 
    int nodes[MAXLIST];            
}List; 
List ds;
int main(){
    int k = 0;
    int mark[MAXLIST + 1] = {0};
    int m;
    while(cin >> m){
        ds.nodes[k++] = m;
        mark[m]++;
        ds.n = k;
    }
    for(int i = 0; i < ds.n; i++){
        if(mark[ds.nodes[i]] > 0)
        {
            cout << ds.nodes[i] << " " << mark[ds.nodes[i]] << endl;
            mark[ds.nodes[i]] = 0;
        }
    }
    return 0;
}