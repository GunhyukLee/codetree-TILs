#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a>b && a>c) {
        if (b>c)
            cout << b;
        else if (c>b)
            cout << c;
    }
    else if (b>a && b>c) {
        if (a>c)
            cout << a;
        else if (c>a)
            cout << c;
    }
    else if (c>a && c>b) {
        if (a>b)
            cout << a;
        else if (b>a)
            cout << b;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}