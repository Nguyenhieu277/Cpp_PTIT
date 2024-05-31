#include<iostream>
#include<vector>
using namespace std;
int N[1000001];
int main() {
	int t; cin >> t;
	while (t--) {
		
		int n; cin >> n;
		vector<int> a(n);
		int max = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i]; 
            if (max < a[i]) 
                max = a[i];
		}
        for(int i = 0; i <= max; i++) 
			N[i] = 0;
		for(int i = 0; i < n; i++)
            N[a[i]]++;
		int count = 0;
		for(int i = 0; i <= max; i++){
			if (N[i] > 1)
                count += N[i];
	    }
		cout << count << endl;
	}
}