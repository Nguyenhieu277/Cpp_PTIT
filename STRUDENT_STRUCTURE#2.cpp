#include <bits/stdc++.h>
using namespace std;
struct Student {
    string studentID;
    string name;
    string classID;
    string birth;
    float gpa;
};
string generateID(int a){
    stringstream ss;
    ss << "B20DCCN";
    ss << setw(3) << setfill('0') << a + 1;
    return ss.str();
}
void input(struct Student lst[], int n){
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, lst[i].name);
        getline(cin, lst[i].classID);
        getline(cin, lst[i].birth);
        cin >> lst[i].gpa;
        lst[i].studentID = generateID(i);
        cin.ignore();
    }
}
string generateName(string s){
    stringstream ss(s);
    string res = "";
    string word;
    while(ss >> word){
        res += toupper(word[0]);
        for(int j = 1; j < word.size(); j++){
            res += tolower(word[j]);
        }
        res += " ";
    }
    res.pop_back();
    return res;
}
void print(struct Student lst[], int n){
    for(int i = 0; i < n; i++){
        string nameS = generateName(lst[i].name);
        cout << lst[i].studentID << " " << nameS << " " << lst[i].classID << " ";
        if(lst[i].birth[1] == '/'){
            lst[i].birth.insert(0, "0");
        }
        if(lst[i].birth[4] == '/'){
            lst[i].birth.insert(3, "0");
        }   
        cout << lst[i].birth << " " << fixed << setprecision(2) << (float)lst[i].gpa << endl;
    }
}
int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}