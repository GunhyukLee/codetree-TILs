#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[10];
    int val_max= INT_MIN;
    for (int i=0; i<10; i++) {
        cin >> a[i];
        if (a[i]>=val_max) {
            val_max = a[i];
        }
    }
    cout << val_max;
    // 여기에 코드를 작성해주세요.
    return 0;
}