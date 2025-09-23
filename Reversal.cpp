#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &x, int i = 0) {
    if (i == x.length() - 1) {
        // base case: last character, just return it
        return string(1, x[i]);
    }
    // recursive step: reverse rest of string + current char
    return reverseString(x, i + 1) + x[i];
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string rev = reverseString(s);
    cout << "Reversed: " << rev << endl;

    return 0;
}
