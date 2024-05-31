#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main () {
    ifstream fin("DATA.in");
    string copy;
    vector<string> qualified;
    while(getline(fin,copy)) {
        stringstream part(copy);
        string word;
        while(part >> word) {
            bool isInt = false;
            int num;
            try {
                num = stoi(word);
                isInt = true;
            }
            catch(invalid_argument&) {
                isInt = false;
            }
            catch(out_of_range&) {
                isInt = false;
            }
            if (!isInt) qualified.push_back(word);
        }
    }
    sort(qualified.begin(),qualified.end());
    for (string str : qualified) {
        cout << str << " ";
    }
    cout << endl;
    return 0;
}