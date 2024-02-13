#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    int cnt = 0;

    for (int i=0; i<100; i++) {
        cin >> a[i];
        cnt++;
        if (a[i]==0) {
            break;
        }
    }
    cout << a[cnt-2]+a[cnt-3]+a[cnt-4];
    // 여기에 코드를 작성해주세요.
    return 0;
}