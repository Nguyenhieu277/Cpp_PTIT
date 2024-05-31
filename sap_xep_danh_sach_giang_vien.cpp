#include <bits/stdc++.h>
using namespace std;
class Professor{
    private:
        string ID, name, majoring;
    public:
        friend istream& operator >> (istream&, Professor&);
        friend ostream& operator << (ostream&, Professor);
        friend bool operator < (Professor a, Professor b){
            vector<string> res1, res2;
            stringstream ss1(a.name);
            string word;
            while(ss1 >> word){
                res1.push_back(word);
            }
            stringstream ss2(b.name);
            while(ss2 >> word){
                res2.push_back(word);
            }
            if(res1[res1.size() - 1] < res2[res2.size() - 1]) return true;
            else if(res1[res1.size() - 1] == res2[res2.size() - 1] && a.ID < b.ID) return true;
            else return false;
        };
};
long long cnt = 1;
istream& operator >> (istream& in, Professor &a){
    getline(in, a.name);
    getline(in, a.majoring);
    if(cnt < 10) a.ID = "GV0" + to_string(cnt);
    else a.ID = "GV" + to_string(cnt);
    cnt++;
    return in;
}
ostream& operator << (ostream& out, Professor a){
    string res = "";
    transform(a.majoring.begin(), a.majoring.end(), a.majoring.begin(), ::toupper);
    stringstream ss(a.majoring);
    string word;
    while(ss >> word){
        res += word[0];
    }
    out << a.ID << " " << a.name << " " << res << endl;
    return out;
}
void sort_pro(Professor a[], int n){
    sort(a, a + n);
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Professor a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort_pro(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i];
    }
    return 0;
}
