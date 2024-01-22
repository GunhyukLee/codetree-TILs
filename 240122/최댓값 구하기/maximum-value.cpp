#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >>c;

    if (a<=b) {
        if (b<=c)
            cout << c;
        else
            cout << b;
    } 
    else if (c<=a) {
        if (a<=b)
            cout << b;
        else
            cout << a;
    }
    else if (b<=c) {
        if (c<=a)
            cout << a;
        else
            cout << c;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}