#include <iostream>
using namespace std;

int main() {
    int a[10];
    int cnt = 0;
    int sum = 0;

    for (int i=0; i<10; i++) {
        cin >> a[i];

        if (a[i]==0) {
            break;
        }

        if (a[i]%2==0) {
            cnt ++;
            sum += a[i];
        }
    }

    cout << cnt << " " << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}