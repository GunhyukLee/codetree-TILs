#include <iostream>
using namespace std;

int main() {
    int a[100];
    int b,c;
    cin >> b >> c;

    a[0] = b;
    a[1] = c;

    for (int i=2;i<10;i++) {
        a[i] = a[i-1]+2*a[i-2];
    }
    for (int i=0;i<10;i++) {
        cout << a[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}