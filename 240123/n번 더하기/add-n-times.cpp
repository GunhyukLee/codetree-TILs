#include <iostream>
using namespace std;

int main() {
    int a, n, b;
    cin >> a >> n;

    for (int i=1;i<=n;i++) {
        b = a+n;
        cout << b << endl;
        a = b;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}