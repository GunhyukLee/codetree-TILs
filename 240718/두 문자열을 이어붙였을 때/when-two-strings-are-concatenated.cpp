#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string c, d;
    c = a+b;
    d = b+a;

    if (a==b) {
        cout << true;
    }
    else {
        cout << false;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}