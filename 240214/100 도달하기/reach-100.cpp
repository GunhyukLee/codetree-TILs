#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    a[0] = 1;
    a[1] = n;

    for (int i=2; i<100;i++) {
        a[i]=a[i-2]+a[i-1];
        if (a[i]>100) {
            break;
        }
    }
    for (int i=0;i<100;i++) {
        cout << a[i] << " ";
        if (a[i]>100) {
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}