    #include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Intern{
    ll index;
    string studentID;
    string name;
    string classID;
    string email;
    string corporation;
};
void input(struct Intern a[], int n){
    cin.ignore();
    for(int i = 0; i < n; i++){
        a[i].index = i + 1;
        getline(cin, a[i].studentID);
        getline(cin, a[i].name);
        getline(cin, a[i].classID);
        getline(cin, a[i].email);
        getline(cin, a[i].corporation);
    }
}
bool cmp(struct Intern &a, struct Intern &b){
    return a.name < b.name;
}
int main(){
    int n;
    cin >> n;
    struct Intern a[10001];
    input(a, n);
    int q;
    cin >> q;
    cin.ignore();
    vector<string> query_corporation;
    sort(a, a + n, cmp);
    for(int i = 0; i < q; i++){
        string query;
        getline(cin, query);
        query_corporation.push_back(query);
    }
    for(auto it : query_corporation){
        for(int i = 0; i < n; i++){
            if(it == a[i].corporation){
                cout << a[i].index << " " << a[i].studentID << " " << a[i].name << " " << a[i].classID << " " << a[i].email << " "<< a[i].corporation << endl;
            }
        }
    }
    return 0;
}