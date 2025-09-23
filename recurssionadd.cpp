#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int sum(int n) {
    if (n == 0)
        return 1;
    if(n==1)
        return 1;
    else
        return n + sum(n - 1); 
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout<<sum(num);
    return 0;
}
