#include <bits/stdc++.h>
using namespace std;

int main() {
    float n1, n2, ans;

    cout << "Enter age for voting : ";
    cin >> n1;

    try {
        if (n1<18) {
            throw n2;  // throw float
        } else {
            cout<<"Voted:";
        }
    }
    catch (float num) {
        cout << "Age is less";
    }
}
