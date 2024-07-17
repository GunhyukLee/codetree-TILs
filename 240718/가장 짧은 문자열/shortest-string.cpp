#include <iostream>
using namespace std;

int main() {
    string a, b, c;

    cin >> a >> b >> c;

    int al= a.length();
    int bl= b.length();
    int cl= c.length();

    if (al>=bl &&  bl>=cl) {
        cout << al-cl;
    }
    else if (al>=cl && cl >= bl) {
        cout << al - bl;
    }
    else if (bl>=al && al >= cl) {
        cout << bl - cl;
    }
    else if (bl>=cl && cl >= al) {
        cout << bl - al;
    }
    else if (cl>=al && al >= bl) {
        cout << bl - cl;
    }
    else if (cl>=bl && bl >= al) {
        cout << cl - al;
    }
    return 0;
}