#include <iostream>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    int al= a.length();
    int bl= b.length();

    if (al>bl) {
        cout << a << " " << al;
    }
    else if (bl>al) {
        cout << b << " " << bl;
    }
    else {
        cout << "same";
    }
    return 0;
}