#include <iostream>
using namespace std;

int main() {
    int a[10];
    int sum1=0;
    int sum2=0;

    for (int i=0;i<10;i++) {
        cin >> a[i];
    }
    for (int i=0;i<10;i+=2) {
        sum1 += a[i];
    }
    for (int i=1;i<10;i+=2) {
        sum2 += a[i];
    }

    if (sum1>=sum2) {
        cout << sum1-sum2;
    }
    else if (sum2>sum1) {
        cout << sum2-sum1;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}