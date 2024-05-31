#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str1;
        string str2;
        getline(cin, str1);
        getline(cin, str2);
        stringstream ss1(str1);
        stringstream ss2(str2);
        vector<string> words_str1;
        vector<string> words_str2;
        string word;
        while(ss1 >> word){
            words_str1.push_back(word);
        }
        while(ss2 >> word){
            words_str2.push_back(word);
        }
        set<string> unique_2(words_str2.begin(), words_str2.end());
        vector<string> res;
        for(auto it : words_str1){
            if(unique_2.find(it) == unique_2.end())
                res.push_back(it);
                unique_2.insert(it);
        }
        sort(res.begin(), res.end());
        for(auto it : res){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}