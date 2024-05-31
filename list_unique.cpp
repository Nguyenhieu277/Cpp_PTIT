#include <bits/stdc++.h>
using namespace std;

vector<string> tokenize(const string &line, const string &delimiter){
    vector<string> tokens;
    stringstream ss(line);
    string word;
    while(ss >> word){
        string cleanWord;
        for(char c : word){
            if(delimiter.find(c) == string::npos){
                cleanWord += c;
            }
        }
        tokens.push_back(cleanWord);
    }
    return tokens;
}

string change(string &line){ 
    for(int i = 0; i < line.length(); i++){ 
        if(line[i] == ',' || line[i] == '.' || line[i] == '?' || line[i] == '!' || line[i] == ':' || line[i] == ';' || line[i] == '-' || line[i] == '/' || line[i] =='(' || line[i] == ')'){
            line[i] = ' ';
        }
    }
    return line;
}

bool cmp(pair<string, int> &a, pair<string, int> &b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    else{
        return a.first < b.first;
    }
}

int main(){
    fstream File;
    File.open("DOCUMENT.in");
    int n;
    File >> n;
    File.ignore();
    map<string, int> wordcnt;
    string line;
    while(getline(File, line)){ 
        string word = change(line);
        vector<string> words = tokenize(word, " ");
        for(auto it : words){
            transform(it.begin(), it.end(), it.begin(), ::tolower);
            wordcnt[it]++;
        }
    }
    vector<pair<string, int>> res(wordcnt.begin(), wordcnt.end());
    sort(res.begin(), res.end(), cmp);
    for(auto it : res){
        cout << it.first << " " << it.second << endl;
    }
    File.close();
    return 0;
}
