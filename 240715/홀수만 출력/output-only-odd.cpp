#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    cin >> a >> b;

    for (i=a;i<=b;i++) {
        if (i%2==1)
            cout << i << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}