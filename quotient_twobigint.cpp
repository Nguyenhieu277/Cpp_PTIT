#include <iostream>
#include <string>
using namespace std;

// Function to perform division of two large integers represented as strings
string divide(string X, string Y) {
    string quotient;

    // Convert X and Y to integers
    int lenX = X.size(), lenY = Y.size();
    int x = stoi(X), y = stoi(Y);

    // Perform division
    quotient = to_string(x / y);

    return quotient;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string X, Y;
        cin >> X >> Y;
        
        // Calculate and output the result
        string result = divide(X, Y);
        cout << result << endl;
    }

    return 0;
}
