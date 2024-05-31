#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    map<char, int> mp = 
    { 
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int sum = 0;
        sum += mp[s.back()];
        for(int i = s.size() - 2 ; i >= 0 ; i--)
        {
            if(mp[s[i]] >= mp[s[i + 1]]) 
            {
                sum += mp[s[i]];
            }
            else sum -= mp[s[i]];
        }
        cout << sum << endl;
    }
}