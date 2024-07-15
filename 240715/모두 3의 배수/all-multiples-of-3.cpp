#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    bool x = true;

    if (a%3==0 && b%3==0 && c%3==0 && d%3==0 && e%3==0) {
        x= true;
        cout << 1;
    }
    else {
        x = false;
        cout << 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}