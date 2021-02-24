#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int is =0;
    double ds =0.0;
    string ss;
    // Read and save an integer, double, and String to your variables.
    cin >> is;
    cin >> ds;
    getline(cin, ss);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + is << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision (1) << d + ds << endl;
    // Concatenate and print the String variables on a new line
    cout << ss << endl;
    // The 's' variable above should be printed first.

    return 0;
}

// Sample Input

// 12
// 4.0
// is the best place to learn and practice coding!

// Sample Output

// 16
// 8.0
// HackerRank is the best place to learn and practice coding!
