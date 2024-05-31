#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<char> quiz1 = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    vector<char> quiz2 = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
    while(t--){
        int code;
        double score = 0;
        cin >> code;
        vector<char> s;
        for(int i = 0; i < 15; i++){
           char x; cin >> x;
           s.push_back(x);
        }
        if(code == 101){
            for(int i = 0; i < 15; i++){
                if(quiz1[i] == s[i]){
                    score++;
                }
            }
        cout << fixed << setprecision(2) << round((static_cast<double> (score)/ quiz1.size()) * 10.0 * 100) / 100 << endl;
        }
        if(code == 102){
            for(int i = 0; i < 15; i++){
                if(quiz2[i] == s[i]){
                    score++;
                }
            }
        cout << fixed << setprecision(2) << round((static_cast<double> (score)/ quiz2.size()) * 10.0 * 100) / 100 << endl;
        }
    }
    return 0;
}