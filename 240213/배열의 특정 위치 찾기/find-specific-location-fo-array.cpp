#include <iostream>
using namespace std;

int main() {
    int a[10];
    int sum1 = 0;
    int cnt1 = 0;
    int sum2 = 0;
    int cnt2 = 0;

    for (int i=0;i<10;i++) {
        cin >> a[i];
    }

    for (int j=1;j<10;j+=2) {
        sum1 += a[j];
        cnt1 ++;
    }

    for (int j=2;j<10;j+=3) {
        sum2 += a[j];
        cnt2 ++;
    }

    cout << fixed, cout.precision(1);
    cout << sum1 << " " << double(sum2/cnt2);
    // 여기에 코드를 작성해주세요.
    return 0;
}