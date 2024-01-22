#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c, d;

    cin >> a >> c;
    cin >> b >> d;

    if ((a>=19 && c=='M') || (b>=19 && d=='M'))
        cout << 1;
    else
        cout << 0;
    // 여기에 코드를 작성해주세요.
    return 0;
}