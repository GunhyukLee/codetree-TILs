#include <iostream>
using namespace std;

int main() {
    char a[10];

    for (int i=0;i<10;i++) {
        cin >> a[i];
    }
    for (int i=9;i>=0;i--) {
        cout << a[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}